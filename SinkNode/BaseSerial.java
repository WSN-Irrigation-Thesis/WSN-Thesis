/*									tab:4
 * Copyright (c) 2005 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the copyright holders nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/**
 * Reads Data Packets sent on serial port. Sends counter on serial port.
 * 
 *
 * @author Johanna Simonsson
 * @date April 11 2014
 */

import java.io.IOException;
import java.sql.*;

import net.tinyos.message.*;
import net.tinyos.packet.*;
import net.tinyos.util.*;

public class BaseSerial implements MessageListener {


	//Global variables
	//public int SleepInterval;

	private MoteIF moteIF;

	public BaseSerial(MoteIF moteIF) {
		this.moteIF = moteIF;
		this.moteIF.registerListener(new BaseSerialMsg(), this);
	}

	public void sendPackets(int node_id, int sleep) {
		//int counter = 0;
		BaseSerialMsg payload = new BaseSerialMsg();

		try {
			System.out.println("Sending packet: Interval: " + sleep + " and Receiver: " + node_id + "." );
			System.out.println();
			payload.set_temp(sleep);
			payload.set_counter(node_id);
			moteIF.send(0, payload);
			//counter++;
		}
		catch (IOException exception) {
			System.err.println("Exception thrown when sending packets. Exiting.");
			System.err.println(exception);
		}
	}

	public void messageReceived(int to, Message message) {
		BaseSerialMsg msg = (BaseSerialMsg)message;
		System.out.println("Received packet from Node: " + msg.get_counter());
		System.out.println("Temperature: " + msg.get_temp());

		int node_id = msg.get_counter();
		int temp = msg.get_temp();
		int moist = 10;
		int timestamp = 0;
		float rain = 0;

		//Connect to test DB
		Connection c = null;
		Statement stmt = null;
		int db_flag = 0;

		try {
			if (db_flag == 0) {
				//Open connection to DB
				Class.forName("org.sqlite.JDBC");
				c = DriverManager.getConnection("jdbc:sqlite:/home/kim/Documents/Aptana_Workspace/WSN/src/db.sqlite3");
				c.setAutoCommit(false);
				System.out.println("Opened database successfully");
				db_flag = 1;
			}
			//Insert values
			stmt = c.createStatement();
			String sql = "INSERT INTO NETWORK_MEASURE_DATA (node_id_id,temp,moist,timestamp) " +
					"VALUES (" + node_id + "," + temp + "," + moist + ", datetime());"; 
			stmt.executeUpdate(sql);

			//stmt.close();
			//c.commit();
			//c.close();
		} catch ( Exception e ) {
			System.err.println( e.getClass().getName() + ": " + e.getMessage() );
			System.exit(0);
		}
		System.out.println("Records created successfully");

		try {
			//Fetch and compute what we need
			ResultSet rs = stmt.executeQuery( "SELECT * FROM WEATHER_FORECAST " +
					"WHERE date = date('now','+1 day') AND timestamp = date('now');" );
			while ( rs.next() ) {
				rain = rs.getFloat("rain");
				String date  = rs.getString("date");

				System.out.println( "RAIN = " + rain );
				System.out.println( "DATE = " + date );

			}

			rs.close();
			stmt.close();
			c.commit();
			c.close();

		} catch ( Exception e ) {
			System.err.println( e.getClass().getName() + ": " + e.getMessage() );
			System.exit(0);
		}

		int SleepInterval;

		if (rain > 0) {
			SleepInterval = 10000;
		}
		else {
			SleepInterval = 5000;
		}

		sendPackets(node_id, SleepInterval);

	}//receive msg

	private static void usage() {
		System.err.println("usage: BaseSerial [-comm <source>]");
	}

	public static void main(String[] args) throws Exception {
		String source = null;
		if (args.length == 2) {
			if (!args[0].equals("-comm")) {
				usage();
				System.exit(1);
			}
			source = args[1];
		}
		else if (args.length != 0) {
			usage();
			System.exit(1);
		}

		PhoenixSource phoenix;

		if (source == null) {
			phoenix = BuildSource.makePhoenix(PrintStreamMessenger.err);
		}
		else {
			phoenix = BuildSource.makePhoenix(source, PrintStreamMessenger.err);
		}

		MoteIF mif = new MoteIF(phoenix);
		BaseSerial serial = new BaseSerial(mif);
		//serial.sendPackets(0,0);
	}


}
