#!/usr/bin/python

import sqlite3

#Create database
db = sqlite3.connect('test_weather.db')

cursor = db.cursor()
cursor.execute('''
		CREATE TABLE weather_forecast(position TEXT(30), rain FLOAT(8,4), date TEXT(30))
		''')

db.commit()
