#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 149 "/usr/bin/../lib/gcc/msp430/4.5.3/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 211
typedef unsigned int size_t;
#line 323
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 38 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/stdint.h" 3
typedef signed char int8_t;
typedef int int16_t;
typedef long int int32_t;
__extension__ 
#line 41
typedef long long int int64_t;

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
__extension__ 
#line 46
typedef unsigned long long int uint64_t;





typedef signed char int_least8_t;
typedef int int_least16_t;
typedef long int int_least32_t;
__extension__ 
#line 55
typedef long long int int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
__extension__ 
#line 61
typedef unsigned long long int uint_least64_t;





typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef long int int_fast32_t;
__extension__ 
#line 70
typedef long long int int_fast64_t;


typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
__extension__ 
#line 76
typedef unsigned long long int uint_fast64_t;









typedef int16_t intptr_t;
typedef uint16_t uintptr_t;





__extension__ 
#line 93
typedef long long int intmax_t;
__extension__ 
#line 94
typedef unsigned long long int uintmax_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 48 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/sys/types.h" 3
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;

typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t *qaddr_t;

typedef char *caddr_t;
typedef const char *c_caddr_t;
typedef volatile char *v_caddr_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef int32_t ufs_daddr_t;
typedef int32_t ufs_time_t;
typedef u_int32_t uid_t;
# 37 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/string.h" 3
extern int memcmp(const void *arg_0x402fd690, const void *arg_0x402fd828, size_t arg_0x402fd9c0);
extern void *memcpy(void *arg_0x402fde68, const void *arg_0x40301030, size_t arg_0x403011c8);

extern void *memset(void *arg_0x40301e90, int arg_0x40300010, size_t arg_0x403001a8);
#line 61
extern void *memset(void *arg_0x4030cd30, int arg_0x4030ce88, size_t arg_0x40311030);
# 59 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/stdlib.h" 3
#line 55
typedef struct __nesc_unnamed4242 {

  int quot;
  int rem;
} div_t;







#line 63
typedef struct __nesc_unnamed4243 {

  long quot;
  long rem;
} ldiv_t;
# 122 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/sys/config.h" 3
typedef long int __int32_t;
typedef unsigned long int __uint32_t;
# 12 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/sys/_types.h" 3
typedef long _off_t;
typedef long _ssize_t;
# 19 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/sys/reent.h" 3
typedef unsigned long __ULong;
#line 31
struct _glue {

  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _atexit {
  struct _atexit *_next;
  int _ind;
  void (*_fns[32])(void );
};








struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;
#line 116
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;

  int (*_read)(void *_cookie, char *_buf, int _n);
  int (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;

  struct _reent *_data;
};
#line 174
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};









struct _reent {


  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x403313b8);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4244 {

    struct __nesc_unnamed4245 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
    } _reent;



    struct __nesc_unnamed4246 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int arg_0x40334a70);




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
#line 273
struct _reent;
# 18 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/math.h" 3
union __dmath {

  __uint32_t i[2];
  double d;
};




union __dmath;
#line 220
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 273
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 25 "/home/johanna/tinyos-main-test/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4247 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "/home/johanna/tinyos-main-test/tos/types/TinyError.h"
enum __nesc_unnamed4248 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 30 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/msp430.h" 3
#line 24
typedef enum msp430_cpu_e {

  MSP430_CPU_MSP430 = 0x0000, 
  MSP430_CPU_MSP430X = 0x0002, 
  MSP430_CPU_MSP430XV2 = 0x0003, 
  MSP430_CPU = 0x0003
} msp430_cpu_e;
#line 46
#line 34
typedef enum msp430_mpy_e {

  MSP430_MPY_NONE = 0x0000, 
  MSP430_MPY_TYPE_16 = 0x0010, 
  MSP430_MPY_TYPE_32 = 0x0020, 
  MSP430_MPY_TYPE_ANY = 0x0030, 
  MSP430_MPY_HAS_SE = 0x0001, 
  MSP430_MPY_HAS_DW = 0x0002, 
  MSP430_MPY_16 = MSP430_MPY_TYPE_16, 
  MSP430_MPY_16SE = MSP430_MPY_16 | MSP430_MPY_HAS_SE, 
  MSP430_MPY_32 = MSP430_MPY_TYPE_32 | MSP430_MPY_HAS_SE, 
  MSP430_MPY_32DW = MSP430_MPY_32 | MSP430_MPY_HAS_DW
} msp430_mpy_e;
# 43 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/in430.h" 3
void __nop(void );



void __dint(void );



void __eint(void );


unsigned int __read_status_register(void );
# 166 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/msp430f2617.h" 3
extern volatile unsigned char IFG2 __asm ("__""IFG2");
#line 193
extern volatile unsigned int ADC12CTL0 __asm ("__""ADC12CTL0");

extern volatile unsigned int ADC12CTL1 __asm ("__""ADC12CTL1");
#line 452
extern volatile unsigned char DCOCTL __asm ("__""DCOCTL");

extern volatile unsigned char BCSCTL1 __asm ("__""BCSCTL1");
#line 881
extern volatile unsigned char P1IFG __asm ("__""P1IFG");

extern volatile unsigned char P1IES __asm ("__""P1IES");

extern volatile unsigned char P1IE __asm ("__""P1IE");
#line 898
extern volatile unsigned char P2IFG __asm ("__""P2IFG");



extern volatile unsigned char P2IE __asm ("__""P2IE");
#line 1033
extern volatile unsigned int TACTL __asm ("__""TACTL");

extern volatile unsigned int TACCTL0 __asm ("__""TACCTL0");

extern volatile unsigned int TACCTL1 __asm ("__""TACCTL1");

extern volatile unsigned int TACCTL2 __asm ("__""TACCTL2");

extern volatile unsigned int TAR __asm ("__""TAR");





extern volatile unsigned int TACCR2 __asm ("__""TACCR2");
#line 1151
extern volatile unsigned int TBR __asm ("__""TBR");
#line 1234
extern volatile unsigned char UCA0CTL1 __asm ("__""UCA0CTL1");

extern volatile unsigned char UCA0BR0 __asm ("__""UCA0BR0");

extern volatile unsigned char UCA0BR1 __asm ("__""UCA0BR1");

extern volatile unsigned char UCA0MCTL __asm ("__""UCA0MCTL");



extern const volatile unsigned char UCA0RXBUF __asm ("__""UCA0RXBUF");
#line 1259
extern volatile unsigned char UCB0CTL1 __asm ("__""UCB0CTL1");

extern volatile unsigned char UCB0BR0 __asm ("__""UCB0BR0");

extern volatile unsigned char UCB0BR1 __asm ("__""UCB0BR1");





extern const volatile unsigned char UCB0RXBUF __asm ("__""UCB0RXBUF");
#line 1281
extern volatile unsigned char UCA1CTL1 __asm ("__""UCA1CTL1");
#line 1306
extern volatile unsigned char UCB1CTL1 __asm ("__""UCB1CTL1");
#line 1497
extern volatile unsigned int WDTCTL __asm ("__""WDTCTL");
#line 1594
extern const volatile unsigned char CALDCO_8MHZ __asm ("__""CALDCO_8MHZ");

extern const volatile unsigned char CALBC1_8MHZ __asm ("__""CALBC1_8MHZ");
# 378 "/home/johanna/tinyos-main-test/tos/chips/msp430/msp430hardware.h"
typedef uint8_t mcu_power_t  ;
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;


enum __nesc_unnamed4249 {
  MSP430_POWER_ACTIVE = 0, 
  MSP430_POWER_LPM0 = 1, 
  MSP430_POWER_LPM1 = 2, 
  MSP430_POWER_LPM2 = 3, 
  MSP430_POWER_LPM3 = 4, 
  MSP430_POWER_LPM4 = 5
};

static inline void __nesc_disable_interrupt(void )  ;





static inline void __nesc_enable_interrupt(void )  ;




typedef bool __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts);






__nesc_atomic_t __nesc_atomic_start(void )   ;







void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)   ;
#line 433
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
#line 448
enum __nesc_unnamed4250 {
  MSP430_PORT_RESISTOR_INVALID, 
  MSP430_PORT_RESISTOR_OFF, 
  MSP430_PORT_RESISTOR_PULLDOWN, 
  MSP430_PORT_RESISTOR_PULLUP
};
# 47 "SenseNode.h"
#line 44
typedef nx_struct radio_count_msg {
  nx_uint16_t node_id;
  nx_uint16_t temp;
} __attribute__((packed)) radio_count_msg_t;

enum __nesc_unnamed4251 {
  AM_RADIO_COUNT_MSG = 6
};
# 40 "/usr/bin/../lib/gcc/msp430/4.5.3/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 102
typedef __gnuc_va_list va_list;
# 52 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/stdio.h" 3
int __attribute((format(printf, 1, 2))) printf(const char *string, ...);






int putchar(int c);
# 39 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4252 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4253 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/home/johanna/tinyos-main-test/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4254 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4255 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/home/johanna/tinyos-main-test/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4256 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4257 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4258 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 59 "/home/johanna/tinyos-main-test/tos/platforms/z1/platform_message.h"
#line 56
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 61
typedef union TOSRadioFooter {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 65
typedef union TOSRadioMetadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/home/johanna/tinyos-main-test/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 72 "/home/johanna/tinyos-main-test/tos/lib/printf/printf.h"
int printfflush();






#line 77
typedef nx_struct printf_msg {
  nx_uint8_t buffer[28];
} __attribute__((packed)) printf_msg_t;

enum __nesc_unnamed4259 {
  AM_PRINTF_MSG = 100
};
# 55 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/timer/Msp430XDcoCalib.h"
static inline void Set_DCO(unsigned int Delta);
#line 108
static inline void Set_DCO(unsigned int Delta);
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4260 {
  MSP430TIMER_CM_NONE = 0, 
  MSP430TIMER_CM_RISING = 1, 
  MSP430TIMER_CM_FALLING = 2, 
  MSP430TIMER_CM_BOTH = 3, 

  MSP430TIMER_STOP_MODE = 0, 
  MSP430TIMER_UP_MODE = 1, 
  MSP430TIMER_CONTINUOUS_MODE = 2, 
  MSP430TIMER_UPDOWN_MODE = 3, 

  MSP430TIMER_TACLK = 0, 
  MSP430TIMER_TBCLK = 0, 
  MSP430TIMER_ACLK = 1, 
  MSP430TIMER_SMCLK = 2, 
  MSP430TIMER_INCLK = 3, 

  MSP430TIMER_CLOCKDIV_1 = 0, 
  MSP430TIMER_CLOCKDIV_2 = 1, 
  MSP430TIMER_CLOCKDIV_4 = 2, 
  MSP430TIMER_CLOCKDIV_8 = 3
};
#line 75
#line 62
typedef struct __nesc_unnamed4261 {

  int ccifg : 1;
  int cov : 1;
  int out : 1;
  int cci : 1;
  int ccie : 1;
  int outmod : 3;
  int cap : 1;
  int clld : 2;
  int scs : 1;
  int ccis : 2;
  int cm : 2;
} msp430_compare_control_t;
#line 87
#line 77
typedef struct __nesc_unnamed4262 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} msp430_timer_a_control_t;
#line 102
#line 89
typedef struct __nesc_unnamed4263 {

  int tbifg : 1;
  int tbie : 1;
  int tbclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tbssel : 2;
  int _unused1 : 1;
  int cntl : 2;
  int tbclgrp : 2;
  int _unused2 : 1;
} msp430_timer_b_control_t;
# 41 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4264 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4265 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4266 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4267 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12.h"
#line 48
typedef struct __nesc_unnamed4268 {

  unsigned int inch : 4;
  unsigned int sref : 3;
  unsigned int ref2_5v : 1;
  unsigned int adc12ssel : 2;
  unsigned int adc12div : 3;
  unsigned int sht : 4;
  unsigned int sampcon_ssel : 2;
  unsigned int sampcon_id : 2;
  unsigned int  : 0;
} msp430adc12_channel_config_t;








#line 61
typedef struct __nesc_unnamed4269 {


  volatile unsigned 
  inch : 4, 
  sref : 3, 
  eos : 1;
} __attribute((packed))  adc12memctl_t;

enum inch_enum {


  INPUT_CHANNEL_A0 = 0, 
  INPUT_CHANNEL_A1 = 1, 
  INPUT_CHANNEL_A2 = 2, 
  INPUT_CHANNEL_A3 = 3, 
  INPUT_CHANNEL_A4 = 4, 
  INPUT_CHANNEL_A5 = 5, 
  INPUT_CHANNEL_A6 = 6, 
  INPUT_CHANNEL_A7 = 7, 
  EXTERNAL_REF_VOLTAGE_CHANNEL = 8, 
  REF_VOLTAGE_NEG_TERMINAL_CHANNEL = 9, 
  TEMPERATURE_DIODE_CHANNEL = 10, 
  SUPPLY_VOLTAGE_HALF_CHANNEL = 11, 
  INPUT_CHANNEL_NONE = 12
};

enum sref_enum {

  REFERENCE_AVcc_AVss = 0, 
  REFERENCE_VREFplus_AVss = 1, 
  REFERENCE_VeREFplus_AVss = 2, 
  REFERENCE_AVcc_VREFnegterm = 4, 
  REFERENCE_VREFplus_VREFnegterm = 5, 
  REFERENCE_VeREFplus_VREFnegterm = 6
};

enum ref2_5v_enum {

  REFVOLT_LEVEL_1_5 = 0, 
  REFVOLT_LEVEL_2_5 = 1, 
  REFVOLT_LEVEL_NONE = 0
};

enum adc12ssel_enum {

  SHT_SOURCE_ADC12OSC = 0, 
  SHT_SOURCE_ACLK = 1, 
  SHT_SOURCE_MCLK = 2, 
  SHT_SOURCE_SMCLK = 3
};

enum adc12div_enum {

  SHT_CLOCK_DIV_1 = 0, 
  SHT_CLOCK_DIV_2 = 1, 
  SHT_CLOCK_DIV_3 = 2, 
  SHT_CLOCK_DIV_4 = 3, 
  SHT_CLOCK_DIV_5 = 4, 
  SHT_CLOCK_DIV_6 = 5, 
  SHT_CLOCK_DIV_7 = 6, 
  SHT_CLOCK_DIV_8 = 7
};

enum sht_enum {

  SAMPLE_HOLD_4_CYCLES = 0, 
  SAMPLE_HOLD_8_CYCLES = 1, 
  SAMPLE_HOLD_16_CYCLES = 2, 
  SAMPLE_HOLD_32_CYCLES = 3, 
  SAMPLE_HOLD_64_CYCLES = 4, 
  SAMPLE_HOLD_96_CYCLES = 5, 
  SAMPLE_HOLD_128_CYCLES = 6, 
  SAMPLE_HOLD_192_CYCLES = 7, 
  SAMPLE_HOLD_256_CYCLES = 8, 
  SAMPLE_HOLD_384_CYCLES = 9, 
  SAMPLE_HOLD_512_CYCLES = 10, 
  SAMPLE_HOLD_768_CYCLES = 11, 
  SAMPLE_HOLD_1024_CYCLES = 12
};

enum sampcon_ssel_enum {

  SAMPCON_SOURCE_TACLK = 0, 
  SAMPCON_SOURCE_ACLK = 1, 
  SAMPCON_SOURCE_SMCLK = 2, 
  SAMPCON_SOURCE_INCLK = 3
};

enum sampcon_id_enum {

  SAMPCON_CLOCK_DIV_1 = 0, 
  SAMPCON_CLOCK_DIV_2 = 1, 
  SAMPCON_CLOCK_DIV_4 = 2, 
  SAMPCON_CLOCK_DIV_8 = 3
};
#line 199
#line 186
typedef struct __nesc_unnamed4270 {
  volatile unsigned 
  adc12sc : 1, 
  enc : 1, 
  adc12tovie : 1, 
  adc12ovie : 1, 
  adc12on : 1, 
  refon : 1, 
  r2_5v : 1, 
  msc : 1, 
  sht0 : 4, 
  sht1 : 4;
  volatile unsigned int  : 0;
} __attribute((packed))  adc12ctl0_t;
#line 212
#line 201
typedef struct __nesc_unnamed4271 {
  volatile unsigned 
  adc12busy : 1, 
  conseq : 2, 
  adc12ssel : 2, 
  adc12div : 3, 
  issh : 1, 
  shp : 1, 
  shs : 2, 
  cstartadd : 4;
  volatile unsigned int  : 0;
} __attribute((packed))  adc12ctl1_t;
# 43 "/home/johanna/tinyos-main-test/tos/types/Leds.h"
enum __nesc_unnamed4272 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 40 "/home/johanna/tinyos-main-test/tos/types/IeeeEui64.h"
enum __nesc_unnamed4273 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/home/johanna/tinyos-main-test/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4274 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4275 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4276 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4277 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 90 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/msp430usci.h"
#line 85
typedef enum __nesc_unnamed4278 {
  USCI_NONE = 0, 
  USCI_UART = 1, 
  USCI_SPI = 2, 
  USCI_I2C = 3
} msp430_uscimode_t;
#line 111
#line 103
typedef struct __nesc_unnamed4279 {
  unsigned int ucsync : 1;
  unsigned int ucmode : 2;
  unsigned int ucspb : 1;
  unsigned int uc7bit : 1;
  unsigned int ucmsb : 1;
  unsigned int ucpar : 1;
  unsigned int ucpen : 1;
} __attribute((packed))  msp430_uctl0_t;
#line 126
#line 118
typedef struct __nesc_unnamed4280 {
  unsigned int ucswrst : 1;
  unsigned int uctxbrk : 1;
  unsigned int uctxaddr : 1;
  unsigned int ucdorm : 1;
  unsigned int ucbrkie : 1;
  unsigned int ucrxeie : 1;
  unsigned int ucssel : 2;
} __attribute((packed))  msp430_uctl1_t;
#line 185
#line 145
typedef enum __nesc_unnamed4281 {
  UBR_32KHZ_1200 = 0x001B, UMCTL_32KHZ_1200 = 0x04, 
  UBR_32KHZ_2400 = 0x000D, UMCTL_32KHZ_2400 = 0x0c, 
  UBR_32KHZ_4800 = 0x0006, UMCTL_32KHZ_4800 = 0x0e, 
  UBR_32KHZ_9600 = 0x0003, UMCTL_32KHZ_9600 = 0x06, 

  UBR_1048MHZ_9600 = 0x006D, UMCTL_1048MHZ_9600 = 0x04, 
  UBR_1048MHZ_19200 = 0x0036, UMCTL_1048MHZ_19200 = 0x0a, 
  UBR_1048MHZ_38400 = 0x001B, UMCTL_1048MHZ_38400 = 0x04, 
  UBR_1048MHZ_57600 = 0x0012, UMCTL_1048MHZ_57600 = 0x0c, 
  UBR_1048MHZ_115200 = 0x0009, UMCTL_1048MHZ_115200 = 0x02, 
  UBR_1048MHZ_128000 = 0x0008, UMCTL_1048MHZ_128000 = 0x02, 
  UBR_1048MHZ_256000 = 0x0004, UMCTL_1048MHZ_230400 = 0x02, 








  UBR_1MHZ_9600 = 0x6, UMCTL_1MHZ_9600 = 0x81, 
  UBR_1MHZ_19200 = 0x3, UMCTL_1MHZ_19200 = 0x41, 
  UBR_1MHZ_57600 = 0x1, UMCTL_1MHZ_57600 = 0x0F, 

  UBR_8MHZ_4800 = 0x68, UMCTL_8MHZ_4800 = 0x31, 
  UBR_8MHZ_9600 = 0x34, UMCTL_8MHZ_9600 = 0x11, 
  UBR_8MHZ_19200 = 0x1A, UMCTL_8MHZ_19200 = 0x11, 
  UBR_8MHZ_38400 = 0x0D, UMCTL_8MHZ_38400 = 0x01, 
  UBR_8MHZ_57600 = 0x08, UMCTL_8MHZ_57600 = 0xB1, 
  UBR_8MHZ_115200 = 0x04, UMCTL_8MHZ_115200 = 0x3B, 
  UBR_8MHZ_230400 = 0x02, UMCTL_8MHZ_230400 = 0x27, 

  UBR_16MHZ_4800 = 0xD0, UMCTL_16MHZ_4800 = 0x51, 
  UBR_16MHZ_9600 = 0x68, UMCTL_16MHZ_9600 = 0x31, 
  UBR_16MHZ_19200 = 0x34, UMCTL_16MHZ_19200 = 0x11, 
  UBR_16MHZ_38400 = 0x1A, UMCTL_16MHZ_38400 = 0x11, 
  UBR_16MHZ_57600 = 0x11, UMCTL_16MHZ_57600 = 0x61, 
  UBR_16MHZ_115200 = 0x8, UMCTL_16MHZ_115200 = 0xB1, 
  UBR_16MHZ_230400 = 0x4, UMCTL_16MHZ_230400 = 0x3B
} msp430_uart_rate_t;
#line 211
#line 188
typedef struct __nesc_unnamed4282 {
  unsigned int ubr : 16;
  unsigned int umctl : 8;


  unsigned int  : 1;
  unsigned int ucmode : 2;
  unsigned int ucspb : 1;
  unsigned int uc7bit : 1;
  unsigned int  : 1;
  unsigned int ucpar : 1;
  unsigned int ucpen : 1;


  unsigned int  : 5;
  unsigned int ucrxeie : 1;
  unsigned int ucssel : 2;




  unsigned int utxe : 1;
  unsigned int urxe : 1;
} msp430_uart_config_t;







#line 213
typedef struct __nesc_unnamed4283 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl0;
  uint8_t uctl1;
  uint8_t ume;
} msp430_uart_registers_t;




#line 221
typedef union __nesc_unnamed4284 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;


const msp430_uart_union_config_t msp430_uart_default_config = { { 
.ubr = UBR_8MHZ_115200, 
.umctl = UMCTL_8MHZ_115200, 
.ucmode = 0, 
.ucspb = 0, 
.uc7bit = 0, 
.ucpar = 0, 
.ucpen = 0, 
.ucrxeie = 0, 
.ucssel = 2, 
.utxe = 1, 
.urxe = 1 } };
#line 264
#line 248
typedef struct __nesc_unnamed4285 {
  unsigned int ubr : 16;


  unsigned int  : 1;
  unsigned int ucmode : 2;
  unsigned int ucmst : 1;
  unsigned int uc7bit : 1;
  unsigned int ucmsb : 1;
  unsigned int ucckpl : 1;
  unsigned int ucckph : 1;


  unsigned int  : 1;
  unsigned int  : 5;
  unsigned int ucssel : 2;
} msp430_spi_config_t;






#line 267
typedef struct __nesc_unnamed4286 {
  uint16_t ubr;
  uint8_t uctl0;
  uint8_t uctl1;
} msp430_spi_registers_t;




#line 273
typedef union __nesc_unnamed4287 {
  msp430_spi_config_t spiConfig;
  msp430_spi_registers_t spiRegisters;
} msp430_spi_union_config_t;
#line 305
#line 297
typedef struct __nesc_unnamed4288 {
  unsigned int  : 1;
  unsigned int ucmode : 2;
  unsigned int ucmst : 1;
  unsigned int  : 1;
  unsigned int ucmm : 1;
  unsigned int ucsla10 : 1;
  unsigned int uca10 : 1;
} __attribute((packed))  msp430_i2cctl0_t;
#line 320
#line 312
typedef struct __nesc_unnamed4289 {
  unsigned int ucswrst : 1;
  unsigned int uctxstt : 1;
  unsigned int uctxstp : 1;
  unsigned int uctxnack : 1;
  unsigned int uctr : 1;
  unsigned int  : 1;
  unsigned int ucssel : 2;
} __attribute((packed))  msp430_i2cctl1_t;
#line 348
#line 323
typedef struct __nesc_unnamed4290 {
  uint16_t ubr : 16;


  uint8_t  : 1;
  uint8_t ucmode : 2;
  uint8_t ucmst : 1;
  uint8_t  : 1;
  uint8_t ucmm : 1;
  uint8_t ucsla10 : 1;
  uint8_t uca10 : 1;


  uint8_t  : 1;
  uint8_t  : 1;
  uint8_t  : 1;
  uint8_t  : 1;
  uint8_t uctr : 1;
  uint8_t  : 1;
  uint8_t ucssel : 2;


  uint16_t i2coa : 10;
  uint8_t  : 5;
  uint8_t ucgcen : 1;
} msp430_i2c_config_t;






#line 350
typedef struct __nesc_unnamed4291 {
  uint16_t ubr;
  uint8_t uctl0;
  uint8_t uctl1;
  uint16_t ui2coa;
} msp430_i2c_registers_t;




#line 357
typedef union __nesc_unnamed4292 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
# 33 "/home/johanna/tinyos-main-test/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 43 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;





#line 45
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  timesync_radio_t timestamp;
} __attribute__((packed)) timesync_footer_t;
# 91 "/home/johanna/tinyos-main-test/tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b);
typedef TMilli SenseNodeC__IdleAlarm__precision_tag;
typedef uint16_t SenseNodeC__IdleAlarm__size_type;
typedef uint16_t SenseNodeC__VoltageRead__val_t;
typedef TMilli SenseNodeC__MilliTimer__precision_tag;
typedef const msp430adc12_channel_config_t *SenseNodeC__VoltageConfigure__adc_config_t;
enum AMQueueP____nesc_unnamed4293 {
  AMQueueP__NUM_CLIENTS = 1U
};
enum CC2420ActiveMessageC____nesc_unnamed4294 {
  CC2420ActiveMessageC__CC2420_AM_SEND_ID = 0U
};
typedef T32khz CC2420ControlP__StartupTimer__precision_tag;
typedef uint32_t CC2420ControlP__StartupTimer__size_type;
typedef uint16_t CC2420ControlP__ReadRssi__val_t;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4295 {
  Msp430Timer32khzC__0__ALARM_ID = 0U
};
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__frequency_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC__0____nesc_unnamed4296 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0____nesc_unnamed4297 {
  Msp430SpiB0C__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0____nesc_unnamed4298 {
  Msp430UsciB0C__0__CLIENT_ID = 1U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1____nesc_unnamed4299 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC__2____nesc_unnamed4300 {
  CC2420SpiC__2__CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420TransmitP__PacketTimeStamp__size_type;
typedef T32khz CC2420TransmitP__BackoffTimer__precision_tag;
typedef uint32_t CC2420TransmitP__BackoffTimer__size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC__3____nesc_unnamed4301 {
  CC2420SpiC__3__CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420ReceiveP__PacketTimeStamp__size_type;
typedef T32khz CC2420PacketP__PacketTimeStamp32khz__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStamp32khz__size_type;
typedef T32khz CC2420PacketP__LocalTime32khz__precision_tag;
typedef TMilli CC2420PacketP__LocalTimeMilli__precision_tag;
typedef TMilli CC2420PacketP__PacketTimeStampMilli__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStampMilli__size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__1____nesc_unnamed4302 {
  Msp430Timer32khzC__1__ALARM_ID = 1U
};
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__frequency_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__frequency_tag /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type;
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__4____nesc_unnamed4303 {
  CC2420SpiC__4__CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum CC2420TinyosNetworkC____nesc_unnamed4304 {
  CC2420TinyosNetworkC__TINYOS_N_NETWORKS = 1U
};
enum /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__2____nesc_unnamed4305 {
  Msp430Timer32khzC__2__ALARM_ID = 2U
};
typedef T32khz /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__frequency_tag;
typedef /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__frequency_tag /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__precision_tag;
typedef uint16_t /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type;
typedef TMilli /*CounterMilli16C.Transform*/TransformCounterC__2__to_precision_tag;
typedef uint16_t /*CounterMilli16C.Transform*/TransformCounterC__2__to_size_type;
typedef T32khz /*CounterMilli16C.Transform*/TransformCounterC__2__from_precision_tag;
typedef uint16_t /*CounterMilli16C.Transform*/TransformCounterC__2__from_size_type;
typedef uint8_t /*CounterMilli16C.Transform*/TransformCounterC__2__upper_count_type;
typedef /*CounterMilli16C.Transform*/TransformCounterC__2__from_precision_tag /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__precision_tag;
typedef /*CounterMilli16C.Transform*/TransformCounterC__2__from_size_type /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__size_type;
typedef /*CounterMilli16C.Transform*/TransformCounterC__2__to_precision_tag /*CounterMilli16C.Transform*/TransformCounterC__2__Counter__precision_tag;
typedef /*CounterMilli16C.Transform*/TransformCounterC__2__to_size_type /*CounterMilli16C.Transform*/TransformCounterC__2__Counter__size_type;
typedef TMilli /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_precision_tag;
typedef uint16_t /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type;
typedef T32khz /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__from_precision_tag;
typedef uint16_t /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__from_size_type;
typedef /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_precision_tag /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__precision_tag;
typedef /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__size_type;
typedef /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__from_precision_tag /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__precision_tag;
typedef /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__from_size_type /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__size_type;
typedef /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_precision_tag /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Counter__precision_tag;
typedef /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Counter__size_type;
enum SerialAMQueueP____nesc_unnamed4306 {
  SerialAMQueueP__NUM_CLIENTS = 1U
};
enum /*PlatformSerialC.UartC*/Msp430Uart0C__0____nesc_unnamed4307 {
  Msp430Uart0C__0__CLIENT_ID = 0U
};
typedef T32khz /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__precision_tag;
typedef uint16_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__size_type;
enum /*PlatformSerialC.UartC.UsciC*/Msp430UsciA0C__0____nesc_unnamed4308 {
  Msp430UsciA0C__0__CLIENT_ID = 1U
};
typedef uint8_t /*PrintfC.QueueC*/QueueC__0__queue_t;
typedef /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__t;
typedef uint8_t PrintfP__Queue__t;
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
typedef const msp430adc12_channel_config_t *AdcP__Config__adc_config_t;
typedef TMilli Msp430RefVoltGeneratorP__SwitchOffTimer__precision_tag;
typedef TMilli Msp430RefVoltGeneratorP__SwitchOffSettleTimer__precision_tag;
typedef TMilli Msp430RefVoltGeneratorP__SwitchOnTimer__precision_tag;
typedef const msp430adc12_channel_config_t *Msp430RefVoltArbiterImplP__Config__adc_config_t;
enum /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0____nesc_unnamed4309 {
  Msp430Adc12ClientAutoRVGC__0__ID = 0U
};
typedef const msp430adc12_channel_config_t */*SenseNodeAppC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__adc_config_t;
typedef const msp430adc12_channel_config_t */*SenseNodeAppC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__adc_config_t;
enum /*SenseNodeAppC.AdcReadClientC*/AdcReadClientC__0____nesc_unnamed4310 {
  AdcReadClientC__0__CLIENT = 0U
};
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
# 46 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 43
static void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );



static void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );





static void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 41
static void Msp430ClockP__Msp430ClockInit__default__initClocks(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t Msp430ClockP__Init__init(void );
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x4056f850);
# 50 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(int mode);
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x4056f850);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );



static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(msp430_compare_control_t control);
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t time);
# 42 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t time);
# 42 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t delta);
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 68
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 42
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
# 42 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t delta);
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t time);
# 42 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void );
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t delta);
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t time);
# 42 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t time);
# 42 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t time);
# 42 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 76 "/home/johanna/tinyos-main-test/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/home/johanna/tinyos-main-test/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x404ac5c0);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/home/johanna/tinyos-main-test/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x404ac5c0);
# 57 "/home/johanna/tinyos-main-test/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 113 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static void SenseNodeC__AMControl__startDone(error_t error);
#line 138
static void SenseNodeC__AMControl__stopDone(error_t error);
# 60 "/home/johanna/tinyos-main-test/tos/interfaces/Boot.nc"
static void SenseNodeC__Boot__booted(void );
# 110 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static void SenseNodeC__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void SenseNodeC__IdleAlarm__fired(void );
# 63 "/home/johanna/tinyos-main-test/tos/interfaces/Read.nc"
static void SenseNodeC__VoltageRead__readDone(error_t result, SenseNodeC__VoltageRead__val_t val);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



SenseNodeC__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 83 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static void SenseNodeC__MilliTimer__fired(void );
# 58 "/home/johanna/tinyos-main-test/tos/interfaces/AdcConfigure.nc"
static SenseNodeC__VoltageConfigure__adc_config_t SenseNodeC__VoltageConfigure__getConfiguration(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
#line 94
static void LedsP__Leds__led2Off(void );
#line 89
static void LedsP__Leds__led2On(void );
# 73 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__getRaw(void );






static bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__getRaw(void );
#line 78
static void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__makeInput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__getRaw(void );
#line 85
static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__set(void );




static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__clr(void );
#line 99
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIORenP__20__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIORenP__20__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIORenP__21__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIORenP__21__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__makeInput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__get(void );
#line 99
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__selectIOFunc(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__getRaw(void );
#line 92
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__selectModuleFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__set(void );




static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__set(void );




static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__clr(void );




static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__toggle(void );
#line 85
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__set(void );
#line 85
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__set(void );




static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__set(void );
#line 78
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIORenP__40__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIORenP__40__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIORenP__40__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIORenP__41__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIORenP__41__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIORenP__41__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIORenP__42__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIORenP__42__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIORenP__42__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIORenP__43__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIORenP__43__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIORenP__43__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIORenP__44__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIORenP__44__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIORenP__44__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIORenP__45__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIORenP__45__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIORenP__45__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIORenP__46__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIORenP__46__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIORenP__46__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIORenP__47__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIORenP__47__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIORenP__47__IO__selectModuleFunc(void );
# 42 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );





static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );





static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static error_t /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static void /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
am_id_t arg_0x407f82b0, 
# 103 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407f98a8, 
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407f98a8, 
# 96 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 104 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static error_t CC2420CsmaP__SplitControl__start(void );
#line 130
static error_t CC2420CsmaP__SplitControl__stop(void );
# 81 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 73 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420CsmaP__CC2420Transmit__sendDone(message_t * p_msg, error_t error);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static error_t CC2420CsmaP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
# 76 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420CsmaP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420CsmaP__CC2420Power__startVRegDone(void );
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void CC2420CsmaP__Resource__granted(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void CC2420CsmaP__sendDone_task__runTask(void );
#line 75
static void CC2420CsmaP__stopDone_task__runTask(void );
#line 75
static void CC2420CsmaP__startDone_task__runTask(void );
# 93 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 117
static bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );
#line 112
static bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );
#line 66
static ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void );




static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );
#line 54
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 77
static uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__fired(void );
# 63 "/home/johanna/tinyos-main-test/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__default__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__syncDone__runTask(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void CC2420ControlP__SpiResource__granted(void );
#line 102
static void CC2420ControlP__SyncResource__granted(void );
# 71 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420ControlP__CC2420Power__stopVReg(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__sync__runTask(void );
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__Resource__release(void );
#line 88
static error_t CC2420ControlP__Resource__request(void );
# 68 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP__InterruptCCA__fired(void );
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void CC2420ControlP__RssiResource__granted(void );
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 103 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type dt);
#line 73
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void );
# 109 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 66
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 44 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void );


static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void );
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void );

static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void );
#line 43
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void );


static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void );
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void );


static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void );


static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void );
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void );
# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 54 "/home/johanna/tinyos-main-test/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );
#line 66
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__clear(void );
#line 47
static void HplMsp430InterruptP__Port14__disable(void );
#line 67
static void HplMsp430InterruptP__Port14__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port14__enable(void );









static void HplMsp430InterruptP__Port26__clear(void );
#line 72
static void HplMsp430InterruptP__Port26__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port17__clear(void );
#line 72
static void HplMsp430InterruptP__Port17__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port21__clear(void );
#line 72
static void HplMsp430InterruptP__Port21__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port12__clear(void );
#line 47
static void HplMsp430InterruptP__Port12__disable(void );
#line 67
static void HplMsp430InterruptP__Port12__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port12__enable(void );









static void HplMsp430InterruptP__Port24__clear(void );
#line 72
static void HplMsp430InterruptP__Port24__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port15__clear(void );
#line 72
static void HplMsp430InterruptP__Port15__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port27__clear(void );
#line 72
static void HplMsp430InterruptP__Port27__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port10__clear(void );
#line 72
static void HplMsp430InterruptP__Port10__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port22__clear(void );
#line 72
static void HplMsp430InterruptP__Port22__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port13__clear(void );
#line 72
static void HplMsp430InterruptP__Port13__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port25__clear(void );
#line 72
static void HplMsp430InterruptP__Port25__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port16__clear(void );
#line 72
static void HplMsp430InterruptP__Port16__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port20__clear(void );
#line 72
static void HplMsp430InterruptP__Port20__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port11__clear(void );
#line 72
static void HplMsp430InterruptP__Port11__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port23__clear(void );
#line 72
static void HplMsp430InterruptP__Port23__default__fired(void );
#line 72
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 61 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );
# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 61 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );
#line 54
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );
# 82 "/home/johanna/tinyos-main-test/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP__Fifo__continueRead(
# 46 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9a010, 
# 62 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP__Fifo__default__writeDone(
# 46 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9a010, 
# 91 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP__Fifo__write(
# 46 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9a010, 
# 82 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
# 46 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9a010, 
# 51 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP__Fifo__default__readDone(
# 46 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9a010, 
# 71 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__abortRelease(void );







static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void CC2420SpiP__SpiResource__granted(void );
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP__Ram__write(
# 47 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x40a9aa38, 
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP__Reg__read(
# 48 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a98200, 
# 55 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
# 48 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a98200, 
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__release(
# 45 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9b5c8);
# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__immediateRequest(
# 45 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9b5c8);
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__request(
# 45 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9b5c8);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void CC2420SpiP__Resource__default__granted(
# 45 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9b5c8);
# 128 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static bool CC2420SpiP__Resource__isOwner(
# 45 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9b5c8);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP__grant__runTask(void );
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(
# 49 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a989b8);
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 56 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/home/johanna/tinyos-main-test/tos/system/StateImplP.nc"
uint8_t arg_0x40ae7d10);
# 66 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "/home/johanna/tinyos-main-test/tos/system/StateImplP.nc"
uint8_t arg_0x40ae7d10, 
# 66 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "/home/johanna/tinyos-main-test/tos/system/StateImplP.nc"
uint8_t arg_0x40ae7d10);
# 45 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/home/johanna/tinyos-main-test/tos/system/StateImplP.nc"
uint8_t arg_0x40ae7d10, 
# 45 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP__State__forceState(
# 67 "/home/johanna/tinyos-main-test/tos/system/StateImplP.nc"
uint8_t arg_0x40ae7d10, 
# 51 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
uint8_t reqState);
# 65 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__unconfigure(
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b30f00);
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__configure(
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b30f00);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__runTask(void );
# 70 "/home/johanna/tinyos-main-test/tos/interfaces/SpiPacket.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__send(
# 46 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2f9f8, 
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
#line 82
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__default__sendDone(
# 46 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2f9f8, 
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 45 "/home/johanna/tinyos-main-test/tos/interfaces/SpiByte.nc"
static uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiByte__write(uint8_t tx);
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__rxDone(uint8_t data);
#line 54
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__txDone(void );
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__release(
# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b304b8);
# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__immediateRequest(
# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b304b8);
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__request(
# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b304b8);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__default__granted(
# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b304b8);
# 128 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__isOwner(
# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b304b8);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__release(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2d200);
# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__immediateRequest(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2d200);
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__request(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2d200);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__granted(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2d200);
# 128 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__isOwner(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2d200);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDmaB0P.Z1UsciP*/Z1UsciP__0__Msp430SpiConfigure__getConfig(
# 41 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/usci/Z1UsciP.nc"
uint8_t arg_0x40b5b8f8);
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
static void HplMsp430UsciB0P__UsciRawInterrupts__rxDone(uint8_t data);
#line 53
static void HplMsp430UsciB0P__UsciRawInterrupts__txDone(void );
# 93 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
static void HplMsp430UsciB0P__Usci__enableRxIntr(void );
#line 81
static void HplMsp430UsciB0P__Usci__resetUsci(bool reset);
#line 100
static void HplMsp430UsciB0P__Usci__clrRxIntr(void );
#line 92
static void HplMsp430UsciB0P__Usci__disableIntr(void );
#line 90
static void HplMsp430UsciB0P__Usci__disableRxIntr(void );










static void HplMsp430UsciB0P__Usci__clrIntr(void );
#line 64
static void HplMsp430UsciB0P__Usci__setUbr(uint16_t ubr);
#line 108
static void HplMsp430UsciB0P__Usci__tx(uint8_t data);
#line 129
static void HplMsp430UsciB0P__Usci__enableSpi(void );
#line 115
static uint8_t HplMsp430UsciB0P__Usci__rx(void );
#line 141
static void HplMsp430UsciB0P__Usci__setModeSpi(msp430_spi_union_config_t *config);
#line 98
static bool HplMsp430UsciB0P__Usci__isRxIntrPending(void );
#line 130
static void HplMsp430UsciB0P__Usci__disableSpi(void );
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__rxDone(
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
uint8_t arg_0x40bec220, 
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
uint8_t data);
#line 54
static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__txDone(
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
uint8_t arg_0x40bec220);
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__rxDone(uint8_t data);
#line 54
static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__txDone(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 79 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 53 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1b010);
# 61 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
# 55 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1b010);
# 65 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1a430);
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1a430);
# 56 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 73
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
#line 81
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1c540);
# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1c540);
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1c540);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1c540);
# 128 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(
# 54 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1c540);
# 90 "/home/johanna/tinyos-main-test/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 55 "/home/johanna/tinyos-main-test/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/home/johanna/tinyos-main-test/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 48 "/home/johanna/tinyos-main-test/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void );
# 66 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
# 61 "/home/johanna/tinyos-main-test/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffTimer__fired(void );
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t * message);
# 51 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
# 24 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__releasing(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t CC2420TransmitP__Init__init(void );
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void CC2420TransmitP__SpiResource__granted(void );
# 95 "/home/johanna/tinyos-main-test/tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP__StdControl__start(void );









static error_t CC2420TransmitP__StdControl__stop(void );
# 91 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 55 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ReceiveP__CC2420Config__syncDone(error_t error);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP__receiveDone_task__runTask(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP__Init__init(void );
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void CC2420ReceiveP__SpiResource__granted(void );
# 91 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 68 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
# 95 "/home/johanna/tinyos-main-test/tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP__StdControl__start(void );









static error_t CC2420ReceiveP__StdControl__stop(void );
# 77 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void CC2420PacketP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId);
#line 75
static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg);
# 70 "/home/johanna/tinyos-main-test/tos/interfaces/PacketTimeStamp.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(
#line 66
message_t * msg);
#line 78
static void CC2420PacketP__PacketTimeStamp32khz__set(
#line 73
message_t * msg, 




CC2420PacketP__PacketTimeStamp32khz__size_type value);
# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420PacketP__CC2420PacketBody__getMetadata(message_t * msg);
# 58 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420PacketP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC2420PacketP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 103 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void );
# 109 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e059f0);
# 92 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e059f0);
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e059f0, 
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e059f0, 
# 73 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e059f0);
# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 52 "/home/johanna/tinyos-main-test/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static void UniqueSendP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
#line 75
static error_t UniqueSendP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t UniqueSendP__Send__maxPayloadLength(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t UniqueSendP__Init__init(void );
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t UniqueReceiveP__Init__init(void );
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__DuplicateReceive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void CC2420TinyosNetworkP__grantTask__runTask(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__ActiveSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

CC2420TinyosNetworkP__ActiveSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 112
static uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__BareReceive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__release(
# 46 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40ec0780);
# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__immediateRequest(
# 46 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40ec0780);
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__request(
# 46 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40ec0780);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__default__granted(
# 46 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40ec0780);
# 125 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static 
#line 123
void * 

CC2420TinyosNetworkP__BareSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 100
static void CC2420TinyosNetworkP__BareSend__default__sendDone(
#line 96
message_t * msg, 



error_t error);
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static void CC2420ActiveMessageP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 55 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);
# 95 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__RadioBackoff__default__requestCca(
# 54 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f08148, 
# 95 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(
# 54 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f08148, 
# 81 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(
# 54 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f08148, 
# 88 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f09a98, 
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 95 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__SubBackoff__requestCca(message_t * msg);
#line 81
static void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Packet.nc"
static uint8_t CC2420ActiveMessageP__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


CC2420ActiveMessageP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );
#line 94
static void CC2420ActiveMessageP__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static error_t CC2420ActiveMessageP__AMSend__send(
# 48 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f0b010, 
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__Snoop__default__receive(
# 50 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f0a088, 
# 71 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



CC2420ActiveMessageP__Receive__default__receive(
# 49 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f0b9d0, 
# 71 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 68 "/home/johanna/tinyos-main-test/tos/interfaces/AMPacket.nc"
static am_addr_t CC2420ActiveMessageP__AMPacket__address(void );









static am_addr_t CC2420ActiveMessageP__AMPacket__destination(
#line 74
message_t * amsg);
#line 103
static void CC2420ActiveMessageP__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t CC2420ActiveMessageP__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void CC2420ActiveMessageP__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool CC2420ActiveMessageP__AMPacket__isForMe(
#line 133
message_t * amsg);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void CC2420ActiveMessageP__RadioResource__granted(void );
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void );
# 103 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(/*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type t0, /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type dt);
# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static void /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__overflow(void );
#line 64
static /*CounterMilli16C.Transform*/TransformCounterC__2__Counter__size_type /*CounterMilli16C.Transform*/TransformCounterC__2__Counter__get(void );
# 109 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__size_type /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__getNow(void );
#line 103
static void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__startAt(/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__size_type t0, /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__size_type dt);
#line 66
static void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__start(/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__size_type dt);
#line 78
static void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__fired(void );
# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Counter__overflow(void );
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(
# 48 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
am_id_t arg_0x407f82b0, 
# 103 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(
# 46 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407f98a8, 
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(
# 46 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407f98a8, 
# 96 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );
#line 75
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40f7fd90, 
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 94
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40f7c768, 
# 71 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 103
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 104 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "/home/johanna/tinyos-main-test/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41058760, 
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41058760, 
# 96 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41058120, 
# 71 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x410562a0, 
# 31 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x410562a0);
# 23 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x410562a0, 
# 23 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "/home/johanna/tinyos-main-test/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/home/johanna/tinyos-main-test/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 65 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(
# 47 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109ece0);
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(
# 47 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109ece0);
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciInterrupts__rxDone(
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x41098bd8, 
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
uint8_t data);
#line 54
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciInterrupts__txDone(
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x41098bd8);
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109a310);
# 48 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__send(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109d488, 
# 44 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len);
#line 79
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109d488, 
# 79 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109d488, 
# 95 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109d488, 
# 53 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__overflow(void );
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__release(
# 46 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109e2b8);
# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__immediateRequest(
# 46 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109e2b8);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(
# 46 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109e2b8);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__default__release(
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109b840);
# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__default__immediateRequest(
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109b840);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__granted(
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109b840);
# 128 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__default__isOwner(
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109b840);
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
static void HplMsp430UsciA0P__UsciRawInterrupts__rxDone(uint8_t data);
#line 53
static void HplMsp430UsciA0P__UsciRawInterrupts__txDone(void );
# 155 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA.nc"
static void HplMsp430UsciA0P__Usci__enableUart(void );
#line 89
static void HplMsp430UsciA0P__Usci__resetUsci(bool reset);
#line 118
static void HplMsp430UsciA0P__Usci__disableIntr(void );
#line 72
static void HplMsp430UsciA0P__Usci__setUmctl(uint8_t umctl);
#line 121
static void HplMsp430UsciA0P__Usci__enableIntr(void );





static void HplMsp430UsciA0P__Usci__clrIntr(void );
#line 68
static void HplMsp430UsciA0P__Usci__setUbr(uint16_t ubr);
#line 136
static void HplMsp430UsciA0P__Usci__tx(uint8_t data);
#line 156
static void HplMsp430UsciA0P__Usci__disableUart(void );





static void HplMsp430UsciA0P__Usci__setModeUart(msp430_uart_union_config_t *config);
#line 125
static void HplMsp430UsciA0P__Usci__clrTxIntr(void );
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__default__rxDone(
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
uint8_t arg_0x40bec220, 
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
uint8_t data);
#line 54
static void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__default__txDone(
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
uint8_t arg_0x40bec220);
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__RawInterrupts__rxDone(uint8_t data);
#line 54
static void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__RawInterrupts__txDone(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init(void );
# 53 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
# 61 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(
# 55 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1b010);
# 65 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(
# 60 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1a430);
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(
# 60 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1a430);
# 56 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 46
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void );
#line 81
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__immediateRequested(void );
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(
# 54 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1c540);
# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(
# 54 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1c540);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(
# 54 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1c540);
# 128 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static bool /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(
# 54 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1c540);
# 90 "/home/johanna/tinyos-main-test/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartConfigure.nc"
static msp430_uart_union_config_t *Z1SerialP__Msp430UartConfigure__getConfig(void );
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void Z1SerialP__Resource__granted(void );
# 95 "/home/johanna/tinyos-main-test/tos/interfaces/StdControl.nc"
static error_t Z1SerialP__StdControl__start(void );









static error_t Z1SerialP__StdControl__stop(void );
# 31 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 73 "/home/johanna/tinyos-main-test/tos/interfaces/Queue.nc"
static 
#line 71
/*PrintfC.QueueC*/QueueC__0__Queue__t  

/*PrintfC.QueueC*/QueueC__0__Queue__head(void );
#line 90
static error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(
#line 86
/*PrintfC.QueueC*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*PrintfC.QueueC*/QueueC__0__Queue__t  

/*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void );







static uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void );
# 110 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static void PrintfP__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void PrintfP__retrySend__runTask(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t PrintfP__Init__init(void );
# 49 "/home/johanna/tinyos-main-test/tos/lib/printf/Putchar.nc"
static int PrintfP__Putchar__putchar(int c);
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t PutcharP__Init__init(void );
# 60 "/home/johanna/tinyos-main-test/tos/interfaces/Boot.nc"
static void SerialStartP__Boot__booted(void );
# 113 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static void SerialStartP__SerialControl__startDone(error_t error);
#line 138
static void SerialStartP__SerialControl__stopDone(error_t error);
# 55 "/home/johanna/tinyos-main-test/tos/interfaces/Read.nc"
static error_t AdcP__Read__read(
# 38 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411c0228);
# 63 "/home/johanna/tinyos-main-test/tos/interfaces/Read.nc"
static void AdcP__Read__default__readDone(
# 38 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411c0228, 
# 63 "/home/johanna/tinyos-main-test/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/home/johanna/tinyos-main-test/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411bc700, 
# 66 "/home/johanna/tinyos-main-test/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 58 "/home/johanna/tinyos-main-test/tos/interfaces/AdcConfigure.nc"
static AdcP__Config__adc_config_t AdcP__Config__default__getConfiguration(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411ba9c8);
# 189 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP__SingleChannel__default__getData(
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411add18);
# 84 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP__SingleChannel__default__configureSingle(
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411add18, 
# 84 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 227
static uint16_t * AdcP__SingleChannel__multipleDataReady(
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411add18, 
# 227 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t AdcP__SingleChannel__singleDataReady(
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411add18, 
# 206 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t AdcP__ResourceRead__default__release(
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411bb1e0);
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t AdcP__ResourceRead__default__request(
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411bb1e0);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void AdcP__ResourceRead__granted(
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411bb1e0);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void AdcP__readDone__runTask(void );
# 107 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static void Msp430Adc12ImplP__MultiChannel__default__dataReady(
# 42 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x411f3a08, 
# 107 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
uint16_t *buffer, uint16_t numSamples);
# 112 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
static void Msp430Adc12ImplP__HplAdc12__conversionDone(uint16_t iv);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA1__fired(void );
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__default__memOverflow(
# 43 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x411f2388);
# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(
# 43 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x411f2388);
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t Msp430Adc12ImplP__Init__init(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430Adc12ImplP__TimerA__overflow(void );
# 189 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12ImplP__SingleChannel__getData(
# 41 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x411f7d20);
# 84 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12ImplP__SingleChannel__configureSingle(
# 41 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x411f7d20, 
# 84 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 227
static uint16_t * Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(
# 41 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x411f7d20, 
# 227 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t Msp430Adc12ImplP__SingleChannel__default__singleDataReady(
# 41 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x411f7d20, 
# 206 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA0__fired(void );
# 63 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t HplAdc12P__HplAdc12__getCtl0(void );
#line 82
static adc12memctl_t HplAdc12P__HplAdc12__getMCtl(uint8_t idx);
#line 106
static void HplAdc12P__HplAdc12__resetIFGs(void );
#line 118
static bool HplAdc12P__HplAdc12__isBusy(void );
#line 75
static void HplAdc12P__HplAdc12__setMCtl(uint8_t idx, adc12memctl_t memControl);
#line 128
static void HplAdc12P__HplAdc12__startConversion(void );
#line 51
static void HplAdc12P__HplAdc12__setCtl0(adc12ctl0_t control0);
#line 89
static uint16_t HplAdc12P__HplAdc12__getMem(uint8_t idx);





static void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask);
#line 123
static void HplAdc12P__HplAdc12__stopConversion(void );









static void HplAdc12P__HplAdc12__enableConversion(void );
#line 57
static void HplAdc12P__HplAdc12__setCtl1(adc12ctl1_t control1);
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceRequested.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x412c9770);
# 65 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x412c8430);
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x412c8430);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x412ccc78);
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x412ccc78);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x412ccc78);
# 98 "/home/johanna/tinyos-main-test/tos/interfaces/ArbiterInfo.nc"
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 112 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
static void Msp430RefVoltGeneratorP__HplAdc12__conversionDone(uint16_t iv);
# 83 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOffTimer__fired(void );
# 104 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__start(void );
#line 130
static error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__stop(void );
# 83 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__fired(void );
# 104 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__start(void );
#line 130
static error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__stop(void );
# 83 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOnTimer__fired(void );
# 58 "/home/johanna/tinyos-main-test/tos/interfaces/AdcConfigure.nc"
static Msp430RefVoltArbiterImplP__Config__adc_config_t Msp430RefVoltArbiterImplP__Config__default__getConfiguration(
# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x4132f7f8);
# 113 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error_t error);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__default__release(
# 40 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x41332c98);
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__default__request(
# 40 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x41332c98);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP__AdcResource__granted(
# 40 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x41332c98);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__ClientResource__release(
# 38 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x413321e0);
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__ClientResource__request(
# 38 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x413321e0);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP__ClientResource__default__granted(
# 38 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x413321e0);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void Msp430RefVoltArbiterImplP__switchOff__runTask(void );
# 113 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static void Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error_t error);
# 58 "/home/johanna/tinyos-main-test/tos/interfaces/AdcConfigure.nc"
static /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__adc_config_t /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t PlatformP__Msp430ClockInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
# 50 "/home/johanna/tinyos-main-test/tos/platforms/z1/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__initTimerB(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__initTimerA(void );
#line 41
static void Msp430ClockP__Msp430ClockInit__initClocks(void );
# 54 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/timer/Msp430ClockP.nc"
static volatile uint8_t Msp430ClockP__IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP__TACTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP__TAIV __asm ("0x012E");
static volatile uint16_t Msp430ClockP__TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP__TBIV __asm ("0x011E");

enum Msp430ClockP____nesc_unnamed4311 {

  Msp430ClockP__ACLK_CALIB_PERIOD = 8, 
  Msp430ClockP__TARGET_DCO_DELTA = 4096 / 32 * Msp430ClockP__ACLK_CALIB_PERIOD
};

static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
#line 82
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 117
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 132
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 152
static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );





static inline void Msp430ClockP__startTimerA(void );
#line 180
static inline void Msp430ClockP__startTimerB(void );
#line 246
static inline error_t Msp430ClockP__Init__init(void );
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x4056f850);
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
# 91 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(int mode);
#line 126
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x4056f850);
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void );
# 62 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
#line 81
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
#line 126
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );








static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n);
# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t;


static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__CC2int(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
#line 100
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x);
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t;


static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void );
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)  ;
#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm);
#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 130
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 175
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
#line 192
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void );
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void );
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t;


static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t;


static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t;


static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t;


static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerB1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA0__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerB0__fired(void );
# 11 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0032)))  ;
void sig_TIMERA1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0030)))  ;
void sig_TIMERB0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x003A)))  ;
void sig_TIMERB1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0038)))  ;
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 59 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/McuSleepC.nc"
bool McuSleepC__dirty = TRUE;
mcu_power_t McuSleepC__powerState = MSP430_POWER_ACTIVE;




const uint16_t McuSleepC__msp430PowerBits[MSP430_POWER_LPM4 + 1] = { 
0, 
0x0010, 
0x0040 + 0x0010, 
0x0080 + 0x0010, 
0x0080 + 0x0040 + 0x0010, 
0x0080 + 0x0040 + 0x0020 + 0x0010 };


static inline mcu_power_t McuSleepC__getPowerState(void );
#line 107
static inline void McuSleepC__computePowerState(void );




static void McuSleepC__McuSleep__sleep(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/home/johanna/tinyos-main-test/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/home/johanna/tinyos-main-test/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/home/johanna/tinyos-main-test/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/home/johanna/tinyos-main-test/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x404ac5c0);
# 76 "/home/johanna/tinyos-main-test/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/home/johanna/tinyos-main-test/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4312 {

  SchedulerBasicP__NUM_TASKS = 27U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 104 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static error_t SenseNodeC__AMControl__start(void );
#line 130
static error_t SenseNodeC__AMControl__stop(void );
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static error_t SenseNodeC__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 66 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void SenseNodeC__IdleAlarm__start(SenseNodeC__IdleAlarm__size_type dt);
# 126 "/home/johanna/tinyos-main-test/tos/interfaces/Packet.nc"
static 
#line 123
void * 


SenseNodeC__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 55 "/home/johanna/tinyos-main-test/tos/interfaces/Read.nc"
static error_t SenseNodeC__VoltageRead__read(void );
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static void SenseNodeC__MilliTimer__startPeriodic(uint32_t dt);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/Leds.nc"
static void SenseNodeC__Leds__led0Toggle(void );
#line 94
static void SenseNodeC__Leds__led2Off(void );
#line 89
static void SenseNodeC__Leds__led2On(void );
# 76 "/home/johanna/tinyos-main-test/tos/interfaces/McuSleep.nc"
static void SenseNodeC__PowerManager__sleep(void );
# 89 "SenseNodeC.nc"
const msp430adc12_channel_config_t SenseNodeC__config = { 
.inch = INPUT_CHANNEL_A0, 
.sref = REFERENCE_VREFplus_AVss, 
.ref2_5v = REFVOLT_LEVEL_1_5, 
.adc12ssel = SHT_SOURCE_ACLK, 
.adc12div = SHT_CLOCK_DIV_1, 
.sht = SAMPLE_HOLD_4_CYCLES, 
.sampcon_ssel = SAMPCON_SOURCE_SMCLK, 
.sampcon_id = SAMPCON_CLOCK_DIV_1 };



message_t SenseNodeC__packet;
bool SenseNodeC__locked;
bool SenseNodeC__listen_flag;


uint32_t SenseNodeC__sleep_interval = 5000;
uint16_t SenseNodeC__listen_interval = 500;
uint16_t SenseNodeC__sensor_val;
uint16_t SenseNodeC__receive_count = 0;


static inline void SenseNodeC__Boot__booted(void );
#line 124
static inline void SenseNodeC__MilliTimer__fired(void );
#line 144
static void SenseNodeC__VoltageRead__readDone(error_t result, uint16_t val);
#line 181
static inline void SenseNodeC__AMControl__startDone(error_t err);
#line 217
static inline void SenseNodeC__AMControl__stopDone(error_t err);
#line 230
static inline void SenseNodeC__IdleAlarm__fired(void );









static inline message_t *SenseNodeC__Receive__receive(message_t *bufPtr, 
void *payload, uint8_t len);
#line 264
static void SenseNodeC__AMSend__sendDone(message_t *bufPtr, error_t error);








static inline const msp430adc12_channel_config_t *SenseNodeC__VoltageConfigure__getConfiguration(void );
# 42 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );





static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 56 "/home/johanna/tinyos-main-test/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 84
static inline void LedsP__Leds__led0Toggle(void );
#line 104
static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__get(void );
#line 51
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__get(void );
#line 51
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__makeInput(void );
#line 48
static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__set(void );
static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__makeOutput(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectIOFunc(void );
#line 57
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectIOFunc(void );
#line 57
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectIOFunc(void );
#line 57
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIORenP__20__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIORenP__20__IO__selectIOFunc(void );
#line 57
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIORenP__21__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIORenP__21__IO__selectIOFunc(void );
#line 51
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__selectIOFunc(void );
#line 48
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__set(void );
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__makeOutput(void );
#line 48
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__set(void );

static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__makeOutput(void );
#line 48
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__set(void );






static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__makeOutput(void );
#line 53
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIORenP__40__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIORenP__40__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIORenP__40__IO__selectIOFunc(void );
#line 53
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIORenP__41__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIORenP__41__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIORenP__41__IO__selectIOFunc(void );
#line 53
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIORenP__42__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIORenP__42__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIORenP__42__IO__selectIOFunc(void );
#line 53
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIORenP__43__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIORenP__43__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIORenP__43__IO__selectIOFunc(void );
#line 53
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIORenP__44__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIORenP__44__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIORenP__44__IO__selectIOFunc(void );
#line 53
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIORenP__45__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIORenP__45__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIORenP__45__IO__selectIOFunc(void );
#line 53
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIORenP__46__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIORenP__46__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIORenP__46__IO__selectIOFunc(void );
#line 53
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIORenP__47__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIORenP__47__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIORenP__47__IO__selectIOFunc(void );
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle(void );
#line 85
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );

static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
# 85 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );





static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
# 85 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
# 110 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static void /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static error_t /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/home/johanna/tinyos-main-test/tos/interfaces/AMPacket.nc"
static void /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/home/johanna/tinyos-main-test/tos/system/AMQueueEntryP.nc"
static inline error_t /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
am_id_t arg_0x407f82b0, 
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407f98a8, 
# 96 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4313 {
#line 126
  AMQueueImplP__0__CancelTask = 0U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4314 {
#line 169
  AMQueueImplP__0__errorTask = 1U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4315 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1 / 8 + 1];

static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 90
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 163
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 189
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 113 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static void CC2420CsmaP__SplitControl__startDone(error_t error);
#line 138
static void CC2420CsmaP__SplitControl__stopDone(error_t error);
# 95 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg);
#line 81
static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg);
#line 66
static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime);
# 51 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca);
# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static void CC2420CsmaP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "/home/johanna/tinyos-main-test/tos/interfaces/Random.nc"
static uint16_t CC2420CsmaP__Random__rand16(void );
# 95 "/home/johanna/tinyos-main-test/tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP__SubControl__start(void );









static error_t CC2420CsmaP__SubControl__stop(void );
# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg);
# 71 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420CsmaP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420CsmaP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420CsmaP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420CsmaP__CC2420Power__stopVReg(void );
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420CsmaP__Resource__release(void );
#line 88
static error_t CC2420CsmaP__Resource__request(void );
# 66 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState);
#line 45
static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState);





static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t CC2420CsmaP__sendDone_task__postTask(void );
#line 67
static error_t CC2420CsmaP__stopDone_task__postTask(void );
#line 67
static error_t CC2420CsmaP__startDone_task__postTask(void );
# 74 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP____nesc_unnamed4316 {
#line 74
  CC2420CsmaP__startDone_task = 2U
};
#line 74
typedef int CC2420CsmaP____nesc_sillytask_startDone_task[CC2420CsmaP__startDone_task];
enum CC2420CsmaP____nesc_unnamed4317 {
#line 75
  CC2420CsmaP__stopDone_task = 3U
};
#line 75
typedef int CC2420CsmaP____nesc_sillytask_stopDone_task[CC2420CsmaP__stopDone_task];
enum CC2420CsmaP____nesc_unnamed4318 {
#line 76
  CC2420CsmaP__sendDone_task = 4U
};
#line 76
typedef int CC2420CsmaP____nesc_sillytask_sendDone_task[CC2420CsmaP__sendDone_task];
#line 58
enum CC2420CsmaP____nesc_unnamed4319 {
  CC2420CsmaP__S_STOPPED, 
  CC2420CsmaP__S_STARTING, 
  CC2420CsmaP__S_STARTED, 
  CC2420CsmaP__S_STOPPING, 
  CC2420CsmaP__S_TRANSMITTING
};

message_t * CC2420CsmaP__m_msg;

error_t CC2420CsmaP__sendErr = SUCCESS;


bool CC2420CsmaP__ccaOn;






static inline void CC2420CsmaP__shutdown(void );


static error_t CC2420CsmaP__SplitControl__start(void );
#line 96
static error_t CC2420CsmaP__SplitControl__stop(void );
#line 122
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len);
#line 173
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
#line 205
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP__CC2420Power__startVRegDone(void );



static inline void CC2420CsmaP__Resource__granted(void );



static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void );




static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg);






static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg);
#line 244
static inline void CC2420CsmaP__sendDone_task__runTask(void );
#line 257
static inline void CC2420CsmaP__startDone_task__runTask(void );







static inline void CC2420CsmaP__stopDone_task__runTask(void );









static inline void CC2420CsmaP__shutdown(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__syncDone(error_t error);
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data);
# 48 "/home/johanna/tinyos-main-test/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t CC2420ControlP__LocalIeeeEui64__getId(void );
# 66 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt);
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
# 46 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__RSTN__makeOutput(void );
#line 40
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
# 63 "/home/johanna/tinyos-main-test/tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP__syncDone__postTask(void );
# 55 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
# 50 "/home/johanna/tinyos-main-test/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void );




static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void );
# 46 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__CSN__makeOutput(void );
#line 40
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );




static void CC2420ControlP__VREN__makeOutput(void );
#line 40
static void CC2420ControlP__VREN__set(void );
static void CC2420ControlP__VREN__clr(void );
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__SpiResource__release(void );
#line 88
static error_t CC2420ControlP__SpiResource__request(void );
#line 120
static error_t CC2420ControlP__SyncResource__release(void );
#line 88
static error_t CC2420ControlP__SyncResource__request(void );
# 76 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420ControlP__CC2420Power__startVRegDone(void );
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void CC2420ControlP__Resource__granted(void );
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length);
# 61 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP__InterruptCCA__disable(void );
#line 53
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__RssiResource__release(void );
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
# 125 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP____nesc_unnamed4320 {
#line 125
  CC2420ControlP__sync = 5U
};
#line 125
typedef int CC2420ControlP____nesc_sillytask_sync[CC2420ControlP__sync];
enum CC2420ControlP____nesc_unnamed4321 {
#line 126
  CC2420ControlP__syncDone = 6U
};
#line 126
typedef int CC2420ControlP____nesc_sillytask_syncDone[CC2420ControlP__syncDone];
#line 90
#line 84
typedef enum CC2420ControlP____nesc_unnamed4322 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;

uint8_t CC2420ControlP__m_tx_power;

uint16_t CC2420ControlP__m_pan;

uint16_t CC2420ControlP__m_short_addr;

ieee_eui64_t CC2420ControlP__m_ext_addr;

bool CC2420ControlP__m_sync_busy;


bool CC2420ControlP__autoAckEnabled;


bool CC2420ControlP__hwAutoAckDefault;


bool CC2420ControlP__addressRecognition;


bool CC2420ControlP__hwAddressRecognition;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );
static inline void CC2420ControlP__writeTxctrl(void );





static inline error_t CC2420ControlP__Init__init(void );
#line 188
static inline error_t CC2420ControlP__Resource__request(void );







static inline error_t CC2420ControlP__Resource__release(void );







static inline error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 216
static error_t CC2420ControlP__CC2420Power__stopVReg(void );







static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 268
static inline error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 298
static inline ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void );



static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );







static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
#line 323
static inline error_t CC2420ControlP__CC2420Config__sync(void );
#line 355
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 382
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );






static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );









static inline void CC2420ControlP__SyncResource__granted(void );
#line 413
static inline void CC2420ControlP__SpiResource__granted(void );




static inline void CC2420ControlP__RssiResource__granted(void );
#line 431
static inline void CC2420ControlP__StartupTimer__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
#line 465
static inline void CC2420ControlP__sync__runTask(void );



static inline void CC2420ControlP__syncDone__runTask(void );









static void CC2420ControlP__writeFsctrl(void );
#line 496
static void CC2420ControlP__writeMdmctrl0(void );
#line 515
static void CC2420ControlP__writeId(void );
#line 533
static inline void CC2420ControlP__writeTxctrl(void );
#line 545
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data);
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void );
# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void );
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
#line 47
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void );










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
#line 65
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );










static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void );
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow(void );
# 67 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform*/TransformCounterC__0____nesc_unnamed4323 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get(void );
# 77 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0____nesc_unnamed4324 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type ) - 1 - 0, 
  TransformAlarmC__0__MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 102
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput(void );
#line 73
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get(void );
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void );
# 85 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
# 73 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get(void );
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void );
# 73 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get(void );
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void );
# 85 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void );
# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput(void );
#line 73
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get(void );
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void );
# 85 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr(void );
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
# 68 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void );
# 61 "/home/johanna/tinyos-main-test/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time);
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm);

static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void );
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void );
#line 92
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void );
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode);
#line 61
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );






static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__fired(void );
#line 72
static void HplMsp430InterruptP__Port26__fired(void );
#line 72
static void HplMsp430InterruptP__Port17__fired(void );
#line 72
static void HplMsp430InterruptP__Port21__fired(void );
#line 72
static void HplMsp430InterruptP__Port12__fired(void );
#line 72
static void HplMsp430InterruptP__Port24__fired(void );
#line 72
static void HplMsp430InterruptP__Port15__fired(void );
#line 72
static void HplMsp430InterruptP__Port27__fired(void );
#line 72
static void HplMsp430InterruptP__Port10__fired(void );
#line 72
static void HplMsp430InterruptP__Port22__fired(void );
#line 72
static void HplMsp430InterruptP__Port13__fired(void );
#line 72
static void HplMsp430InterruptP__Port25__fired(void );
#line 72
static void HplMsp430InterruptP__Port16__fired(void );
#line 72
static void HplMsp430InterruptP__Port20__fired(void );
#line 72
static void HplMsp430InterruptP__Port11__fired(void );
#line 72
static void HplMsp430InterruptP__Port23__fired(void );
# 64 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
void sig_PORT1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0024)))  ;
#line 78
static inline void HplMsp430InterruptP__Port10__default__fired(void );
static inline void HplMsp430InterruptP__Port11__default__fired(void );

static inline void HplMsp430InterruptP__Port13__default__fired(void );

static inline void HplMsp430InterruptP__Port15__default__fired(void );
static inline void HplMsp430InterruptP__Port16__default__fired(void );
static inline void HplMsp430InterruptP__Port17__default__fired(void );


static inline void HplMsp430InterruptP__Port12__enable(void );

static inline void HplMsp430InterruptP__Port14__enable(void );





static inline void HplMsp430InterruptP__Port12__disable(void );

static inline void HplMsp430InterruptP__Port14__disable(void );



static inline void HplMsp430InterruptP__Port10__clear(void );
static inline void HplMsp430InterruptP__Port11__clear(void );
static inline void HplMsp430InterruptP__Port12__clear(void );
static inline void HplMsp430InterruptP__Port13__clear(void );
static inline void HplMsp430InterruptP__Port14__clear(void );
static inline void HplMsp430InterruptP__Port15__clear(void );
static inline void HplMsp430InterruptP__Port16__clear(void );
static inline void HplMsp430InterruptP__Port17__clear(void );
#line 130
static inline void HplMsp430InterruptP__Port12__edge(bool l2h);
#line 142
static inline void HplMsp430InterruptP__Port14__edge(bool l2h);
#line 169
void sig_PORT2_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0026)))  ;
#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void );
static inline void HplMsp430InterruptP__Port21__default__fired(void );
static inline void HplMsp430InterruptP__Port22__default__fired(void );
static inline void HplMsp430InterruptP__Port23__default__fired(void );
static inline void HplMsp430InterruptP__Port24__default__fired(void );
static inline void HplMsp430InterruptP__Port25__default__fired(void );
static inline void HplMsp430InterruptP__Port26__default__fired(void );
static inline void HplMsp430InterruptP__Port27__default__fired(void );
#line 206
static inline void HplMsp430InterruptP__Port20__clear(void );
static inline void HplMsp430InterruptP__Port21__clear(void );
static inline void HplMsp430InterruptP__Port22__clear(void );
static inline void HplMsp430InterruptP__Port23__clear(void );
static inline void HplMsp430InterruptP__Port24__clear(void );
static inline void HplMsp430InterruptP__Port25__clear(void );
static inline void HplMsp430InterruptP__Port26__clear(void );
static inline void HplMsp430InterruptP__Port27__clear(void );
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void );
# 68 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void );
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising);








static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );







static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void );
# 68 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void );
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising);
#line 65
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 70 "/home/johanna/tinyos-main-test/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP__Fifo__writeDone(
# 46 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9a010, 
# 91 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP__Fifo__readDone(
# 46 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9a010, 
# 71 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__releasing(void );
# 45 "/home/johanna/tinyos-main-test/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
# 56 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
#line 45
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__SpiResource__release(void );
#line 97
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420SpiP__SpiResource__request(void );
#line 128
static bool CC2420SpiP__SpiResource__isOwner(void );
#line 102
static void CC2420SpiP__Resource__granted(
# 45 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x40a9b5c8);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP__grant__postTask(void );
# 88 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP____nesc_unnamed4325 {
#line 88
  CC2420SpiP__grant = 7U
};
#line 88
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
#line 63
enum CC2420SpiP____nesc_unnamed4326 {
  CC2420SpiP__RESOURCE_COUNT = 5U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4327 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );







static inline void CC2420SpiP__ChipSpiResource__abortRelease(void );






static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
#line 126
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP__Resource__release(uint8_t id);
#line 178
static inline bool CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP__attemptRelease(void );
#line 358
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/home/johanna/tinyos-main-test/tos/system/StateImplP.nc"
uint8_t StateImplP__state[4U];

enum StateImplP____nesc_unnamed4328 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static bool StateImplP__State__isState(uint8_t id, uint8_t myState);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__postTask(void );
# 82 "/home/johanna/tinyos-main-test/tos/interfaces/SpiPacket.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__sendDone(
# 46 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2f9f8, 
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Msp430SpiConfigure__getConfig(
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2dc50);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__granted(
# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b304b8);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__release(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2d200);
# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__immediateRequest(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2d200);
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__request(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2d200);
# 128 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__isOwner(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x40b2d200);
# 93 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__enableRxIntr(void );
#line 81
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__resetUsci(bool reset);
#line 100
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__clrRxIntr(void );
#line 90
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__disableRxIntr(void );
#line 108
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__tx(uint8_t data);






static uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__rx(void );
#line 141
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__setModeSpi(msp430_spi_union_config_t *config);
#line 98
static bool /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__isRxIntrPending(void );
#line 130
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__disableSpi(void );
# 69 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
enum /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0____nesc_unnamed4329 {
#line 69
  Msp430SpiNoDmaBP__0__signalDone_task = 8U
};
#line 69
typedef int /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0____nesc_sillytask_signalDone_task[/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task];
#line 58
enum /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0____nesc_unnamed4330 {
  Msp430SpiNoDmaBP__0__SPI_ATOMIC_SIZE = 2
};

uint16_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_len;
uint8_t * /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf;
uint8_t * /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf;
uint16_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos;
uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_client;

static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone(void );


static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__immediateRequest(uint8_t id);



static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__request(uint8_t id);



static inline uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__isOwner(uint8_t id);



static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__release(uint8_t id);



static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__configure(uint8_t id);



static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__unconfigure(uint8_t id);





static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__granted(uint8_t id);



static uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiByte__write(uint8_t tx);
#line 113
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__isOwner(uint8_t id);
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__request(uint8_t id);
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__release(uint8_t id);




static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__default__granted(uint8_t id);

static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__continueOp(void );
#line 146
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len);
#line 168
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__runTask(void );



static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__rxDone(uint8_t data);
#line 185
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone(void );




static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__txDone(void );

static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error);
# 46 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/usci/Z1UsciP.nc"
msp430_spi_union_config_t /*Msp430SpiNoDmaB0P.Z1UsciP*/Z1UsciP__0__msp430_spi_z1_config = { { 
.ubr = 2, 
.ucmode = 0, 
.ucmst = 1, 
.uc7bit = 0, 
.ucmsb = 1, 
.ucckpl = 1, 
.ucckph = 0, 
.ucssel = 2 } };


static inline msp430_spi_union_config_t */*Msp430SpiNoDmaB0P.Z1UsciP*/Z1UsciP__0__Msp430SpiConfigure__getConfig(uint8_t id);
# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430UsciB0P__UCLK__selectIOFunc(void );
#line 92
static void HplMsp430UsciB0P__UCLK__selectModuleFunc(void );
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void HplMsp430UsciB0P__Interrupts__rxDone(uint8_t data);
#line 54
static void HplMsp430UsciB0P__Interrupts__txDone(void );
# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430UsciB0P__SOMI__selectIOFunc(void );
#line 92
static void HplMsp430UsciB0P__SOMI__selectModuleFunc(void );






static void HplMsp430UsciB0P__SIMO__selectIOFunc(void );
#line 92
static void HplMsp430UsciB0P__SIMO__selectModuleFunc(void );
# 73 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static volatile uint8_t HplMsp430UsciB0P__IE2 __asm ("0x0001");
static volatile uint8_t HplMsp430UsciB0P__IFG2 __asm ("0x0003");
static volatile uint8_t HplMsp430UsciB0P__UCB0CTL0 __asm ("0x0068");
static volatile uint8_t HplMsp430UsciB0P__UCB0CTL1 __asm ("0x0069");
static volatile uint8_t HplMsp430UsciB0P__UCB0RXBUF __asm ("0x006E");
static volatile uint8_t HplMsp430UsciB0P__UCB0TXBUF __asm ("0x006F");



static inline void HplMsp430UsciB0P__UsciRawInterrupts__rxDone(uint8_t temp);



static inline void HplMsp430UsciB0P__UsciRawInterrupts__txDone(void );
#line 107
static inline void HplMsp430UsciB0P__Usci__setUbr(uint16_t control);
#line 127
static inline void HplMsp430UsciB0P__Usci__resetUsci(bool reset);
#line 160
static inline void HplMsp430UsciB0P__Usci__enableSpi(void );







static inline void HplMsp430UsciB0P__Usci__disableSpi(void );







static inline void HplMsp430UsciB0P__configSpi(msp430_spi_union_config_t *config);





static void HplMsp430UsciB0P__Usci__setModeSpi(msp430_spi_union_config_t *config);
#line 199
static inline bool HplMsp430UsciB0P__Usci__isRxIntrPending(void );









static inline void HplMsp430UsciB0P__Usci__clrRxIntr(void );



static inline void HplMsp430UsciB0P__Usci__clrIntr(void );



static inline void HplMsp430UsciB0P__Usci__disableRxIntr(void );







static inline void HplMsp430UsciB0P__Usci__disableIntr(void );



static inline void HplMsp430UsciB0P__Usci__enableRxIntr(void );
#line 250
static inline void HplMsp430UsciB0P__Usci__tx(uint8_t data);



static inline uint8_t HplMsp430UsciB0P__Usci__rx(void );
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
static void HplMsp430UsciAB0RawInterruptsP__UsciA__rxDone(uint8_t data);
#line 53
static void HplMsp430UsciAB0RawInterruptsP__UsciA__txDone(void );




static void HplMsp430UsciAB0RawInterruptsP__UsciB__rxDone(uint8_t data);
#line 53
static void HplMsp430UsciAB0RawInterruptsP__UsciB__txDone(void );
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciAB0RawInterruptsP.nc"
void sig_USCIAB0RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x002E)))  ;
#line 64
void sig_USCIAB0TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x002C)))  ;
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__rxDone(
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
uint8_t arg_0x40bec220, 
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
uint8_t data);
#line 54
static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__txDone(
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
uint8_t arg_0x40bec220);
# 90 "/home/johanna/tinyos-main-test/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__userId(void );
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__txDone(void );




static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
# 49 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1____nesc_unnamed4331 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[2U];
uint8_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1b010);
# 61 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
# 55 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1b010);
# 65 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1a430);
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1a430);
# 79 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1c540);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
enum /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4332 {
#line 75
  ArbiterP__0__grantedTask = 9U
};
#line 75
typedef int /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4333 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4334 {
#line 68
  ArbiterP__0__default_owner_id = 2U
};
#line 69
enum /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4335 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 93
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );










static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );

static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );


static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );


static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 62 "/home/johanna/tinyos-main-test/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 93
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 106
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 42 "/home/johanna/tinyos-main-test/tos/platforms/z1/LocalIeeeEui64C.nc"
static ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void );
# 81 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg);
# 70 "/home/johanna/tinyos-main-test/tos/interfaces/PacketTimeStamp.nc"
static void CC2420TransmitP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void CC2420TransmitP__PacketTimeStamp__set(
#line 73
message_t * msg, 




CC2420TransmitP__PacketTimeStamp__size_type value);
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void );
# 54 "/home/johanna/tinyos-main-test/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void );
#line 66
static void CC2420TransmitP__CaptureSFD__disable(void );
#line 53
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
# 109 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void );
#line 66
static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt);






static void CC2420TransmitP__BackoffTimer__stop(void );
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length);
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data);
# 55 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time);
# 73 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error);
# 31 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__abortRelease(void );







static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void );
# 46 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CSN__makeOutput(void );
#line 40
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );
# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg);
# 58 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420TransmitP__SpiResource__release(void );
#line 97
static error_t CC2420TransmitP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420TransmitP__SpiResource__request(void );
# 44 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CCA__makeInput(void );
#line 43
static bool CC2420TransmitP__CCA__get(void );
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SNOP__strobe(void );
# 44 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__SFD__makeInput(void );
#line 43
static bool CC2420TransmitP__SFD__get(void );
# 82 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
# 99 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 89
typedef enum CC2420TransmitP____nesc_unnamed4336 {
  CC2420TransmitP__S_STOPPED, 
  CC2420TransmitP__S_STARTED, 
  CC2420TransmitP__S_LOAD, 
  CC2420TransmitP__S_SAMPLE_CCA, 
  CC2420TransmitP__S_BEGIN_TRANSMIT, 
  CC2420TransmitP__S_SFD, 
  CC2420TransmitP__S_EFD, 
  CC2420TransmitP__S_ACK_WAIT, 
  CC2420TransmitP__S_CANCEL
} CC2420TransmitP__cc2420_transmit_state_t;





enum CC2420TransmitP____nesc_unnamed4337 {
  CC2420TransmitP__CC2420_ABORT_PERIOD = 320
};
#line 120
message_t * CC2420TransmitP__m_msg;

bool CC2420TransmitP__m_cca;

uint8_t CC2420TransmitP__m_tx_power;

CC2420TransmitP__cc2420_transmit_state_t CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;

bool CC2420TransmitP__m_receiving = FALSE;

uint16_t CC2420TransmitP__m_prev_time;


bool CC2420TransmitP__sfdHigh;


bool CC2420TransmitP__abortSpiRelease;


int8_t CC2420TransmitP__totalCcaChecks;


uint16_t CC2420TransmitP__myInitialBackoff;


uint16_t CC2420TransmitP__myCongestionBackoff;



static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);

static void CC2420TransmitP__loadTXFIFO(void );
static void CC2420TransmitP__attemptSend(void );
static void CC2420TransmitP__congestionBackoff(void );
static error_t CC2420TransmitP__acquireSpiResource(void );
static inline error_t CC2420TransmitP__releaseSpiResource(void );
static void CC2420TransmitP__signalDone(error_t err);



static inline error_t CC2420TransmitP__Init__init(void );







static inline error_t CC2420TransmitP__StdControl__start(void );










static error_t CC2420TransmitP__StdControl__stop(void );
#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);
#line 243
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);







static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time);
#line 280
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
#line 377
static inline void CC2420TransmitP__ChipSpiResource__releasing(void );
#line 389
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg);
#line 416
static inline void CC2420TransmitP__SpiResource__granted(void );
#line 454
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 486
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP__BackoffTimer__fired(void );
#line 547
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);
#line 743
static void CC2420TransmitP__attemptSend(void );
#line 788
static void CC2420TransmitP__congestionBackoff(void );






static error_t CC2420TransmitP__acquireSpiResource(void );







static inline error_t CC2420TransmitP__releaseSpiResource(void );
#line 825
static void CC2420TransmitP__loadTXFIFO(void );
#line 850
static void CC2420TransmitP__signalDone(error_t err);
# 43 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void );
# 93 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void );
#line 117
static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void );
#line 112
static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void );
#line 66
static ieee_eui64_t CC2420ReceiveP__CC2420Config__getExtAddr(void );




static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void );
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__receiveDone_task__postTask(void );
# 70 "/home/johanna/tinyos-main-test/tos/interfaces/PacketTimeStamp.nc"
static void CC2420ReceiveP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void CC2420ReceiveP__PacketTimeStamp__set(
#line 73
message_t * msg, 




CC2420ReceiveP__PacketTimeStamp__size_type value);
# 43 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFOP__get(void );
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message);
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SACK__strobe(void );
# 40 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP__SpiResource__release(void );
#line 97
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ReceiveP__SpiResource__request(void );
#line 128
static bool CC2420ReceiveP__SpiResource__isOwner(void );
# 62 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
# 61 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP__InterruptFIFOP__disable(void );
#line 54
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
# 148 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP____nesc_unnamed4338 {
#line 148
  CC2420ReceiveP__receiveDone_task = 10U
};
#line 148
typedef int CC2420ReceiveP____nesc_sillytask_receiveDone_task[CC2420ReceiveP__receiveDone_task];
#line 89
#line 81
typedef enum CC2420ReceiveP____nesc_unnamed4339 {
  CC2420ReceiveP__S_STOPPED, 
  CC2420ReceiveP__S_STARTED, 
  CC2420ReceiveP__S_RX_LENGTH, 
  CC2420ReceiveP__S_RX_DEC, 
  CC2420ReceiveP__S_RX_DEC_WAIT, 
  CC2420ReceiveP__S_RX_FCF, 
  CC2420ReceiveP__S_RX_PAYLOAD
} CC2420ReceiveP__cc2420_receive_state_t;

enum CC2420ReceiveP____nesc_unnamed4340 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP__SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP__m_timestamp_head;

uint8_t CC2420ReceiveP__m_timestamp_size;





uint8_t CC2420ReceiveP__m_missed_packets;



bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;

uint8_t CC2420ReceiveP__m_bytes_left;

message_t * CC2420ReceiveP__m_p_rx_buf;

message_t CC2420ReceiveP__m_rx_buf;
#line 137
CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;



static void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );
static inline bool CC2420ReceiveP__passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP__Init__init(void );





static inline error_t CC2420ReceiveP__StdControl__start(void );
#line 171
static error_t CC2420ReceiveP__StdControl__stop(void );
#line 186
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);








static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 212
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
#line 513
static inline void CC2420ReceiveP__SpiResource__granted(void );
#line 530
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 668
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 709
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error);






static void CC2420ReceiveP__beginReceive(void );
#line 733
static void CC2420ReceiveP__flush(void );
#line 759
static void CC2420ReceiveP__receive(void );









static void CC2420ReceiveP__waitForNextPacket(void );
#line 813
static void CC2420ReceiveP__reset_state(void );










static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg);
# 81 "/home/johanna/tinyos-main-test/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline int CC2420PacketP__getAddressLength(int type);








static uint8_t * CC2420PacketP__getNetwork(message_t * msg);
#line 119
static inline uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg);








static inline void CC2420PacketP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId);








static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);
#line 152
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg);
#line 171
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg);





static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value);
#line 210
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg);








static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg);
# 58 "/home/johanna/tinyos-main-test/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time);

static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void );
# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void );
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void );
#line 47
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void );










static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
#line 65
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );




static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow(void );
# 67 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC__1____nesc_unnamed4341 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type ) + 5, 



  TransformCounterC__1__OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__fired(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void );
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get(void );
# 77 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1____nesc_unnamed4342 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type ) - 1 - 5, 
  TransformAlarmC__1__MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );




static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm(void );
#line 147
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type dt);
#line 162
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
#line 177
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/home/johanna/tinyos-main-test/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4343 {
#line 74
  AlarmToTimerC__0__fired = 11U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e059f0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4344 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 12U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4345 {

  VirtualizeTimerC__0__NUM_TIMERS = 5U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4346 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/home/johanna/tinyos-main-test/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 52 "/home/johanna/tinyos-main-test/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static error_t UniqueSendP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t UniqueSendP__SubSend__maxPayloadLength(void );
#line 100
static void UniqueSendP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "/home/johanna/tinyos-main-test/tos/interfaces/Random.nc"
static uint16_t UniqueSendP__Random__rand16(void );
# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg);
# 56 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void );
#line 45
static error_t UniqueSendP__State__requestState(uint8_t reqState);
# 54 "/home/johanna/tinyos-main-test/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP__localSendId;

enum UniqueSendP____nesc_unnamed4347 {
  UniqueSendP__S_IDLE, 
  UniqueSendP__S_SENDING
};


static inline error_t UniqueSendP__Init__init(void );
#line 75
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len);
#line 95
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void );








static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__DuplicateReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/home/johanna/tinyos-main-test/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP____nesc_unnamed4348 {
  uint16_t source;
  uint8_t dsn;
} UniqueReceiveP__receivedMessages[4];

uint8_t UniqueReceiveP__writeIndex = 0;


uint8_t UniqueReceiveP__recycleSourceElement;

enum UniqueReceiveP____nesc_unnamed4349 {
  UniqueReceiveP__INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP__Init__init(void );









static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
static inline uint16_t UniqueReceiveP__getSourceKey(message_t  *msg);


static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len);
#line 112
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 138
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
#line 165
static inline uint16_t UniqueReceiveP__getSourceKey(message_t * msg);
#line 192
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void );
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t CC2420TinyosNetworkP__grantTask__postTask(void );
# 77 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId);
#line 75
static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t * p_msg);
# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__ActiveSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 79 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id);
#line 53
static bool CC2420TinyosNetworkP__Queue__isEmpty(void );
#line 70
static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void );
# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__BareReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__granted(
# 46 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x40ec0780);
# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__BareSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__ActiveReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 180 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
enum CC2420TinyosNetworkP____nesc_unnamed4350 {
#line 180
  CC2420TinyosNetworkP__grantTask = 13U
};
#line 180
typedef int CC2420TinyosNetworkP____nesc_sillytask_grantTask[CC2420TinyosNetworkP__grantTask];
#line 68
enum CC2420TinyosNetworkP____nesc_unnamed4351 {
  CC2420TinyosNetworkP__OWNER_NONE = 0xff, 
  CC2420TinyosNetworkP__TINYOS_N_NETWORKS = 1U
};




#line 73
enum CC2420TinyosNetworkP____nesc_unnamed4352 {
  CC2420TinyosNetworkP__CLIENT_AM, 
  CC2420TinyosNetworkP__CLIENT_BARE
} CC2420TinyosNetworkP__m_busy_client;

uint8_t CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
#line 78
uint8_t CC2420TinyosNetworkP__next_owner;

static error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len);









static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );



static void *CC2420TinyosNetworkP__ActiveSend__getPayload(message_t *msg, uint8_t len);
#line 138
static inline void *CC2420TinyosNetworkP__BareSend__getPayload(message_t *msg, uint8_t len);









static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error);








static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 180
static inline void CC2420TinyosNetworkP__grantTask__runTask(void );
#line 199
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id);
#line 215
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id);
#line 229
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id);
#line 241
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len);


static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error);








static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client);
# 49 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
enum /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0____nesc_unnamed4353 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[1];
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );




static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static error_t CC2420ActiveMessageP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

CC2420ActiveMessageP__SubSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 112
static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void );
# 77 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Config.nc"
static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void );
# 95 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP__RadioBackoff__requestCca(
# 54 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f08148, 
# 95 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(
# 54 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f08148, 
# 81 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(
# 54 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f08148, 
# 88 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP__SendNotifier__aboutToSend(
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f09a98, 
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 110 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static void CC2420ActiveMessageP__AMSend__sendDone(
# 48 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f0b010, 
# 103 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__Snoop__receive(
# 50 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f0a088, 
# 71 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/home/johanna/tinyos-main-test/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void );
# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ActiveMessageP__Receive__receive(
# 49 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x40f0b9d0, 
# 71 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t CC2420ActiveMessageP__RadioResource__release(void );
#line 97
static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void );
#line 88
static error_t CC2420ActiveMessageP__RadioResource__request(void );
# 71 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
uint16_t CC2420ActiveMessageP__pending_length;
message_t * CC2420ActiveMessageP__pending_message = (void *)0;

static void CC2420ActiveMessageP__RadioResource__granted(void );
#line 87
static error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 135
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void );



static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg);









static inline void CC2420ActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr);









static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg);




static am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg);




static inline void CC2420ActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t type);
#line 194
static inline uint8_t CC2420ActiveMessageP__Packet__payloadLength(message_t *msg);



static inline void CC2420ActiveMessageP__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );



static inline void *CC2420ActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len);





static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result);






static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 235
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);





static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg);




static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg);



static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg);
#line 279
static inline message_t *CC2420ActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *CC2420ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);







static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);

static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg);
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(uint16_t time);

static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get(void );
# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired(void );
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents(void );
static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents(void );
#line 44
static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt(void );
# 70 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void );










static inline void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void );
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__size_type /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__get(void );






static bool /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__isOverflowPending(void );










static void /*CounterMilli16C.Transform*/TransformCounterC__2__Counter__overflow(void );
# 67 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli16C.Transform*/TransformCounterC__2__upper_count_type /*CounterMilli16C.Transform*/TransformCounterC__2__m_upper;

enum /*CounterMilli16C.Transform*/TransformCounterC__2____nesc_unnamed4354 {

  TransformCounterC__2__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__2__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli16C.Transform*/TransformCounterC__2__from_size_type ) - /*CounterMilli16C.Transform*/TransformCounterC__2__LOW_SHIFT_RIGHT, 
  TransformCounterC__2__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli16C.Transform*/TransformCounterC__2__to_size_type ) - 8 * sizeof(/*CounterMilli16C.Transform*/TransformCounterC__2__from_size_type ) + 5, 



  TransformCounterC__2__OVERFLOW_MASK = /*CounterMilli16C.Transform*/TransformCounterC__2__NUM_UPPER_BITS ? ((/*CounterMilli16C.Transform*/TransformCounterC__2__upper_count_type )2 << (/*CounterMilli16C.Transform*/TransformCounterC__2__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli16C.Transform*/TransformCounterC__2__to_size_type /*CounterMilli16C.Transform*/TransformCounterC__2__Counter__get(void );
#line 133
static inline void /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__overflow(void );
# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
static void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__fired(void );
#line 103
static void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__startAt(/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__size_type t0, /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__size_type dt);
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
static /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Counter__size_type /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Counter__get(void );
# 77 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_t0;
/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_dt;

enum /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2____nesc_unnamed4355 {

  TransformAlarmC__2__MAX_DELAY_LOG2 = 8 * sizeof(/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__from_size_type ) - 1 - 5, 
  TransformAlarmC__2__MAX_DELAY = (/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type )1 << /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__MAX_DELAY_LOG2
};

static inline /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__getNow(void );
#line 107
static void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__set_alarm(void );
#line 147
static inline void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__startAt(/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type t0, /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type dt);









static inline void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__start(/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type dt);




static inline void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__fired(void );
#line 177
static inline void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Counter__overflow(void );
# 110 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/home/johanna/tinyos-main-test/tos/interfaces/AMPacket.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/home/johanna/tinyos-main-test/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err);
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(
# 48 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
am_id_t arg_0x407f82b0, 
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(
# 46 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
uint8_t arg_0x407f98a8, 
# 96 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void );
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(
#line 143
message_t * amsg);
# 126 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4356 {
#line 126
  AMQueueImplP__1__CancelTask = 14U
};
#line 126
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask];
#line 169
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4357 {
#line 169
  AMQueueImplP__1__errorTask = 15U
};
#line 169
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask];
#line 57
#line 55
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4358 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[1 / 8 + 1];

static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void );
#line 90
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
#line 163
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );




static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );
#line 189
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40f7fd90, 
# 103 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40f7c768, 
# 71 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 101
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 148
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
#line 172
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type);
# 113 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "/home/johanna/tinyos-main-test/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "/home/johanna/tinyos-main-test/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "/home/johanna/tinyos-main-test/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4359 {
#line 191
  SerialP__RunTx = 16U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4360 {
#line 322
  SerialP__startDoneTask = 17U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4361 {
#line 332
  SerialP__stopDoneTask = 18U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4362 {
#line 341
  SerialP__defaultSerialFlushTask = 19U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4363 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4364 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4365 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4366 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4367 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4368 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4369 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4370 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 518
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 559
static inline void SerialP__RunTx__runTask(void );
#line 668
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41058760, 
# 96 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x41058120, 
# 71 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x410562a0, 
# 31 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x410562a0);
# 23 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x410562a0, 
# 23 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/home/johanna/tinyos-main-test/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4371 {
#line 158
  SerialDispatcherP__0__signalSendDone = 20U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4372 {
#line 275
  SerialDispatcherP__0__receiveTask = 21U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4373 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4374 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4375 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "/home/johanna/tinyos-main-test/tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4376 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109a310);
# 79 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receivedByte(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109d488, 
# 79 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receiveDone(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109d488, 
# 95 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__sendDone(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109d488, 
# 53 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__granted(
# 46 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109e2b8);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__release(
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109b840);
# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__immediateRequest(
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109b840);
# 128 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__isOwner(
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint8_t arg_0x4109b840);
# 89 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__resetUsci(bool reset);
#line 118
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__disableIntr(void );


static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__enableIntr(void );
#line 136
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__tx(uint8_t data);
#line 156
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__disableUart(void );





static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__setModeUart(msp430_uart_union_config_t *config);
#line 125
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__clrTxIntr(void );
# 62 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
uint16_t /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_len;
#line 62
uint16_t /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_len;
uint8_t * /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf;
#line 63
uint8_t * /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_buf;
uint16_t /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_pos;
#line 64
uint16_t /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_pos;
uint8_t /*Msp430Uart0P.UartP*/Msp430UartP__0__m_byte_time;
uint8_t /*Msp430Uart0P.UartP*/Msp430UartP__0__current_owner;

static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id);
#line 80
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__release(uint8_t id);







static void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id);






static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id);





static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__granted(uint8_t id);
#line 134
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciInterrupts__rxDone(uint8_t id, uint8_t data);
#line 148
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__send(uint8_t id, uint8_t *buf, uint16_t len);
#line 163
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciInterrupts__txDone(uint8_t id);
#line 207
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__overflow(void );

static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__default__isOwner(uint8_t id);

static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__default__release(uint8_t id);
static inline msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id);



static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte);
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void HplMsp430UsciA0P__Interrupts__rxDone(uint8_t data);
#line 54
static void HplMsp430UsciA0P__Interrupts__txDone(void );
# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430UsciA0P__URXD__selectIOFunc(void );
#line 92
static void HplMsp430UsciA0P__URXD__selectModuleFunc(void );






static void HplMsp430UsciA0P__UTXD__selectIOFunc(void );
#line 92
static void HplMsp430UsciA0P__UTXD__selectModuleFunc(void );
# 74 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA0P.nc"
static volatile uint8_t HplMsp430UsciA0P__IE2 __asm ("0x0001");
static volatile uint8_t HplMsp430UsciA0P__IFG2 __asm ("0x0003");
static volatile uint8_t HplMsp430UsciA0P__UCA0CTL0 __asm ("0x0060");
static volatile uint8_t HplMsp430UsciA0P__UCA0CTL1 __asm ("0x0061");
static volatile uint8_t HplMsp430UsciA0P__UCA0TXBUF __asm ("0x0067");

static inline void HplMsp430UsciA0P__UsciRawInterrupts__rxDone(uint8_t temp);



static inline void HplMsp430UsciA0P__UsciRawInterrupts__txDone(void );
#line 105
static inline void HplMsp430UsciA0P__Usci__setUbr(uint16_t control);










static inline void HplMsp430UsciA0P__Usci__setUmctl(uint8_t control);
#line 133
static inline void HplMsp430UsciA0P__Usci__resetUsci(bool reset);
#line 222
static inline void HplMsp430UsciA0P__Usci__clrTxIntr(void );







static inline void HplMsp430UsciA0P__Usci__clrIntr(void );
#line 242
static inline void HplMsp430UsciA0P__Usci__disableIntr(void );
#line 260
static inline void HplMsp430UsciA0P__Usci__enableIntr(void );
#line 285
static inline void HplMsp430UsciA0P__Usci__tx(uint8_t data);
#line 297
static inline void HplMsp430UsciA0P__Usci__enableUart(void );






static inline void HplMsp430UsciA0P__Usci__disableUart(void );






static inline void HplMsp430UsciA0P__configUart(msp430_uart_union_config_t *config);






static inline void HplMsp430UsciA0P__Usci__setModeUart(msp430_uart_union_config_t *config);
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__rxDone(
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
uint8_t arg_0x40bec220, 
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
uint8_t data);
#line 54
static void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__txDone(
# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
uint8_t arg_0x40bec220);
# 90 "/home/johanna/tinyos-main-test/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__ArbiterInfo__userId(void );
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__RawInterrupts__txDone(void );




static inline void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__default__rxDone(uint8_t id, uint8_t data);
# 49 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2____nesc_unnamed4377 {
#line 49
  FcfsResourceQueueC__2__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[2U];
uint8_t /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead = /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
uint8_t /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail = /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

static inline error_t /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init(void );




static inline bool /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
# 61 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__immediateRequested(
# 55 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1b010);
# 65 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(
# 60 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1a430);
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(
# 60 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1a430);
# 53 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue(void );
# 46 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__immediateRequested(void );
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(
# 54 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
uint8_t arg_0x40c1c540);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask(void );
# 75 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
enum /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4378 {
#line 75
  ArbiterP__1__grantedTask = 22U
};
#line 75
typedef int /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_sillytask_grantedTask[/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask];
#line 67
enum /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4379 {
#line 67
  ArbiterP__1__RES_CONTROLLED, ArbiterP__1__RES_GRANTING, ArbiterP__1__RES_IMM_GRANTING, ArbiterP__1__RES_BUSY
};
#line 68
enum /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4380 {
#line 68
  ArbiterP__1__default_owner_id = 2U
};
#line 69
enum /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4381 {
#line 69
  ArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
uint8_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id;
uint8_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;
#line 93
static inline error_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(uint8_t id);
#line 133
static inline error_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void );










static bool /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id);



static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void );




static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__immediateRequested(void );


static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t Z1SerialP__Resource__release(void );
#line 97
static error_t Z1SerialP__Resource__immediateRequest(void );
# 47 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/usci/Z1SerialP.nc"
msp430_uart_union_config_t Z1SerialP__msp430_uart_z1_config = { { 
.ubr = UBR_8MHZ_115200, 
.umctl = UMCTL_8MHZ_115200, 
.ucssel = 2 } };




static inline error_t Z1SerialP__StdControl__start(void );


static inline error_t Z1SerialP__StdControl__stop(void );



static inline void Z1SerialP__Resource__granted(void );

static inline msp430_uart_union_config_t *Z1SerialP__Msp430UartConfigure__getConfig(void );
# 51 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 48 "/home/johanna/tinyos-main-test/tos/system/QueueC.nc"
/*PrintfC.QueueC*/QueueC__0__queue_t  /*PrintfC.QueueC*/QueueC__0__queue[250];
uint8_t /*PrintfC.QueueC*/QueueC__0__head = 0;
uint8_t /*PrintfC.QueueC*/QueueC__0__tail = 0;
uint8_t /*PrintfC.QueueC*/QueueC__0__size = 0;

static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void );



static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__head(void );



static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void );
#line 85
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(/*PrintfC.QueueC*/QueueC__0__queue_t newVal);
# 90 "/home/johanna/tinyos-main-test/tos/interfaces/Queue.nc"
static error_t PrintfP__Queue__enqueue(
#line 86
PrintfP__Queue__t  newVal);
#line 81
static 
#line 79
PrintfP__Queue__t  

PrintfP__Queue__dequeue(void );
#line 50
static bool PrintfP__Queue__empty(void );







static uint8_t PrintfP__Queue__size(void );
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
static error_t PrintfP__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 126 "/home/johanna/tinyos-main-test/tos/interfaces/Packet.nc"
static 
#line 123
void * 


PrintfP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t PrintfP__retrySend__postTask(void );
# 114 "/home/johanna/tinyos-main-test/tos/lib/printf/PrintfP.nc"
enum PrintfP____nesc_unnamed4382 {
#line 114
  PrintfP__retrySend = 23U
};
#line 114
typedef int PrintfP____nesc_sillytask_retrySend[PrintfP__retrySend];
#line 101
enum PrintfP____nesc_unnamed4383 {
  PrintfP__S_STARTED, 
  PrintfP__S_FLUSHING
};

message_t PrintfP__printfMsg;
uint8_t PrintfP__state = PrintfP__S_STARTED;

static inline error_t PrintfP__Init__init(void );




static inline void PrintfP__retrySend__runTask(void );




static void PrintfP__sendNext(void );










int printfflush(void )   ;
#line 142
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error);









static inline int PrintfP__Putchar__putchar(int c);
# 49 "/home/johanna/tinyos-main-test/tos/lib/printf/Putchar.nc"
static int PutcharP__Putchar__putchar(int c);
# 98 "/home/johanna/tinyos-main-test/tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void );








int putchar(int c) __attribute((noinline))   ;
# 104 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static error_t SerialStartP__SerialControl__start(void );
# 44 "/home/johanna/tinyos-main-test/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void );



static inline void SerialStartP__SerialControl__startDone(error_t error);
static inline void SerialStartP__SerialControl__stopDone(error_t error);
# 63 "/home/johanna/tinyos-main-test/tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 38 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411c0228, 
# 63 "/home/johanna/tinyos-main-test/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/home/johanna/tinyos-main-test/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411bc700, 
# 66 "/home/johanna/tinyos-main-test/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 58 "/home/johanna/tinyos-main-test/tos/interfaces/AdcConfigure.nc"
static AdcP__Config__adc_config_t AdcP__Config__getConfiguration(
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411ba9c8);
# 189 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP__SingleChannel__getData(
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411add18);
# 84 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t AdcP__SingleChannel__configureSingle(
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411add18, 
# 84 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t AdcP__ResourceRead__release(
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411bb1e0);
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t AdcP__ResourceRead__request(
# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
uint8_t arg_0x411bb1e0);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t AdcP__readDone__postTask(void );
# 136 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
enum AdcP____nesc_unnamed4384 {
#line 136
  AdcP__readDone = 24U
};
#line 136
typedef int AdcP____nesc_sillytask_readDone[AdcP__readDone];
#line 54
enum AdcP____nesc_unnamed4385 {
  AdcP__STATE_READ, 
  AdcP__STATE_READNOW, 
  AdcP__STATE_READNOW_INVALID_CONFIG
};


uint8_t AdcP__state;
uint8_t AdcP__owner;
uint16_t AdcP__value;

static inline error_t AdcP__configure(uint8_t client);









static inline error_t AdcP__Read__read(uint8_t client);




static void AdcP__ResourceRead__granted(uint8_t client);
#line 136
static inline void AdcP__readDone__runTask(void );





static error_t AdcP__SingleChannel__singleDataReady(uint8_t client, uint16_t data);
#line 161
static inline uint16_t *AdcP__SingleChannel__multipleDataReady(uint8_t client, 
uint16_t *buf, uint16_t numSamples);





static inline error_t AdcP__ResourceRead__default__request(uint8_t client);

static inline error_t AdcP__ResourceRead__default__release(uint8_t client);

static inline void AdcP__Read__default__readDone(uint8_t client, error_t result, uint16_t val);





static inline void AdcP__ReadNow__default__readDone(uint8_t client, error_t result, uint16_t val);

static inline error_t AdcP__SingleChannel__default__getData(uint8_t client);




const msp430adc12_channel_config_t AdcP__defaultConfig = { INPUT_CHANNEL_NONE, 0, 0, 0, 0, 0, 0, 0 };
static inline const msp430adc12_channel_config_t *
AdcP__Config__default__getConfiguration(uint8_t client);



static inline error_t AdcP__SingleChannel__default__configureSingle(uint8_t client, 
const msp430adc12_channel_config_t *config);
# 107 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static void Msp430Adc12ImplP__MultiChannel__dataReady(
# 42 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x411f3a08, 
# 107 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
uint16_t *buffer, uint16_t numSamples);
# 63 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t Msp430Adc12ImplP__HplAdc12__getCtl0(void );
#line 82
static adc12memctl_t Msp430Adc12ImplP__HplAdc12__getMCtl(uint8_t idx);
#line 106
static void Msp430Adc12ImplP__HplAdc12__resetIFGs(void );
#line 75
static void Msp430Adc12ImplP__HplAdc12__setMCtl(uint8_t idx, adc12memctl_t memControl);
#line 128
static void Msp430Adc12ImplP__HplAdc12__startConversion(void );
#line 51
static void Msp430Adc12ImplP__HplAdc12__setCtl0(adc12ctl0_t control0);
#line 89
static uint16_t Msp430Adc12ImplP__HplAdc12__getMem(uint8_t idx);





static void Msp430Adc12ImplP__HplAdc12__setIEFlags(uint16_t mask);
#line 123
static void Msp430Adc12ImplP__HplAdc12__stopConversion(void );









static void Msp430Adc12ImplP__HplAdc12__enableConversion(void );
#line 57
static void Msp430Adc12ImplP__HplAdc12__setCtl1(adc12ctl1_t control1);
# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port64__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port64__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port64__selectModuleFunc(void );
#line 78
static void Msp430Adc12ImplP__Port62__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port62__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port62__selectModuleFunc(void );
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__memOverflow(
# 43 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x411f2388);
# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__conversionTimeOverflow(
# 43 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x411f2388);
# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port67__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port67__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port67__selectModuleFunc(void );
#line 78
static void Msp430Adc12ImplP__Port60__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port60__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port60__selectModuleFunc(void );
#line 78
static void Msp430Adc12ImplP__Port65__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port65__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port65__selectModuleFunc(void );
# 50 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430Adc12ImplP__TimerA__setMode(int mode);
# 98 "/home/johanna/tinyos-main-test/tos/interfaces/ArbiterInfo.nc"
static uint8_t Msp430Adc12ImplP__ADCArbiterInfo__userId(void );
# 46 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430Adc12ImplP__ControlA1__setControl(msp430_compare_control_t control);
# 227 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static uint16_t * Msp430Adc12ImplP__SingleChannel__multipleDataReady(
# 41 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x411f7d20, 
# 227 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t Msp430Adc12ImplP__SingleChannel__singleDataReady(
# 41 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x411f7d20, 
# 206 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port63__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port63__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port63__selectModuleFunc(void );
#line 78
static void Msp430Adc12ImplP__Port61__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port61__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port61__selectModuleFunc(void );
#line 78
static void Msp430Adc12ImplP__Port66__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port66__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port66__selectModuleFunc(void );
# 75 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
enum Msp430Adc12ImplP____nesc_unnamed4386 {
  Msp430Adc12ImplP__SINGLE_DATA = 1, 
  Msp430Adc12ImplP__SINGLE_DATA_REPEAT = 2, 
  Msp430Adc12ImplP__MULTIPLE_DATA = 4, 
  Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT = 8, 
  Msp430Adc12ImplP__MULTI_CHANNEL = 16, 
  Msp430Adc12ImplP__CONVERSION_MODE_MASK = 0x1F, 

  Msp430Adc12ImplP__ADC_BUSY = 32, 
  Msp430Adc12ImplP__USE_TIMERA = 64, 
  Msp430Adc12ImplP__ADC_OVERFLOW = 128
};

uint8_t Msp430Adc12ImplP__state;

uint16_t Msp430Adc12ImplP__resultBufferLength;
uint16_t * Msp430Adc12ImplP__resultBufferStart;
uint16_t Msp430Adc12ImplP__resultBufferIndex;
uint8_t Msp430Adc12ImplP__numChannels;
uint8_t Msp430Adc12ImplP__clientID;

static inline error_t Msp430Adc12ImplP__Init__init(void );
#line 131
static inline void Msp430Adc12ImplP__startTimerA(void );
#line 152
static inline void Msp430Adc12ImplP__configureAdcPin(uint8_t inch);
#line 169
static void Msp430Adc12ImplP__resetAdcPin(uint8_t inch);
#line 186
static inline error_t Msp430Adc12ImplP__SingleChannel__configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config);
#line 404
static inline error_t Msp430Adc12ImplP__SingleChannel__getData(uint8_t id);
#line 513
static void Msp430Adc12ImplP__stopConversion(void );
#line 550
static inline void Msp430Adc12ImplP__TimerA__overflow(void );
static inline void Msp430Adc12ImplP__CompareA0__fired(void );
static inline void Msp430Adc12ImplP__CompareA1__fired(void );

static inline void Msp430Adc12ImplP__HplAdc12__conversionDone(uint16_t iv);
#line 657
static inline error_t Msp430Adc12ImplP__SingleChannel__default__singleDataReady(uint8_t id, uint16_t data);




static inline uint16_t *Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(uint8_t id, 
uint16_t *buf, uint16_t numSamples);




static inline void Msp430Adc12ImplP__MultiChannel__default__dataReady(uint8_t id, uint16_t *buffer, uint16_t numSamples);

static inline void Msp430Adc12ImplP__Overflow__default__memOverflow(uint8_t id);
static inline void Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(uint8_t id);
# 112 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
static void HplAdc12P__HplAdc12__conversionDone(uint16_t iv);
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static volatile uint16_t HplAdc12P__ADC12CTL0 __asm ("0x01A0");
static volatile uint16_t HplAdc12P__ADC12CTL1 __asm ("0x01A2");
static volatile uint16_t HplAdc12P__ADC12IFG __asm ("0x01A4");
static volatile uint16_t HplAdc12P__ADC12IE __asm ("0x01A6");
static volatile uint16_t HplAdc12P__ADC12IV __asm ("0x01A8");

static inline adc12ctl0_t HplAdc12P__int2adc12ctl0(uint16_t x)  ;

static inline uint16_t HplAdc12P__adc12ctl0cast2int(adc12ctl0_t x)  ;
static inline uint16_t HplAdc12P__adc12ctl1cast2int(adc12ctl1_t x)  ;
static inline uint8_t HplAdc12P__adc12memctl2int(adc12memctl_t x)  ;
static inline adc12memctl_t HplAdc12P__int2adc12memctl(uint8_t x)  ;

static inline void HplAdc12P__HplAdc12__setCtl0(adc12ctl0_t control0);



static inline void HplAdc12P__HplAdc12__setCtl1(adc12ctl1_t control1);



static inline adc12ctl0_t HplAdc12P__HplAdc12__getCtl0(void );







static inline void HplAdc12P__HplAdc12__setMCtl(uint8_t i, adc12memctl_t memCtl);



static inline adc12memctl_t HplAdc12P__HplAdc12__getMCtl(uint8_t i);



static inline uint16_t HplAdc12P__HplAdc12__getMem(uint8_t i);



static inline void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask);


static inline void HplAdc12P__HplAdc12__resetIFGs(void );




static inline void HplAdc12P__HplAdc12__startConversion(void );




static void HplAdc12P__HplAdc12__stopConversion(void );








static inline void HplAdc12P__HplAdc12__enableConversion(void );



static inline bool HplAdc12P__HplAdc12__isBusy(void );

void sig_ADC12_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x002A)))  ;
# 49 "/home/johanna/tinyos-main-test/tos/system/RoundRobinResourceQueueC.nc"
enum /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4387 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceRequested.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x412c9770);
# 65 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x412c8430);
# 59 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x412c8430);
# 79 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x412ccc78);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4388 {
#line 69
  SimpleArbiterP__0__grantedTask = 25U
};
#line 69
typedef int /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4389 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4390 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;



static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 97
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 137
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void );
#line 155
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );









static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 63 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t Msp430RefVoltGeneratorP__HplAdc12__getCtl0(void );
#line 118
static bool Msp430RefVoltGeneratorP__HplAdc12__isBusy(void );
#line 51
static void Msp430RefVoltGeneratorP__HplAdc12__setCtl0(adc12ctl0_t control0);
# 73 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP__SwitchOffTimer__stop(void );
# 113 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static void Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(error_t error);
# 92 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static bool Msp430RefVoltGeneratorP__SwitchOffSettleTimer__isRunning(void );
#line 73
static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__stop(void );
# 113 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static void Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(error_t error);
# 73 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP__SwitchOnTimer__stop(void );
# 66 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
#line 53
typedef enum Msp430RefVoltGeneratorP____nesc_unnamed4391 {

  Msp430RefVoltGeneratorP__GENERATOR_OFF = 0, 

  Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE = 1, 
  Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE = 2, 

  Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING = 3, 
  Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING = 4, 

  Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING = 5, 
  Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING = 6
} 
Msp430RefVoltGeneratorP__state_t;

Msp430RefVoltGeneratorP__state_t Msp430RefVoltGeneratorP__m_state;


static error_t Msp430RefVoltGeneratorP__switchOn(uint8_t level);
static error_t Msp430RefVoltGeneratorP__switchOff(void );
static void Msp430RefVoltGeneratorP__signalStartDone(Msp430RefVoltGeneratorP__state_t state, error_t result);
static void Msp430RefVoltGeneratorP__signalStopDone(Msp430RefVoltGeneratorP__state_t state, error_t result);
static error_t Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__state_t targetState);
static error_t Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__state_t nextState);


static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__start(void );



static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__start(void );



static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__stop(void );



static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__stop(void );



static error_t Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__state_t targetState);
#line 147
static error_t Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__state_t nextState);
#line 173
static void Msp430RefVoltGeneratorP__signalStartDone(Msp430RefVoltGeneratorP__state_t state, error_t result);






static void Msp430RefVoltGeneratorP__signalStopDone(Msp430RefVoltGeneratorP__state_t state, error_t result);







static inline void Msp430RefVoltGeneratorP__SwitchOnTimer__fired(void );
#line 205
static inline void Msp430RefVoltGeneratorP__SwitchOffTimer__fired(void );
#line 233
static inline void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__fired(void );


static inline void Msp430RefVoltGeneratorP__HplAdc12__conversionDone(uint16_t iv);



static error_t Msp430RefVoltGeneratorP__switchOn(uint8_t level);
#line 259
static error_t Msp430RefVoltGeneratorP__switchOff(void );
# 58 "/home/johanna/tinyos-main-test/tos/interfaces/AdcConfigure.nc"
static Msp430RefVoltArbiterImplP__Config__adc_config_t Msp430RefVoltArbiterImplP__Config__getConfiguration(
# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x4132f7f8);
# 104 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__start(void );
#line 130
static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__stop(void );
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__release(
# 40 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x41332c98);
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__request(
# 40 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x41332c98);
# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP__ClientResource__granted(
# 38 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x413321e0);
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static error_t Msp430RefVoltArbiterImplP__switchOff__postTask(void );
# 104 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__start(void );
#line 130
static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__stop(void );
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
enum Msp430RefVoltArbiterImplP____nesc_unnamed4392 {
#line 52
  Msp430RefVoltArbiterImplP__switchOff = 26U
};
#line 52
typedef int Msp430RefVoltArbiterImplP____nesc_sillytask_switchOff[Msp430RefVoltArbiterImplP__switchOff];
#line 46
enum Msp430RefVoltArbiterImplP____nesc_unnamed4393 {
  Msp430RefVoltArbiterImplP__NO_OWNER = 0xFF
};
uint8_t Msp430RefVoltArbiterImplP__syncOwner = Msp430RefVoltArbiterImplP__NO_OWNER;
bool Msp430RefVoltArbiterImplP__ref2_5v;



static inline error_t Msp430RefVoltArbiterImplP__ClientResource__request(uint8_t client);
#line 71
static inline void Msp430RefVoltArbiterImplP__AdcResource__granted(uint8_t client);
#line 103
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error_t error);








static inline void Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error_t error);








static error_t Msp430RefVoltArbiterImplP__ClientResource__release(uint8_t client);
#line 141
static inline void Msp430RefVoltArbiterImplP__switchOff__runTask(void );
#line 157
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error_t error);



static inline void Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error_t error);








static inline void Msp430RefVoltArbiterImplP__ClientResource__default__granted(uint8_t client);
static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__request(uint8_t client);








static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__release(uint8_t client);
const msp430adc12_channel_config_t Msp430RefVoltArbiterImplP__defaultConfig = { INPUT_CHANNEL_NONE, 0, 0, 0, 0, 0, 0, 0 };
static inline const msp430adc12_channel_config_t *
Msp430RefVoltArbiterImplP__Config__default__getConfiguration(uint8_t client);
# 58 "/home/johanna/tinyos-main-test/tos/interfaces/AdcConfigure.nc"
static /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__adc_config_t /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__getConfiguration(void );
# 47 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*SenseNodeAppC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration(void );
# 391 "/home/johanna/tinyos-main-test/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_disable_interrupt(void )
{
  __dint();
  __nop();
}

static inline  void __nesc_enable_interrupt(void )
{
  __eint();
}

# 196 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void )
{
}

# 550 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__TimerA__overflow(void )
#line 550
{
}

# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void ){
#line 48
  Msp430Adc12ImplP__TimerA__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow();
#line 48
}
#line 48
# 137 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow();
}





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n)
{
}

# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x4056f850){
#line 39
  switch (arg_0x4056f850) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x4056f850);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 126 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(0);
}

# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired();
#line 39
}
#line 39
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4394 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(* (volatile uint16_t * )354U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n)
{
}

# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void )
{
  return * (volatile uint16_t * )370U;
}

# 551 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__CompareA0__fired(void )
#line 551
{
}

# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
#line 45
  Msp430Adc12ImplP__CompareA0__fired();
#line 45
}
#line 45
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4395 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(* (volatile uint16_t * )356U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n)
{
}

# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void )
{
  return * (volatile uint16_t * )372U;
}

# 552 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__CompareA1__fired(void )
#line 552
{
}

# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
#line 45
  Msp430Adc12ImplP__CompareA1__fired();
#line 45
}
#line 45
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4396 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(* (volatile uint16_t * )358U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n)
{
}

# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void )
{
  return * (volatile uint16_t * )374U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void )
{
}

# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired();
#line 45
}
#line 45
# 131 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;

#line 134
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(n >> 1);
}

# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired();
#line 39
}
#line 39
# 126 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(0);
}

# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired();
#line 39
}
#line 39
# 196 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void )
{
}

# 114 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

# 177 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 58 "/home/johanna/tinyos-main-test/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper++;
    if ((/*Counter32khz32C.Transform*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 58 "/home/johanna/tinyos-main-test/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 177 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow(void )
{
}

# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow();
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
}
#line 82
# 133 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper++;
    if ((/*CounterMilli32C.Transform*/TransformCounterC__1__m_upper & /*CounterMilli32C.Transform*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow();
      }
  }
}

# 177 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static inline void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Counter__overflow(void )
{
}

# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli16C.Transform*/TransformCounterC__2__Counter__overflow(void ){
#line 82
  /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Counter__overflow();
#line 82
}
#line 82
# 133 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli16C.Transform*/TransformCounterC__2__m_upper++;
    if ((/*CounterMilli16C.Transform*/TransformCounterC__2__m_upper & /*CounterMilli16C.Transform*/TransformCounterC__2__OVERFLOW_MASK) == 0) {
      /*CounterMilli16C.Transform*/TransformCounterC__2__Counter__overflow();
      }
  }
}

# 207 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__overflow(void )
#line 207
{
}

# 82 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
#line 82
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Counter__overflow();
#line 82
  /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__overflow();
#line 82
  /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow();
#line 82
  /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 64 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow();
}

# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
#line 48
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow();
#line 48
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
#line 48
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow();
#line 48
  /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow();
#line 48
}
#line 48
# 137 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow();
}

# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 188 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__request(void )
#line 188
{
  return CC2420ControlP__SpiResource__request();
}

# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420ControlP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 210 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startVRegDone(void )
#line 210
{
  CC2420CsmaP__Resource__request();
}

# 56 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
#line 56
  CC2420CsmaP__CC2420Power__startVRegDone();
#line 56
}
#line 56
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__set();
#line 48
}
#line 48
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set();
}

# 40 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__set(void ){
#line 40
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set();
#line 40
}
#line 40
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__clr();
#line 53
}
#line 53
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr();
}

# 41 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__clr(void ){
#line 41
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr();
#line 41
}
#line 41
# 431 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__StartupTimer__fired(void )
#line 431
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 803 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__releaseSpiResource(void )
#line 803
{
  CC2420TransmitP__SpiResource__release();
  return SUCCESS;
}

# 61 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_RISING);
}

# 53 "/home/johanna/tinyos-main-test/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHTX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get();
}

#line 157
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 66 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__getRaw(void )
#line 51
{
#line 51
  return * (volatile uint8_t * )32U & (0x01 << 4);
}

#line 52
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__get(void )
#line 52
{
#line 52
  return /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__getRaw() != 0;
}

# 73 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get();
}

# 43 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 498 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__BackoffTimer__fired(void )
#line 498
{
  /* atomic removed: atomic calls only */
#line 499
  {
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SAMPLE_CCA: 


          if (CC2420TransmitP__CCA__get()) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP__congestionBackoff();
            }
        break;

        case CC2420TransmitP__S_BEGIN_TRANSMIT: 
          case CC2420TransmitP__S_CANCEL: 
            if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
                CC2420TransmitP__attemptSend();
              }
        break;

        case CC2420TransmitP__S_ACK_WAIT: 
          CC2420TransmitP__signalDone(SUCCESS);
        break;

        case CC2420TransmitP__S_SFD: 


          CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CaptureSFD__captureRisingEdge();
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  CC2420TransmitP__BackoffTimer__fired();
#line 78
  CC2420ControlP__StartupTimer__fired();
#line 78
}
#line 78
# 162 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt == 0) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void ){
#line 78
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents();
#line 58
}
#line 58
# 70 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired();
}

# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void ){
#line 45
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void )
{
  return * (volatile uint16_t * )402U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n)
{
}

# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4397 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(* (volatile uint16_t * )386U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired();
    }
}

# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get();
}

# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 81 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}

# 46 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
inline static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending();
}

# 71 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 130 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents();
#line 57
}
#line 57
# 95 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}

# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}

# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get() + x;
}

# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents();
  }
}

# 103 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 292 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 297 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg)
#line 298
{
}

# 88 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(am_id_t arg_0x40f08148, message_t * msg){
#line 88
    CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(arg_0x40f08148, msg);
#line 88
}
#line 88
# 246 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 246
{
  CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 88 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 89 "/home/johanna/tinyos-main-test/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/home/johanna/tinyos-main-test/tos/interfaces/Random.nc"
inline static uint16_t CC2420CsmaP__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 251 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime)
#line 251
{
  CC2420TransmitP__myCongestionBackoff = backoffTime + 1;
}

# 66 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime){
#line 66
  CC2420TransmitP__RadioBackoff__setCongestionBackoff(backoffTime);
#line 66
}
#line 66
# 230 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 230
{
  CC2420CsmaP__SubBackoff__setCongestionBackoff(CC2420CsmaP__Random__rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestCongestionBackoff(msg);
}

# 88 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 45 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 113 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__isOwner(uint8_t id)
#line 113
{
#line 113
  return FAIL;
}

# 128 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static bool /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__isOwner(uint8_t arg_0x40b2d200){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x40b2d200) {
#line 128
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__isOwner(arg_0x40b2d200);
#line 128
      break;
#line 128
    }
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 79 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__isOwner(uint8_t id)
#line 79
{
  return /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__isOwner(id);
}

# 128 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 57 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/usci/Z1UsciP.nc"
static inline msp430_spi_union_config_t */*Msp430SpiNoDmaB0P.Z1UsciP*/Z1UsciP__0__Msp430SpiConfigure__getConfig(uint8_t id)
#line 57
{
  return (msp430_spi_union_config_t *)&/*Msp430SpiNoDmaB0P.Z1UsciP*/Z1UsciP__0__msp430_spi_z1_config;
}

# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiConfigure.nc"
inline static msp430_spi_union_config_t */*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Msp430SpiConfigure__getConfig(uint8_t arg_0x40b2dc50){
#line 45
  union __nesc_unnamed4287 *__nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430SpiNoDmaB0P.Z1UsciP*/Z1UsciP__0__Msp430SpiConfigure__getConfig(arg_0x40b2dc50);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 141 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__setModeSpi(msp430_spi_union_config_t *config){
#line 141
  HplMsp430UsciB0P__Usci__setModeSpi(config);
#line 141
}
#line 141
# 87 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__configure(uint8_t id)
#line 87
{
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__setModeSpi(/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Msp430SpiConfigure__getConfig(id));
}

# 216 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x40c1a430){
#line 59
  switch (arg_0x40c1a430) {
#line 59
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID:
#line 59
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__configure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x40c1a430);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 213 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void )
#line 213
{
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 81 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested();
#line 81
}
#line 81
# 206 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x40c1b010){
#line 61
    /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x40c1b010);
#line 61
}
#line 61
# 93 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 95
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING;
        /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 100
        FAIL;

#line 100
        return __nesc_temp;
      }
  }
#line 102
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 107
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
  return FAIL;
}

# 115 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__immediateRequest(uint8_t id)
#line 115
{
#line 115
  return FAIL;
}

# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__immediateRequest(uint8_t arg_0x40b2d200){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x40b2d200) {
#line 97
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__immediateRequest(arg_0x40b2d200);
#line 97
      break;
#line 97
    }
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 71 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__immediateRequest(uint8_t id)
#line 71
{
  return /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__immediateRequest(id);
}

# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 97 "/home/johanna/tinyos-main-test/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 225 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__disableIntr(void )
#line 225
{
  HplMsp430UsciB0P__IE2 &= ~(0x08 | 0x04);
}

#line 213
static inline void HplMsp430UsciB0P__Usci__clrIntr(void )
#line 213
{
  HplMsp430UsciB0P__IFG2 &= ~(0x08 | 0x04);
}

# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )27U |= 0x01 << 3;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciB0P__UCLK__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectModuleFunc();
#line 92
}
#line 92
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )27U |= 0x01 << 2;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciB0P__SOMI__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectModuleFunc();
#line 92
}
#line 92
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )27U |= 0x01 << 1;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciB0P__SIMO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectModuleFunc();
#line 92
}
#line 92
# 160 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__enableSpi(void )
#line 160
{
  /* atomic removed: atomic calls only */
#line 161
  {
    HplMsp430UsciB0P__SIMO__selectModuleFunc();
    HplMsp430UsciB0P__SOMI__selectModuleFunc();
    HplMsp430UsciB0P__UCLK__selectModuleFunc();
  }
}

#line 107
static inline void HplMsp430UsciB0P__Usci__setUbr(uint16_t control)
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  {
    UCB0BR0 = control & 0x00FF;
    UCB0BR1 = (control >> 8) & 0x00FF;
  }
}

#line 176
static inline void HplMsp430UsciB0P__configSpi(msp430_spi_union_config_t *config)
#line 176
{
  HplMsp430UsciB0P__UCB0CTL1 = config->spiRegisters.uctl1 | 0x01;
  HplMsp430UsciB0P__UCB0CTL0 = config->spiRegisters.uctl0 | 0x01;
  HplMsp430UsciB0P__Usci__setUbr(config->spiRegisters.ubr);
}

# 118 "/home/johanna/tinyos-main-test/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP__state[id] = StateImplP__S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
inline static void CC2420SpiP__WorkingState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 210 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 73 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 64 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 88
          /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 89
        /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x40c1b010){
#line 53
    /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x40c1b010);
#line 53
}
#line 53
# 77 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 79
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
        /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
#line 84
      if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId == id) {
          {
            unsigned char __nesc_temp = 
#line 85
            SUCCESS;

#line 85
            return __nesc_temp;
          }
        }
      else 
#line 87
        {
          unsigned char __nesc_temp = 
#line 87
          /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(id);

#line 87
          return __nesc_temp;
        }
      }
  }
#line 89
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 114 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__request(uint8_t id)
#line 114
{
#line 114
  return FAIL;
}

# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__request(uint8_t arg_0x40b2d200){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x40b2d200) {
#line 88
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID:
#line 88
      __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__request(arg_0x40b2d200);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 75 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__request(uint8_t id)
#line 75
{
  return /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__request(id);
}

# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 250 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__tx(uint8_t data)
#line 250
{
  HplMsp430UsciB0P__UCB0TXBUF = data;
}

# 108 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__tx(uint8_t data){
#line 108
  HplMsp430UsciB0P__Usci__tx(data);
#line 108
}
#line 108
# 199 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline bool HplMsp430UsciB0P__Usci__isRxIntrPending(void )
#line 199
{
  if (HplMsp430UsciB0P__IFG2 & 0x04) {
    return TRUE;
    }
#line 202
  return FALSE;
}

# 98 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static bool /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__isRxIntrPending(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = HplMsp430UsciB0P__Usci__isRxIntrPending();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 209 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__clrRxIntr(void )
#line 209
{
  HplMsp430UsciB0P__IFG2 &= ~0x04;
}

# 100 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__clrRxIntr(void ){
#line 100
  HplMsp430UsciB0P__Usci__clrRxIntr();
#line 100
}
#line 100
# 254 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline uint8_t HplMsp430UsciB0P__Usci__rx(void )
#line 254
{
  return HplMsp430UsciB0P__UCB0RXBUF;
}

# 115 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__rx(void ){
#line 115
  unsigned char __nesc_result;
#line 115

#line 115
  __nesc_result = HplMsp430UsciB0P__Usci__rx();
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 95 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__ChipSpiResource__abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP__release = FALSE;
}

# 31 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP__ChipSpiResource__abortRelease(void ){
#line 31
  CC2420SpiP__ChipSpiResource__abortRelease();
#line 31
}
#line 31
# 377 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
#line 377
{
  if (CC2420TransmitP__abortSpiRelease) {
      CC2420TransmitP__ChipSpiResource__abortRelease();
    }
}

# 24 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
#line 24
  CC2420TransmitP__ChipSpiResource__releasing();
#line 24
}
#line 24
# 208 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 127 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__resetUsci(bool reset)
#line 127
{
  if (reset) {
    HplMsp430UsciB0P__UCB0CTL1 |= 0x01;
    }
  else {
#line 131
    HplMsp430UsciB0P__UCB0CTL1 &= ~0x01;
    }
}

# 81 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__resetUsci(bool reset){
#line 81
  HplMsp430UsciB0P__Usci__resetUsci(reset);
#line 81
}
#line 81
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )27U &= ~(0x01 << 3);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciB0P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectIOFunc();
#line 99
}
#line 99
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )27U &= ~(0x01 << 2);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciB0P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectIOFunc();
#line 99
}
#line 99
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )27U &= ~(0x01 << 1);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciB0P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectIOFunc();
#line 99
}
#line 99
# 168 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__disableSpi(void )
#line 168
{
  /* atomic removed: atomic calls only */
#line 169
  {
    HplMsp430UsciB0P__SIMO__selectIOFunc();
    HplMsp430UsciB0P__SOMI__selectIOFunc();
    HplMsp430UsciB0P__UCLK__selectIOFunc();
  }
}

# 130 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__disableSpi(void ){
#line 130
  HplMsp430UsciB0P__Usci__disableSpi();
#line 130
}
#line 130
# 91 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 91
{
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__resetUsci(TRUE);
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__disableSpi();
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__resetUsci(FALSE);
}

# 218 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x40c1a430){
#line 65
  switch (arg_0x40c1a430) {
#line 65
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID:
#line 65
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__unconfigure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x40c1a430);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead != /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  /* atomic removed: atomic calls only */
#line 112
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY && /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
        if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue();
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
          }
        else {
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
          }
        {
          unsigned char __nesc_temp = 
#line 127
          SUCCESS;

#line 127
          return __nesc_temp;
        }
      }
  }
#line 130
  return FAIL;
}

# 116 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__release(uint8_t id)
#line 116
{
#line 116
  return FAIL;
}

# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__release(uint8_t arg_0x40b2d200){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x40b2d200) {
#line 120
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__release(arg_0x40b2d200);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 83 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__release(uint8_t id)
#line 83
{
  return /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__release(id);
}

# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXONCCA);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__SNOP__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SNOP);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 102 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
#line 102
{
  return CC2420SpiP__attemptRelease();
}

# 39 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP__ChipSpiResource__attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )31U |= 0x01 << 1;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__selectModuleFunc();
#line 92
}
#line 92
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4398 {
#line 57
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm)
{
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x = { 
  .cm = l_cm & 0x03, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 1, 
  .scs = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(x);
}

#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm)
{
  * (volatile uint16_t * )388U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(cm);
}

# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm){
#line 55
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(cm);
#line 55
}
#line 55
# 130 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void )
{
  * (volatile uint16_t * )388U |= 0x0010;
}

# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents();
#line 57
}
#line 57
# 192 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void )
{
}

# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired();
#line 45
}
#line 45
# 150 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void )
{
  return * (volatile uint16_t * )404U;
}

# 322 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

#line 347
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 340
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 70 "/home/johanna/tinyos-main-test/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__clear(message_t * msg){
#line 70
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 70
}
#line 70
# 195 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void )
#line 195
{
  if (CC2420ReceiveP__m_timestamp_size) {
      CC2420ReceiveP__m_timestamp_size--;
    }
}

# 55 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd_dropped(void ){
#line 55
  CC2420ReceiveP__CC2420Receive__sfd_dropped();
#line 55
}
#line 55
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__getRaw(void )
#line 51
{
#line 51
  return * (volatile uint8_t * )28U & (0x01 << 1);
}

#line 52
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__get(void )
#line 52
{
#line 52
  return /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__getRaw() != 0;
}

# 73 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get();
}

# 43 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__SFD__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 186 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time)
#line 186
{
  if (CC2420ReceiveP__m_timestamp_size < CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP__m_timestamp_head + CC2420ReceiveP__m_timestamp_size) % 
      CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;

#line 190
      CC2420ReceiveP__m_timestamp_queue[tail] = time;
      CC2420ReceiveP__m_timestamp_size++;
    }
}

# 49 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time){
#line 49
  CC2420ReceiveP__CC2420Receive__sfd(time);
#line 49
}
#line 49
# 65 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_FALLING);
}

# 54 "/home/johanna/tinyos-main-test/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 137 "/home/johanna/tinyos-main-test/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg)
#line 137
{
  return (cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 65 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
}

# 73 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__stop(void ){
#line 73
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__set();
#line 48
}
#line 48
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set();
}

# 40 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_TXFIFO, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__clr();
#line 53
}
#line 53
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr();
}

# 41 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 219 "/home/johanna/tinyos-main-test/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(msg)->length.nxdata)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 58 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(message_t * msg){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__get(msg);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

#line 303
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 303
{
#line 303
  return __nesc_ntoh_uint8(source);
}

# 152 "/home/johanna/tinyos-main-test/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg)
#line 152
{
  return (cc2420_metadata_t *)msg->metadata;
}

#line 210
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata);
}

# 50 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(message_t * msg){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__isSet(msg);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 177 "/home/johanna/tinyos-main-test/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, value);
}

# 78 "/home/johanna/tinyos-main-test/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__set(message_t * msg, CC2420TransmitP__PacketTimeStamp__size_type value){
#line 78
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 78
}
#line 78
# 109 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 259 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time)
{
  uint32_t now = CC2420TransmitP__BackoffTimer__getNow();


  return now - (uint16_t )(now - captured_time);
}

#line 280
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
#line 280
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;
#line 281
  uint32_t time32;
  uint8_t sfd_state = 0;

  /* atomic removed: atomic calls only */
#line 283
  {
    time32 = CC2420TransmitP__getTime32(time);
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SFD: 
          CC2420TransmitP__m_state = CC2420TransmitP__S_EFD;
        CC2420TransmitP__sfdHigh = TRUE;


        CC2420TransmitP__m_receiving = FALSE;
        CC2420TransmitP__CaptureSFD__captureFallingEdge();
        CC2420TransmitP__PacketTimeStamp__set(CC2420TransmitP__m_msg, time32);
        if (CC2420TransmitP__PacketTimeSyncOffset__isSet(CC2420TransmitP__m_msg)) {
            uint8_t absOffset = sizeof(message_header_t ) - sizeof(cc2420_header_t ) + CC2420TransmitP__PacketTimeSyncOffset__get(CC2420TransmitP__m_msg);
            timesync_radio_t *timesync = (timesync_radio_t *)((nx_uint8_t *)CC2420TransmitP__m_msg + absOffset);

            (__nesc_temp44 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp44, __nesc_ntoh_uint32(__nesc_temp44) - time32));
            CC2420TransmitP__CSN__clr();
            CC2420TransmitP__TXFIFO_RAM__write(absOffset, (uint8_t *)timesync, sizeof(timesync_radio_t ));
            CC2420TransmitP__CSN__set();

            (__nesc_temp45 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp45, __nesc_ntoh_uint32(__nesc_temp45) + time32));
          }

        if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {

            CC2420TransmitP__abortSpiRelease = TRUE;
          }
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__BackoffTimer__stop();

        if (CC2420TransmitP__SFD__get()) {
            break;
          }


        case CC2420TransmitP__S_EFD: 
          CC2420TransmitP__sfdHigh = FALSE;
        CC2420TransmitP__CaptureSFD__captureRisingEdge();

        if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {
            CC2420TransmitP__m_state = CC2420TransmitP__S_ACK_WAIT;
            CC2420TransmitP__BackoffTimer__start(CC2420_ACK_WAIT_DELAY);
          }
        else 
#line 326
          {
            CC2420TransmitP__signalDone(SUCCESS);
          }

        if (!CC2420TransmitP__SFD__get()) {
            break;
          }


        default: 

          if (!CC2420TransmitP__m_receiving && CC2420TransmitP__sfdHigh == FALSE) {
              CC2420TransmitP__sfdHigh = TRUE;
              CC2420TransmitP__CaptureSFD__captureFallingEdge();

              sfd_state = CC2420TransmitP__SFD__get();
              CC2420TransmitP__CC2420Receive__sfd(time32);
              CC2420TransmitP__m_receiving = TRUE;
              CC2420TransmitP__m_prev_time = time;
              if (CC2420TransmitP__SFD__get()) {

                  return;
                }
            }



        if (CC2420TransmitP__sfdHigh == TRUE) {
            CC2420TransmitP__sfdHigh = FALSE;
            CC2420TransmitP__CaptureSFD__captureRisingEdge();
            CC2420TransmitP__m_receiving = FALSE;








            if (sfd_state == 0 && time - CC2420TransmitP__m_prev_time < 10) {
                CC2420TransmitP__CC2420Receive__sfd_dropped();
                if (CC2420TransmitP__m_msg) {
                  CC2420TransmitP__PacketTimeStamp__clear(CC2420TransmitP__m_msg);
                  }
              }
#line 370
            break;
          }
      }
  }
}

# 61 "/home/johanna/tinyos-main-test/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time){
#line 61
  CC2420TransmitP__CaptureSFD__captured(time);
#line 61
}
#line 61
# 175 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void )
{
  * (volatile uint16_t * )388U &= ~0x0002;
}

# 68 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void ){
#line 68
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow();
#line 68
}
#line 68
# 95 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )388U &= ~0x0001;
}

# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 76 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time)
#line 76
{
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(time);
}

# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time){
#line 86
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(time);
#line 86
}
#line 86
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4399 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(* (volatile uint16_t * )388U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired();
    }
}

# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/johanna/tinyos-main-test/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt == 0) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__fired();
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm();
      }
  }
}

# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void )
{
  * (volatile uint16_t * )390U &= ~0x0010;
}

# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents();
#line 58
}
#line 58
# 70 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired();
}

# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void ){
#line 45
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void )
{
  return * (volatile uint16_t * )406U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n)
{
}

# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4400 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(* (volatile uint16_t * )390U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired();
    }
}

# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64







inline static bool /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 130 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void )
{
  * (volatile uint16_t * )390U |= 0x0010;
}

# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents();
#line 57
}
#line 57
# 95 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )390U &= ~0x0001;
}

# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )406U = x;
}

# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )406U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get() + x;
}

# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt();
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents();
  }
}

# 103 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 130 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static error_t SenseNodeC__AMControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = CC2420CsmaP__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 230 "SenseNodeC.nc"
static inline void SenseNodeC__IdleAlarm__fired(void )
#line 230
{

  printf("IdleAlarm fired.\n");
  printfflush();

  SenseNodeC__AMControl__stop();
  SenseNodeC__listen_flag = FALSE;
}

# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__fired(void ){
#line 78
  SenseNodeC__IdleAlarm__fired();
#line 78
}
#line 78
# 162 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static inline void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_dt == 0) 
      {
        /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__fired();
      }
    else 
      {
        /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__set_alarm();
      }
  }
}

# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired(void ){
#line 78
  /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void )
{
  * (volatile uint16_t * )392U &= ~0x0010;
}

# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents();
#line 58
}
#line 58
# 70 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void )
{
  /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents();
  /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired();
}

# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void ){
#line 45
  /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void )
{
  return * (volatile uint16_t * )408U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n)
{
}

# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4401 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(* (volatile uint16_t * )392U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired();
    }
}

# 53 "/home/johanna/tinyos-main-test/tos/system/QueueC.nc"
static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*PrintfC.QueueC*/QueueC__0__size == 0;
}

# 50 "/home/johanna/tinyos-main-test/tos/interfaces/Queue.nc"
inline static bool PrintfP__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 126 "/home/johanna/tinyos-main-test/tos/interfaces/Packet.nc"
inline static void * PrintfP__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 131 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 28;
}

# 69 "/home/johanna/tinyos-main-test/tos/system/QueueC.nc"
static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void )
#line 69
{
}

#line 65
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__head(void )
#line 65
{
  return /*PrintfC.QueueC*/QueueC__0__queue[/*PrintfC.QueueC*/QueueC__0__head];
}

#line 85
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*PrintfC.QueueC*/QueueC__0__queue_t t = /*PrintfC.QueueC*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*PrintfC.QueueC*/QueueC__0__Queue__empty()) {
      /*PrintfC.QueueC*/QueueC__0__head++;
      if (/*PrintfC.QueueC*/QueueC__0__head == 250) {
#line 90
        /*PrintfC.QueueC*/QueueC__0__head = 0;
        }
#line 91
      /*PrintfC.QueueC*/QueueC__0__size--;
      /*PrintfC.QueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 81 "/home/johanna/tinyos-main-test/tos/interfaces/Queue.nc"
inline static PrintfP__Queue__t  PrintfP__Queue__dequeue(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 60 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 158
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 158
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 160
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 103 "/home/johanna/tinyos-main-test/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 177 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type)
#line 177
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 179
  __nesc_hton_uint8(header->type.nxdata, type);
}

# 162 "/home/johanna/tinyos-main-test/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(am_id_t arg_0x407f82b0, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x407f82b0, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(message_t * amsg){
#line 78
  unsigned int __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 127 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 127
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg)->length.nxdata, len);
}

# 94 "/home/johanna/tinyos-main-test/tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 538 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 538
{
  bool not_busy = FALSE;

#line 540
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 540
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 542
          EOFF;

          {
#line 542
            __nesc_atomic_end(__nesc_atomic); 
#line 542
            return __nesc_temp;
          }
        }
    }
#line 545
    __nesc_atomic_end(__nesc_atomic); }
#line 544
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 544
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 550
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/home/johanna/tinyos-main-test/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x410562a0, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x410562a0) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x410562a0, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 51 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x410562a0){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x410562a0) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x410562a0);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 111 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )31U &= ~(0x01 << 1);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__selectIOFunc();
#line 99
}
#line 99
# 135 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void )
{
  * (volatile uint16_t * )388U &= ~0x0010;
}

# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents();
#line 58
}
#line 58
# 69 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc();
  }
}

# 66 "/home/johanna/tinyos-main-test/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP__CaptureSFD__disable(void ){
#line 66
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable();
#line 66
}
#line 66
# 104 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__clear(void )
#line 104
{
#line 104
  P1IFG &= ~(1 << 2);
}

# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port12__clear();
#line 52
}
#line 52
# 96 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__disable(void )
#line 96
{
#line 96
  P1IE &= ~(1 << 2);
}

# 47 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port12__disable();
#line 47
}
#line 47
# 69 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  }
  return SUCCESS;
}

# 61 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__clr(void )
#line 49
{
#line 49
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 49
    * (volatile uint8_t * )29U &= ~(0x01 << 5);
#line 49
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__clr();
#line 53
}
#line 53
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr();
}

# 41 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__clr(void ){
#line 41
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr();
#line 41
}
#line 41
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
inline static /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__size_type /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64







inline static bool /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 130 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void )
{
  * (volatile uint16_t * )392U |= 0x0010;
}

# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents();
#line 57
}
#line 57
# 95 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )392U &= ~0x0001;
}

# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )408U = x;
}

# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )408U = /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get() + x;
}

# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt();
    /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents();
  }
}

# 103 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__startAt(/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__size_type t0, /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__size_type dt){
#line 103
  /*SenseNodeAppC.AlarmMilli16C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void )
{
}

# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired();
#line 45
}
#line 45
# 150 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void )
{
  return * (volatile uint16_t * )410U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n)
{
}

# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4402 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(* (volatile uint16_t * )394U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void )
{
}

# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired();
#line 45
}
#line 45
# 150 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void )
{
  return * (volatile uint16_t * )412U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n)
{
}

# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4403 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(* (volatile uint16_t * )396U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void )
{
}

# 45 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired();
#line 45
}
#line 45
# 150 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void )
{
  return * (volatile uint16_t * )414U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n)
{
}

# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4404 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(* (volatile uint16_t * )398U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired();
    }
}

# 131 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;

#line 134
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(n >> 1);
}

# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired();
#line 39
}
#line 39
# 124 "/home/johanna/tinyos-main-test/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/home/johanna/tinyos-main-test/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__set();
#line 48
}
#line 48
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set();
}

# 40 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set();
#line 40
}
#line 40
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__set(void )
#line 48
{
  /* atomic removed: atomic calls only */
#line 48
  * (volatile uint8_t * )49U |= 0x01 << 6;
}

# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__set();
#line 48
}
#line 48
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set();
}

# 40 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set();
#line 40
}
#line 40
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__set(void )
#line 48
{
  /* atomic removed: atomic calls only */
#line 48
  * (volatile uint8_t * )49U |= 0x01 << 4;
}

# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__set();
#line 48
}
#line 48
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set();
}

# 40 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set();
#line 40
}
#line 40
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__makeOutput(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 55
  * (volatile uint8_t * )50U |= 0x01 << 5;
}

# 85 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__makeOutput();
#line 85
}
#line 85
# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput();
}

# 46 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput();
#line 46
}
#line 46
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__makeOutput(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 55
  * (volatile uint8_t * )50U |= 0x01 << 6;
}

# 85 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__makeOutput();
#line 85
}
#line 85
# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput();
}

# 46 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput();
#line 46
}
#line 46
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__makeOutput(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 55
  * (volatile uint8_t * )50U |= 0x01 << 4;
}

# 85 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__makeOutput();
#line 85
}
#line 85
# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput();
}

# 46 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput();
#line 46
}
#line 46
# 56 "/home/johanna/tinyos-main-test/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 108 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/timer/Msp430XDcoCalib.h"
static inline void Set_DCO(unsigned int Delta)
{
  unsigned int Compare;
#line 110
  unsigned int Oldcapture = 0;

  BCSCTL1 |= 0x30;
  TACCTL2 = 0x4000 + 0x1000 + 0x0100;
  TACTL = 0x0200 + 0x0020 + 0x0004;

  while (1) 
    {
      while (!(0x0001 & TACCTL2)) ;
      TACCTL2 &= ~0x0001;
      Compare = TACCR2;
      Compare = Compare - Oldcapture;
      Oldcapture = TACCR2;

      if (Delta == Compare) {
        break;
        }
      else {
#line 126
        if (Delta < Compare) 
          {
            DCOCTL--;
            if (DCOCTL == 0xFF) {
              if (BCSCTL1 & 0x0f) {
                BCSCTL1--;
                }
              }
          }
        else 
#line 134
          {
            DCOCTL++;
            if (DCOCTL == 0x00) {
              if ((BCSCTL1 & 0x0f) != 0x0f) {
                BCSCTL1++;
                }
              }
          }
        }
    }
#line 141
  TACCTL2 = 0;
  TACTL = 0;
  BCSCTL1 &= ~0x30;
}

# 180 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__startTimerB(void )
{

  Msp430ClockP__TBCTL = 0x0020 | (Msp430ClockP__TBCTL & ~(0x0020 | 0x0010));
}

#line 168
static inline void Msp430ClockP__startTimerA(void )
{

  Msp430ClockP__TACTL = 0x0020 | (Msp430ClockP__TACTL & ~(0x0020 | 0x0010));
}

#line 132
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void )
{
  TBR = 0;









  Msp430ClockP__TBCTL = 0x0100 | 0x0002;
}

#line 162
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerB();
}

# 43 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerB(void ){
#line 43
  Msp430ClockP__Msp430ClockInit__default__initTimerB();
#line 43
}
#line 43
# 117 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void )
{
  TAR = 0;









  Msp430ClockP__TACTL = 0x0200 | 0x0002;
}

#line 157
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerA();
}

# 42 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerA(void ){
#line 42
  Msp430ClockP__Msp430ClockInit__default__initTimerA();
#line 42
}
#line 42
# 82 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void )
{


  if (CALBC1_8MHZ != 0xFF) {
      DCOCTL = 0x00;
      BCSCTL1 = CALBC1_8MHZ;
      DCOCTL = CALDCO_8MHZ;
    }
  else 
#line 90
    {
      DCOCTL = 0x00;
      BCSCTL1 = 0x8D;
      DCOCTL = 0x88;
    }







  BCSCTL1 = 0x80 | BCSCTL1;
#line 114
  Msp430ClockP__IE1 &= ~0x02;
}

#line 152
static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitClocks();
}

# 41 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initClocks(void ){
#line 41
  Msp430ClockP__Msp430ClockInit__default__initClocks();
#line 41
}
#line 41
# 246 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/timer/Msp430ClockP.nc"
static inline error_t Msp430ClockP__Init__init(void )
{

  Msp430ClockP__TACTL = 0x0004;
  Msp430ClockP__TAIV = 0;
  Msp430ClockP__TBCTL = 0x0004;
  Msp430ClockP__TBIV = 0;
  /* atomic removed: atomic calls only */

  {



    Msp430ClockP__Msp430ClockInit__initClocks();
    Msp430ClockP__Msp430ClockInit__initTimerA();
    Msp430ClockP__Msp430ClockInit__initTimerB();
    Msp430ClockP__startTimerA();
    Msp430ClockP__startTimerB();
  }
  Set_DCO(1953);
  return SUCCESS;
}

# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
inline static error_t PlatformP__Msp430ClockInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 50 "/home/johanna/tinyos-main-test/tos/platforms/z1/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 50
{
  WDTCTL = 0x5A00 + 0x0080;
  PlatformP__Msp430ClockInit__init();
  PlatformP__LedsInit__init();
  return SUCCESS;
}

# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/johanna/tinyos-main-test/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t Msp430RefVoltArbiterImplP__switchOff__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Msp430RefVoltArbiterImplP__switchOff);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 87 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__stop(void )
#line 87
{
  return Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING);
}

# 130 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_1_5V__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 91 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__stop(void )
#line 91
{
  return Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING);
}

# 130 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_2_5V__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 141 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__switchOff__runTask(void )
{
  error_t stopped;

  if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {
      if (Msp430RefVoltArbiterImplP__ref2_5v) {
        stopped = Msp430RefVoltArbiterImplP__RefVolt_2_5V__stop();
        }
      else {
#line 149
        stopped = Msp430RefVoltArbiterImplP__RefVolt_1_5V__stop();
        }
#line 150
      if (stopped == SUCCESS) {
        Msp430RefVoltArbiterImplP__syncOwner = Msp430RefVoltArbiterImplP__NO_OWNER;
        }
      else {
#line 153
        Msp430RefVoltArbiterImplP__switchOff__postTask();
        }
    }
}

# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 118 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline bool HplAdc12P__HplAdc12__isBusy(void )
#line 118
{
#line 118
  return HplAdc12P__ADC12CTL1 & 0x0001;
}

# 118 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static bool Msp430RefVoltGeneratorP__HplAdc12__isBusy(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = HplAdc12P__HplAdc12__isBusy();
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  adc12ctl0_t HplAdc12P__int2adc12ctl0(uint16_t x)
#line 57
{
#line 57
  union __nesc_unnamed4405 {
#line 57
    uint16_t f;
#line 57
    adc12ctl0_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 72
static inline adc12ctl0_t HplAdc12P__HplAdc12__getCtl0(void )
#line 72
{
  return HplAdc12P__int2adc12ctl0(HplAdc12P__ADC12CTL0);
}

# 63 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static adc12ctl0_t Msp430RefVoltGeneratorP__HplAdc12__getCtl0(void ){
#line 63
  struct __nesc_unnamed4270 __nesc_result;
#line 63

#line 63
  __nesc_result = HplAdc12P__HplAdc12__getCtl0();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  uint16_t HplAdc12P__adc12ctl0cast2int(adc12ctl0_t x)
#line 59
{
#line 59
  union __nesc_unnamed4406 {
#line 59
    adc12ctl0_t f;
#line 59
    uint16_t t;
  } 
#line 59
  c = { .f = x };

#line 59
  return c.t;
}



static inline void HplAdc12P__HplAdc12__setCtl0(adc12ctl0_t control0)
#line 64
{
  HplAdc12P__ADC12CTL0 = HplAdc12P__adc12ctl0cast2int(control0);
}

# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430RefVoltGeneratorP__HplAdc12__setCtl0(adc12ctl0_t control0){
#line 51
  HplAdc12P__HplAdc12__setCtl0(control0);
#line 51
}
#line 51
# 164 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP__SwitchOnTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask)
#line 92
{
#line 92
  HplAdc12P__ADC12IE = mask;
}

# 95 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setIEFlags(uint16_t mask){
#line 95
  HplAdc12P__HplAdc12__setIEFlags(mask);
#line 95
}
#line 95
# 61 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  uint8_t HplAdc12P__adc12memctl2int(adc12memctl_t x)
#line 61
{
#line 61
  union __nesc_unnamed4407 {
#line 61
    adc12memctl_t f;
#line 61
    uint8_t t;
  } 
#line 61
  c = { .f = x };

#line 61
  return c.t;
}

#line 80
static inline void HplAdc12P__HplAdc12__setMCtl(uint8_t i, adc12memctl_t memCtl)
#line 80
{
  ((volatile char *)0x0080)[i] = HplAdc12P__adc12memctl2int(memCtl);
}

# 75 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setMCtl(uint8_t idx, adc12memctl_t memControl){
#line 75
  HplAdc12P__HplAdc12__setMCtl(idx, memControl);
#line 75
}
#line 75
# 60 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  uint16_t HplAdc12P__adc12ctl1cast2int(adc12ctl1_t x)
#line 60
{
#line 60
  union __nesc_unnamed4408 {
#line 60
    adc12ctl1_t f;
#line 60
    uint16_t t;
  } 
#line 60
  c = { .f = x };

#line 60
  return c.t;
}






static inline void HplAdc12P__HplAdc12__setCtl1(adc12ctl1_t control1)
#line 68
{
  HplAdc12P__ADC12CTL1 = HplAdc12P__adc12ctl1cast2int(control1);
}

# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setCtl1(adc12ctl1_t control1){
#line 57
  HplAdc12P__HplAdc12__setCtl1(control1);
#line 57
}
#line 57
#line 51
inline static void Msp430Adc12ImplP__HplAdc12__setCtl0(adc12ctl0_t control0){
#line 51
  HplAdc12P__HplAdc12__setCtl0(control0);
#line 51
}
#line 51
#line 63
inline static adc12ctl0_t Msp430Adc12ImplP__HplAdc12__getCtl0(void ){
#line 63
  struct __nesc_unnamed4270 __nesc_result;
#line 63

#line 63
  __nesc_result = HplAdc12P__HplAdc12__getCtl0();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 98 "/home/johanna/tinyos-main-test/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t Msp430Adc12ImplP__ADCArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 186 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP__SingleChannel__configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config)
{
  error_t result = ERESERVE;

  if (!config) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 196
          EBUSY;

          {
#line 196
            __nesc_atomic_end(__nesc_atomic); 
#line 196
            return __nesc_temp;
          }
        }
#line 197
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          adc12ctl1_t ctl1 = { 
          .adc12busy = 0, 
          .conseq = 0, 
          .adc12ssel = config->adc12ssel, 
          .adc12div = config->adc12div, 
          .issh = 0, 
          .shp = 1, 
          .shs = 0, 
          .cstartadd = 0 };

          adc12memctl_t memctl = { 
          .inch = config->inch, 
          .sref = config->sref, 
          .eos = 1 };

          adc12ctl0_t ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();

#line 214
          ctl0.msc = 1;
          ctl0.sht0 = config->sht;
          ctl0.sht1 = config->sht;

          Msp430Adc12ImplP__state = Msp430Adc12ImplP__SINGLE_DATA;
          Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
          Msp430Adc12ImplP__HplAdc12__setCtl1(ctl1);
          Msp430Adc12ImplP__HplAdc12__setMCtl(0, memctl);
          Msp430Adc12ImplP__HplAdc12__setIEFlags(0x01);
          result = SUCCESS;
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
  return result;
}

# 191 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__SingleChannel__default__configureSingle(uint8_t client, 
const msp430adc12_channel_config_t *config)
#line 192
{
#line 192
  return FAIL;
}

# 84 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcP__SingleChannel__configureSingle(uint8_t arg_0x411add18, const msp430adc12_channel_config_t * config){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  switch (arg_0x411add18) {
#line 84
    case /*SenseNodeAppC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 84
      __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingle(/*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID, config);
#line 84
      break;
#line 84
    default:
#line 84
      __nesc_result = AdcP__SingleChannel__default__configureSingle(arg_0x411add18, config);
#line 84
      break;
#line 84
    }
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 273 "SenseNodeC.nc"
static inline const msp430adc12_channel_config_t *SenseNodeC__VoltageConfigure__getConfiguration(void )
{
  return &SenseNodeC__config;
}

# 186 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static inline const msp430adc12_channel_config_t *
AdcP__Config__default__getConfiguration(uint8_t client)
{
  return &AdcP__defaultConfig;
}

# 58 "/home/johanna/tinyos-main-test/tos/interfaces/AdcConfigure.nc"
inline static AdcP__Config__adc_config_t AdcP__Config__getConfiguration(uint8_t arg_0x411ba9c8){
#line 58
  struct __nesc_unnamed4268 const *__nesc_result;
#line 58

#line 58
  switch (arg_0x411ba9c8) {
#line 58
    case /*SenseNodeAppC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 58
      __nesc_result = SenseNodeC__VoltageConfigure__getConfiguration();
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = AdcP__Config__default__getConfiguration(arg_0x411ba9c8);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 65 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__configure(uint8_t client)
{
  error_t result = EINVAL;
  const msp430adc12_channel_config_t * config;

#line 69
  config = AdcP__Config__getConfiguration(client);
  if (config->inch != INPUT_CHANNEL_NONE) {
    result = AdcP__SingleChannel__configureSingle(client, config);
    }
#line 72
  return result;
}

# 50 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__setMode(int mode){
#line 50
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(mode);
#line 50
}
#line 50
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__CC2int(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4409 {
#line 57
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 100
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x)
{
  * (volatile uint16_t * )356U = /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__CC2int(x);
}

# 46 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430Adc12ImplP__ControlA1__setControl(msp430_compare_control_t control){
#line 46
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(control);
#line 46
}
#line 46
# 131 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__startTimerA(void )
{

  msp430_compare_control_t ccSetSHI = { 
  .ccifg = 0, .cov = 0, .out = 1, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };
  msp430_compare_control_t ccResetSHI = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };
  msp430_compare_control_t ccRSOutmod = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 7, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };

  Msp430Adc12ImplP__ControlA1__setControl(ccResetSHI);
  Msp430Adc12ImplP__ControlA1__setControl(ccSetSHI);

  Msp430Adc12ImplP__ControlA1__setControl(ccRSOutmod);
  Msp430Adc12ImplP__TimerA__setMode(MSP430TIMER_UP_MODE);
}

# 100 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__startConversion(void )
#line 100
{
  HplAdc12P__ADC12CTL0 |= 0x010;
  HplAdc12P__ADC12CTL0 |= 0x001 + 0x002;
}

# 128 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__startConversion(void ){
#line 128
  HplAdc12P__HplAdc12__startConversion();
#line 128
}
#line 128
# 62 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  adc12memctl_t HplAdc12P__int2adc12memctl(uint8_t x)
#line 62
{
#line 62
  union __nesc_unnamed4410 {
#line 62
    uint8_t f;
#line 62
    adc12memctl_t t;
  } 
#line 62
  c = { .f = x };

#line 62
  return c.t;
}

#line 84
static inline adc12memctl_t HplAdc12P__HplAdc12__getMCtl(uint8_t i)
#line 84
{
  return HplAdc12P__int2adc12memctl(((volatile char *)0x0080)[i]);
}

# 82 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static adc12memctl_t Msp430Adc12ImplP__HplAdc12__getMCtl(uint8_t idx){
#line 82
  struct __nesc_unnamed4269 __nesc_result;
#line 82

#line 82
  __nesc_result = HplAdc12P__HplAdc12__getMCtl(idx);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIORenP__47__IO__makeInput(void )
#line 53
{
  /* atomic removed: atomic calls only */
#line 53
  * (volatile uint8_t * )54U &= ~(0x01 << 7);
}

# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port67__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIORenP__47__IO__makeInput();
#line 78
}
#line 78
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIORenP__47__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )55U |= 0x01 << 7;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port67__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIORenP__47__IO__selectModuleFunc();
#line 92
}
#line 92
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIORenP__46__IO__makeInput(void )
#line 53
{
  /* atomic removed: atomic calls only */
#line 53
  * (volatile uint8_t * )54U &= ~(0x01 << 6);
}

# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port66__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIORenP__46__IO__makeInput();
#line 78
}
#line 78
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIORenP__46__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )55U |= 0x01 << 6;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port66__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIORenP__46__IO__selectModuleFunc();
#line 92
}
#line 92
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIORenP__45__IO__makeInput(void )
#line 53
{
  /* atomic removed: atomic calls only */
#line 53
  * (volatile uint8_t * )54U &= ~(0x01 << 5);
}

# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port65__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIORenP__45__IO__makeInput();
#line 78
}
#line 78
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIORenP__45__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )55U |= 0x01 << 5;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port65__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIORenP__45__IO__selectModuleFunc();
#line 92
}
#line 92
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIORenP__44__IO__makeInput(void )
#line 53
{
  /* atomic removed: atomic calls only */
#line 53
  * (volatile uint8_t * )54U &= ~(0x01 << 4);
}

# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port64__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIORenP__44__IO__makeInput();
#line 78
}
#line 78
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIORenP__44__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )55U |= 0x01 << 4;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port64__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIORenP__44__IO__selectModuleFunc();
#line 92
}
#line 92
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIORenP__43__IO__makeInput(void )
#line 53
{
  /* atomic removed: atomic calls only */
#line 53
  * (volatile uint8_t * )54U &= ~(0x01 << 3);
}

# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port63__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIORenP__43__IO__makeInput();
#line 78
}
#line 78
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIORenP__43__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )55U |= 0x01 << 3;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port63__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIORenP__43__IO__selectModuleFunc();
#line 92
}
#line 92
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIORenP__42__IO__makeInput(void )
#line 53
{
  /* atomic removed: atomic calls only */
#line 53
  * (volatile uint8_t * )54U &= ~(0x01 << 2);
}

# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port62__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIORenP__42__IO__makeInput();
#line 78
}
#line 78
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIORenP__42__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )55U |= 0x01 << 2;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port62__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIORenP__42__IO__selectModuleFunc();
#line 92
}
#line 92
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIORenP__41__IO__makeInput(void )
#line 53
{
  /* atomic removed: atomic calls only */
#line 53
  * (volatile uint8_t * )54U &= ~(0x01 << 1);
}

# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port61__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIORenP__41__IO__makeInput();
#line 78
}
#line 78
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIORenP__41__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )55U |= 0x01 << 1;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port61__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIORenP__41__IO__selectModuleFunc();
#line 92
}
#line 92
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIORenP__40__IO__makeInput(void )
#line 53
{
  /* atomic removed: atomic calls only */
#line 53
  * (volatile uint8_t * )54U &= ~(0x01 << 0);
}

# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port60__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIORenP__40__IO__makeInput();
#line 78
}
#line 78
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIORenP__40__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )55U |= 0x01 << 0;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port60__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIORenP__40__IO__selectModuleFunc();
#line 92
}
#line 92
# 152 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__configureAdcPin(uint8_t inch)
{

  switch (inch) 
    {
      case 0: Msp430Adc12ImplP__Port60__selectModuleFunc();
#line 157
      Msp430Adc12ImplP__Port60__makeInput();
#line 157
      break;
      case 1: Msp430Adc12ImplP__Port61__selectModuleFunc();
#line 158
      Msp430Adc12ImplP__Port61__makeInput();
#line 158
      break;
      case 2: Msp430Adc12ImplP__Port62__selectModuleFunc();
#line 159
      Msp430Adc12ImplP__Port62__makeInput();
#line 159
      break;
      case 3: Msp430Adc12ImplP__Port63__selectModuleFunc();
#line 160
      Msp430Adc12ImplP__Port63__makeInput();
#line 160
      break;
      case 4: Msp430Adc12ImplP__Port64__selectModuleFunc();
#line 161
      Msp430Adc12ImplP__Port64__makeInput();
#line 161
      break;
      case 5: Msp430Adc12ImplP__Port65__selectModuleFunc();
#line 162
      Msp430Adc12ImplP__Port65__makeInput();
#line 162
      break;
      case 6: Msp430Adc12ImplP__Port66__selectModuleFunc();
#line 163
      Msp430Adc12ImplP__Port66__makeInput();
#line 163
      break;
      case 7: Msp430Adc12ImplP__Port67__selectModuleFunc();
#line 164
      Msp430Adc12ImplP__Port67__makeInput();
#line 164
      break;
    }
}

#line 404
static inline error_t Msp430Adc12ImplP__SingleChannel__getData(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 406
    {
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT && !Msp430Adc12ImplP__resultBufferStart) 
            {
              unsigned char __nesc_temp = 
#line 409
              EINVAL;

              {
#line 409
                __nesc_atomic_end(__nesc_atomic); 
#line 409
                return __nesc_temp;
              }
            }
#line 410
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
            {
              unsigned char __nesc_temp = 
#line 411
              EBUSY;

              {
#line 411
                __nesc_atomic_end(__nesc_atomic); 
#line 411
                return __nesc_temp;
              }
            }
#line 412
          Msp430Adc12ImplP__state |= Msp430Adc12ImplP__ADC_BUSY;
          Msp430Adc12ImplP__clientID = id;
          Msp430Adc12ImplP__configureAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(0).inch);
          Msp430Adc12ImplP__HplAdc12__startConversion();
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__USE_TIMERA) {
            Msp430Adc12ImplP__startTimerA();
            }
#line 418
          {
            unsigned char __nesc_temp = 
#line 418
            SUCCESS;

            {
#line 418
              __nesc_atomic_end(__nesc_atomic); 
#line 418
              return __nesc_temp;
            }
          }
        }
    }
#line 422
    __nesc_atomic_end(__nesc_atomic); }
#line 421
  return FAIL;
}

# 180 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__SingleChannel__default__getData(uint8_t client)
{
  return EINVAL;
}

# 189 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t AdcP__SingleChannel__getData(uint8_t arg_0x411add18){
#line 189
  unsigned char __nesc_result;
#line 189

#line 189
  switch (arg_0x411add18) {
#line 189
    case /*SenseNodeAppC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 189
      __nesc_result = Msp430Adc12ImplP__SingleChannel__getData(/*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 189
      break;
#line 189
    default:
#line 189
      __nesc_result = AdcP__SingleChannel__default__getData(arg_0x411add18);
#line 189
      break;
#line 189
    }
#line 189

#line 189
  return __nesc_result;
#line 189
}
#line 189
# 66 "/home/johanna/tinyos-main-test/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 57 "/home/johanna/tinyos-main-test/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 85
        if (/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 173 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x412c8430){
#line 65
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x412c8430);
#line 65
}
#line 65
# 45 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
inline static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(1U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 66 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__set(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )29U |= 0x01 << 5;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__set();
#line 48
}
#line 48
# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set();
}

# 40 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__set(void ){
#line 40
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set();
#line 40
}
#line 40
# 204 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startVReg(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 207
            FAIL;

            {
#line 207
              __nesc_atomic_end(__nesc_atomic); 
#line 207
              return __nesc_temp;
            }
          }
        }
#line 209
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupTimer__start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startVReg(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420ControlP__CC2420Power__startVReg();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 170 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__ClientResource__default__granted(uint8_t client)
#line 170
{
}

# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static void Msp430RefVoltArbiterImplP__ClientResource__granted(uint8_t arg_0x413321e0){
#line 102
  switch (arg_0x413321e0) {
#line 102
    case /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 102
      AdcP__ResourceRead__granted(/*SenseNodeAppC.AdcReadClientC*/AdcReadClientC__0__CLIENT);
#line 102
      break;
#line 102
    default:
#line 102
      Msp430RefVoltArbiterImplP__ClientResource__default__granted(arg_0x413321e0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 171 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__request(uint8_t client)
{
  return FAIL;
}

# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t Msp430RefVoltArbiterImplP__AdcResource__request(uint8_t arg_0x41332c98){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x41332c98) {
#line 88
    case /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 88
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(/*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = Msp430RefVoltArbiterImplP__AdcResource__default__request(arg_0x41332c98);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 180 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__release(uint8_t client)
#line 180
{
#line 180
  return FAIL;
}

# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t Msp430RefVoltArbiterImplP__AdcResource__release(uint8_t arg_0x41332c98){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x41332c98) {
#line 120
    case /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 120
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(/*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = Msp430RefVoltArbiterImplP__AdcResource__default__release(arg_0x41332c98);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 83 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__start(void )
#line 83
{
  return Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE);
}

# 104 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_2_5V__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 79 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__start(void )
#line 79
{
  return Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE);
}

# 104 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_1_5V__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 58 "/home/johanna/tinyos-main-test/tos/interfaces/AdcConfigure.nc"
inline static /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__adc_config_t /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__getConfiguration(void ){
#line 58
  struct __nesc_unnamed4268 const *__nesc_result;
#line 58

#line 58
  __nesc_result = SenseNodeC__VoltageConfigure__getConfiguration();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 47 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*SenseNodeAppC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration(void )
{
  return /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__getConfiguration();
}

# 182 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline const msp430adc12_channel_config_t *
Msp430RefVoltArbiterImplP__Config__default__getConfiguration(uint8_t client)
{
  return &Msp430RefVoltArbiterImplP__defaultConfig;
}

# 58 "/home/johanna/tinyos-main-test/tos/interfaces/AdcConfigure.nc"
inline static Msp430RefVoltArbiterImplP__Config__adc_config_t Msp430RefVoltArbiterImplP__Config__getConfiguration(uint8_t arg_0x4132f7f8){
#line 58
  struct __nesc_unnamed4268 const *__nesc_result;
#line 58

#line 58
  switch (arg_0x4132f7f8) {
#line 58
    case /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 58
      __nesc_result = /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration();
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = Msp430RefVoltArbiterImplP__Config__default__getConfiguration(arg_0x4132f7f8);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 71 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__AdcResource__granted(uint8_t client)
{
  const msp430adc12_channel_config_t *settings = Msp430RefVoltArbiterImplP__Config__getConfiguration(client);

#line 74
  if (settings->sref == REFERENCE_VREFplus_AVss || 
  settings->sref == REFERENCE_VREFplus_VREFnegterm) {
      error_t started;

#line 77
      if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {



          Msp430RefVoltArbiterImplP__AdcResource__release(client);
          Msp430RefVoltArbiterImplP__AdcResource__request(client);
          return;
        }
      Msp430RefVoltArbiterImplP__syncOwner = client;
      if (settings->ref2_5v == REFVOLT_LEVEL_1_5) {
          Msp430RefVoltArbiterImplP__ref2_5v = FALSE;
          started = Msp430RefVoltArbiterImplP__RefVolt_1_5V__start();
        }
      else {
          Msp430RefVoltArbiterImplP__ref2_5v = TRUE;
          started = Msp430RefVoltArbiterImplP__RefVolt_2_5V__start();
        }
      if (started != SUCCESS) {
          Msp430RefVoltArbiterImplP__syncOwner = Msp430RefVoltArbiterImplP__NO_OWNER;
          Msp430RefVoltArbiterImplP__AdcResource__release(client);
          Msp430RefVoltArbiterImplP__AdcResource__request(client);
        }
    }
  else {
#line 100
    Msp430RefVoltArbiterImplP__ClientResource__granted(client);
    }
}

# 165 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 165
{
}

# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x412ccc78){
#line 102
  switch (arg_0x412ccc78) {
#line 102
    case /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 102
      Msp430RefVoltArbiterImplP__AdcResource__granted(/*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x412ccc78);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 171 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x412c8430){
#line 59
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x412c8430);
#line 59
}
#line 59
# 155 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
}




static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 53 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x412c9770){
#line 53
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x412c9770);
#line 53
}
#line 53
# 97 "/home/johanna/tinyos-main-test/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 169 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
inline static bool Msp430RefVoltGeneratorP__SwitchOffSettleTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(4U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 78
inline static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(4U);
#line 78
}
#line 78
inline static void Msp430RefVoltGeneratorP__SwitchOffTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(3U);
#line 78
}
#line 78
# 172 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP__Read__default__readDone(uint8_t client, error_t result, uint16_t val)
#line 172
{
}

# 63 "/home/johanna/tinyos-main-test/tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0x411c0228, error_t result, AdcP__Read__val_t val){
#line 63
  switch (arg_0x411c0228) {
#line 63
    case /*SenseNodeAppC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 63
      SenseNodeC__VoltageRead__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      AdcP__Read__default__readDone(arg_0x411c0228, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 170 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__ResourceRead__default__release(uint8_t client)
#line 170
{
#line 170
  return FAIL;
}

# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t AdcP__ResourceRead__release(uint8_t arg_0x411bb1e0){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x411bb1e0) {
#line 120
    case /*SenseNodeAppC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 120
      __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__release(/*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = AdcP__ResourceRead__default__release(arg_0x411bb1e0);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 136 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP__readDone__runTask(void )
{
  AdcP__ResourceRead__release(AdcP__owner);
  AdcP__Read__readDone(AdcP__owner, SUCCESS, AdcP__value);
}

# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t PrintfP__retrySend__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PrintfP__retrySend);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
inline static error_t PrintfP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 114 "/home/johanna/tinyos-main-test/tos/lib/printf/PrintfP.nc"
static inline void PrintfP__retrySend__runTask(void )
#line 114
{
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 62 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/usci/Z1SerialP.nc"
static inline void Z1SerialP__Resource__granted(void )
#line 62
{
}

# 217 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id)
#line 217
{
}

# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__granted(uint8_t arg_0x4109e2b8){
#line 102
  switch (arg_0x4109e2b8) {
#line 102
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 102
      Z1SerialP__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__default__granted(arg_0x4109e2b8);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 101 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__granted(uint8_t id)
#line 101
{
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__granted(id);
}

# 202 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(uint8_t arg_0x40c1c540){
#line 102
  switch (arg_0x40c1c540) {
#line 102
    case /*PlatformSerialC.UartC.UsciC*/Msp430UsciA0C__0__CLIENT_ID:
#line 102
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__granted(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(arg_0x40c1c540);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x40c1a430){
#line 59
  switch (arg_0x40c1a430) {
#line 59
    case /*PlatformSerialC.UartC.UsciC*/Msp430UsciA0C__0__CLIENT_ID:
#line 59
      /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(arg_0x40c1a430);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 190 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;
      /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
  /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
}

# 64 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/usci/Z1SerialP.nc"
static inline msp430_uart_union_config_t *Z1SerialP__Msp430UartConfigure__getConfig(void )
#line 64
{
  return &Z1SerialP__msp430_uart_z1_config;
}

# 213 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id)
#line 213
{
  return (msp430_uart_union_config_t *)&msp430_uart_default_config;
}

# 44 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartConfigure.nc"
inline static msp430_uart_union_config_t */*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(uint8_t arg_0x4109a310){
#line 44
  union __nesc_unnamed4284 *__nesc_result;
#line 44

#line 44
  switch (arg_0x4109a310) {
#line 44
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 44
      __nesc_result = Z1SerialP__Msp430UartConfigure__getConfig();
#line 44
      break;
#line 44
    default:
#line 44
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(arg_0x4109a310);
#line 44
      break;
#line 44
    }
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 133 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA0P.nc"
static inline void HplMsp430UsciA0P__Usci__resetUsci(bool reset)
#line 133
{
  if (reset) {
    HplMsp430UsciA0P__UCA0CTL1 |= 0x01;
    }
  else {
#line 137
    HplMsp430UsciA0P__UCA0CTL1 &= ~0x01;
    }
}

#line 116
static inline void HplMsp430UsciA0P__Usci__setUmctl(uint8_t control)
#line 116
{
  UCA0MCTL = control;
}

#line 105
static inline void HplMsp430UsciA0P__Usci__setUbr(uint16_t control)
#line 105
{
  /* atomic removed: atomic calls only */
#line 106
  {
    UCA0BR0 = control & 0x00FF;
    UCA0BR1 = (control >> 8) & 0x00FF;
  }
}

#line 311
static inline void HplMsp430UsciA0P__configUart(msp430_uart_union_config_t *config)
#line 311
{
  HplMsp430UsciA0P__UCA0CTL1 = config->uartRegisters.uctl1 | 0x01;
  HplMsp430UsciA0P__UCA0CTL0 = config->uartRegisters.uctl0;
  HplMsp430UsciA0P__Usci__setUbr(config->uartRegisters.ubr);
  HplMsp430UsciA0P__Usci__setUmctl(config->uartRegisters.umctl);
}

# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIORenP__21__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )27U |= 0x01 << 5;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciA0P__URXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIORenP__21__IO__selectModuleFunc();
#line 92
}
#line 92
# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIORenP__20__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )27U |= 0x01 << 4;
}

# 92 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciA0P__UTXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIORenP__20__IO__selectModuleFunc();
#line 92
}
#line 92
# 297 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA0P.nc"
static inline void HplMsp430UsciA0P__Usci__enableUart(void )
#line 297
{
  /* atomic removed: atomic calls only */
#line 298
  {
    HplMsp430UsciA0P__UTXD__selectModuleFunc();
    HplMsp430UsciA0P__URXD__selectModuleFunc();
  }
}

#line 230
static inline void HplMsp430UsciA0P__Usci__clrIntr(void )
#line 230
{
  HplMsp430UsciA0P__IFG2 &= ~(0x02 | 0x01);
}









static inline void HplMsp430UsciA0P__Usci__disableIntr(void )
#line 242
{
  HplMsp430UsciA0P__IE2 &= ~(0x02 | 0x01);
}

#line 318
static inline void HplMsp430UsciA0P__Usci__setModeUart(msp430_uart_union_config_t *config)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      HplMsp430UsciA0P__Usci__disableIntr();
      HplMsp430UsciA0P__Usci__clrIntr();
      HplMsp430UsciA0P__Usci__resetUsci(TRUE);
      HplMsp430UsciA0P__Usci__enableUart();
      HplMsp430UsciA0P__configUart(config);
      HplMsp430UsciA0P__Usci__resetUsci(FALSE);
    }
#line 326
    __nesc_atomic_end(__nesc_atomic); }
}

# 162 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__setModeUart(msp430_uart_union_config_t *config){
#line 162
  HplMsp430UsciA0P__Usci__setModeUart(config);
#line 162
}
#line 162
# 260 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA0P.nc"
static inline void HplMsp430UsciA0P__Usci__enableIntr(void )
#line 260
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 261
    {
      HplMsp430UsciA0P__IFG2 &= ~(0x02 | 0x01);
      HplMsp430UsciA0P__IE2 |= 0x02 | 0x01;
    }
#line 264
    __nesc_atomic_end(__nesc_atomic); }
}

# 121 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__enableIntr(void ){
#line 121
  HplMsp430UsciA0P__Usci__enableIntr();
#line 121
}
#line 121
# 110 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  PrintfP__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/home/johanna/tinyos-main-test/tos/system/AMQueueEntryP.nc"
static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(m, err);
}

# 215 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(uint8_t arg_0x407f98a8, message_t * msg, error_t error){
#line 100
  switch (arg_0x407f98a8) {
#line 100
    case 0U:
#line 100
      /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(arg_0x407f98a8, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 163 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, err);
}

#line 189
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 1) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current, msg, err);
    }
  else {
      ;
    }
}

# 110 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x40f7fd90, message_t * msg, error_t error){
#line 110
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(arg_0x40f7fd90, msg, error);
#line 110
}
#line 110
# 101 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x41058760, message_t * msg, error_t error){
#line 100
  switch (arg_0x41058760) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x41058760, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

# 65 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
    }
}

# 122 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 122
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 124
  return __nesc_ntoh_uint8(header->length.nxdata);
}

# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 212 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 109 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x40f7c768, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x40f7c768, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x41058120, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x41058120) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x41058120, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x410562a0, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x410562a0) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x410562a0, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 275 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 49 "/home/johanna/tinyos-main-test/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__SerialControl__stopDone(error_t error)
#line 49
{
}

# 138 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  SerialStartP__SerialControl__stopDone(error);
#line 138
}
#line 138
# 208 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIORenP__21__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )27U &= ~(0x01 << 5);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciA0P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIORenP__21__IO__selectIOFunc();
#line 99
}
#line 99
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIORenP__20__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )27U &= ~(0x01 << 4);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciA0P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIORenP__20__IO__selectIOFunc();
#line 99
}
#line 99
# 304 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA0P.nc"
static inline void HplMsp430UsciA0P__Usci__disableUart(void )
#line 304
{
  /* atomic removed: atomic calls only */
#line 305
  {
    HplMsp430UsciA0P__UTXD__selectIOFunc();
    HplMsp430UsciA0P__URXD__selectIOFunc();
  }
}

# 156 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__disableUart(void ){
#line 156
  HplMsp430UsciA0P__Usci__disableUart();
#line 156
}
#line 156
#line 118
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__disableIntr(void ){
#line 118
  HplMsp430UsciA0P__Usci__disableIntr();
#line 118
}
#line 118
#line 89
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__resetUsci(bool reset){
#line 89
  HplMsp430UsciA0P__Usci__resetUsci(reset);
#line 89
}
#line 89
# 95 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 95
{
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__resetUsci(TRUE);
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__disableIntr();
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__disableUart();
}

# 218 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x40c1a430){
#line 65
  switch (arg_0x40c1a430) {
#line 65
    case /*PlatformSerialC.UartC.UsciC*/Msp430UsciA0C__0__CLIENT_ID:
#line 65
      /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(arg_0x40c1a430);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead != /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
        uint8_t id = /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead;

#line 72
        /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead = /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[/*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead];
        if (/*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead == /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail = /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
          }
#line 75
        /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[id] = /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead == /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY && /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId == id) {
          if (/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty() == FALSE) {
              /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue();
              /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__NO_RES;
              /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING;
              /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask();
              /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id;
              /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
              /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
              /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 212 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__default__release(uint8_t id)
#line 212
{
#line 212
  return FAIL;
}

# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__release(uint8_t arg_0x4109b840){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x4109b840) {
#line 120
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(/*PlatformSerialC.UartC.UsciC*/Msp430UsciA0C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__default__release(arg_0x4109b840);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 209 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__default__isOwner(uint8_t id)
#line 209
{
#line 209
  return FAIL;
}

# 128 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static bool /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__isOwner(uint8_t arg_0x4109b840){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x4109b840) {
#line 128
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(/*PlatformSerialC.UartC.UsciC*/Msp430UsciA0C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__default__isOwner(arg_0x4109b840);
#line 128
      break;
#line 128
    }
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 80 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__release(uint8_t id)
#line 80
{
  if (/*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__isOwner(id) == FALSE) {
    return FAIL;
    }
#line 83
  if (/*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_buf || /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf) {
    return EBUSY;
    }
#line 85
  return /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__release(id);
}

# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t Z1SerialP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__release(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 58 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/usci/Z1SerialP.nc"
static inline error_t Z1SerialP__StdControl__stop(void )
#line 58
{
  Z1SerialP__Resource__release();
  return SUCCESS;
}

# 105 "/home/johanna/tinyos-main-test/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = Z1SerialP__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 48 "/home/johanna/tinyos-main-test/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__SerialControl__startDone(error_t error)
#line 48
{
}

# 113 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  SerialStartP__SerialControl__startDone(error);
#line 113
}
#line 113
# 133 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId == /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id) {
          if (/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING) {
              /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_IMM_GRANTING) {
                /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;
                /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

#line 213
static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__immediateRequested(void )
#line 213
{
  /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
}

# 81 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__immediateRequested();
#line 81
}
#line 81
# 206 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__immediateRequested(uint8_t arg_0x40c1b010){
#line 61
    /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(arg_0x40c1b010);
#line 61
}
#line 61
# 93 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__immediateRequested(/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    {
      if (/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
          /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_IMM_GRANTING;
          /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 100
          FAIL;

          {
#line 100
            __nesc_atomic_end(__nesc_atomic); 
#line 100
            return __nesc_temp;
          }
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
#line 102
  /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId == id) {
      /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
      return SUCCESS;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
#line 107
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

# 211 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__default__immediateRequest(uint8_t id)
#line 211
{
#line 211
  return FAIL;
}

# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__immediateRequest(uint8_t arg_0x4109b840){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x4109b840) {
#line 97
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(/*PlatformSerialC.UartC.UsciC*/Msp430UsciA0C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__default__immediateRequest(arg_0x4109b840);
#line 97
      break;
#line 97
    }
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 68 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id)
#line 68
{
  return /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__immediateRequest(id);
}

# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t Z1SerialP__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__Resource__immediateRequest(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 55 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/usci/Z1SerialP.nc"
static inline error_t Z1SerialP__StdControl__start(void )
#line 55
{
  return Z1SerialP__Resource__immediateRequest();
}

# 95 "/home/johanna/tinyos-main-test/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = Z1SerialP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 56 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/home/johanna/tinyos-main-test/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 559
static inline void SerialP__RunTx__runTask(void )
#line 559
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 576
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 585
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 589
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 598
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 605
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 605
        goInactive = SerialP__offPending;
#line 605
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 607
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 607
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 613
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 613
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 616
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 618
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 625
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 627
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 628
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 632
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 646
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 649
            __nesc_atomic_end(__nesc_atomic); 
#line 649
            return;
          }
        }
    }
#line 652
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 655
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 659
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 661
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 661
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 48 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__send(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID, buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 126 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 169
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void )
#line 169
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg, FAIL);
}

# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TinyosNetworkP__grantTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TinyosNetworkP__grantTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 229 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id)
#line 229
{
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      CC2420TinyosNetworkP__grantTask__postTask();
    }
  CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
  return SUCCESS;
}

#line 253
static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client)
#line 253
{
  CC2420TinyosNetworkP__Resource__release(client);
}

# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static void CC2420TinyosNetworkP__Resource__granted(uint8_t arg_0x40ec0780){
#line 102
  switch (arg_0x40ec0780) {
#line 102
    case CC2420ActiveMessageC__CC2420_AM_SEND_ID:
#line 102
      CC2420ActiveMessageP__RadioResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420TinyosNetworkP__Resource__default__granted(arg_0x40ec0780);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 68 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 69
    {
      if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
          uint8_t id = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead;

#line 72
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead];
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
            }
#line 75
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
          {
            unsigned char __nesc_temp = 
#line 76
            id;

            {
#line 76
              __nesc_atomic_end(__nesc_atomic); 
#line 76
              return __nesc_temp;
            }
          }
        }
#line 78
      {
        unsigned char __nesc_temp = 
#line 78
        /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

        {
#line 78
          __nesc_atomic_end(__nesc_atomic); 
#line 78
          return __nesc_temp;
        }
      }
    }
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
#line 53
inline static bool CC2420TinyosNetworkP__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 180 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__grantTask__runTask(void )
#line 180
{


  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && !CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__Queue__dequeue();

          if (CC2420TinyosNetworkP__resource_owner != CC2420TinyosNetworkP__OWNER_NONE) {
              CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
            }
        }
    }
  else 
#line 191
    {
      if (CC2420TinyosNetworkP__next_owner != CC2420TinyosNetworkP__resource_owner) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__next_owner;
          CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
        }
    }
}

# 291 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
#line 291
{
}

# 59 "/home/johanna/tinyos-main-test/tos/interfaces/SendNotifier.nc"
inline static void CC2420ActiveMessageP__SendNotifier__aboutToSend(am_id_t arg_0x40f09a98, am_addr_t dest, message_t * msg){
#line 59
    CC2420ActiveMessageP__SendNotifier__default__aboutToSend(arg_0x40f09a98, dest, msg);
#line 59
}
#line 59
# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static error_t CC2420ActiveMessageP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 128 "/home/johanna/tinyos-main-test/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId)
#line 128
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    *CC2420PacketP__getNetwork(p_msg) = networkId;
#line 131
    __nesc_atomic_end(__nesc_atomic); }
}

# 77 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t * p_msg, uint8_t networkId){
#line 77
  CC2420PacketP__CC2420Packet__setNetwork(p_msg, networkId);
#line 77
}
#line 77
# 81 "/home/johanna/tinyos-main-test/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline int CC2420PacketP__getAddressLength(int type)
#line 81
{
  switch (type) {
      case IEEE154_ADDR_SHORT: return 2;
      case IEEE154_ADDR_EXT: return 8;
      case IEEE154_ADDR_NONE: return 0;
      default: return -100;
    }
}

# 297 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

#line 327
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 547 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca)
#line 547
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 548
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 550
            ECANCEL;

            {
#line 550
              __nesc_atomic_end(__nesc_atomic); 
#line 550
              return __nesc_temp;
            }
          }
        }
#line 553
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 554
            FAIL;

            {
#line 554
              __nesc_atomic_end(__nesc_atomic); 
#line 554
              return __nesc_temp;
            }
          }
        }


      CC2420TransmitP__m_state = CC2420TransmitP__S_LOAD;
      CC2420TransmitP__m_cca = cca;
      CC2420TransmitP__m_msg = p_msg;
      CC2420TransmitP__totalCcaChecks = 0;
    }
#line 564
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
      CC2420TransmitP__loadTXFIFO();
    }

  return SUCCESS;
}

#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca)
#line 192
{
  return CC2420TransmitP__send(p_msg, useCca);
}

# 51 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TransmitP__Send__send(p_msg, useCca);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 301 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg)
#line 302
{
}

# 95 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestCca(am_id_t arg_0x40f08148, message_t * msg){
#line 95
    CC2420ActiveMessageP__RadioBackoff__default__requestCca(arg_0x40f08148, msg);
#line 95
}
#line 95
# 250 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg)
#line 250
{

  CC2420ActiveMessageP__RadioBackoff__requestCca(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 95 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg){
#line 95
  CC2420ActiveMessageP__SubBackoff__requestCca(msg);
#line 95
}
#line 95
# 111 "/home/johanna/tinyos-main-test/tos/system/StateImplP.nc"
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP__state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
inline static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(1U, reqState);
#line 51
}
#line 51
#line 66
inline static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = StateImplP__State__isState(1U, myState);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
#line 42
inline static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 122 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len)
#line 122
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 124
  cc2420_header_t *header = CC2420CsmaP__CC2420PacketBody__getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP__CC2420PacketBody__getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    {
      if (!CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 129
            FAIL;

            {
#line 129
              __nesc_atomic_end(__nesc_atomic); 
#line 129
              return __nesc_temp;
            }
          }
        }
#line 132
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_TRANSMITTING);
      CC2420CsmaP__m_msg = p_msg;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }








  (__nesc_temp42 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (((1 << IEEE154_FCF_ACK_REQ) | (
  0x3 << IEEE154_FCF_SRC_ADDR_MODE)) | (
  0x3 << IEEE154_FCF_DEST_ADDR_MODE))));

  (__nesc_temp43 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN))));

  __nesc_hton_int8(metadata->ack.nxdata, FALSE);
  __nesc_hton_uint8(metadata->rssi.nxdata, 0);
  __nesc_hton_uint8(metadata->lqi.nxdata, 0);

  __nesc_hton_uint32(metadata->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP__ccaOn = TRUE;
  CC2420CsmaP__RadioBackoff__requestCca(CC2420CsmaP__m_msg);

  CC2420CsmaP__CC2420Transmit__send(CC2420CsmaP__m_msg, CC2420CsmaP__ccaOn);
  return SUCCESS;
}

# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static error_t UniqueSendP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420CsmaP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 45 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
inline static error_t UniqueSendP__State__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(2U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 75 "/home/johanna/tinyos-main-test/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP__State__requestState(UniqueSendP__S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP__CC2420PacketBody__getHeader(msg)->dsn.nxdata, UniqueSendP__localSendId++);

      if ((error = UniqueSendP__SubSend__send(msg, len)) != SUCCESS) {
          UniqueSendP__State__toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static error_t CC2420TinyosNetworkP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = UniqueSendP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 70 "/home/johanna/tinyos-main-test/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__send(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID, txBuf, rxBuf, len);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 45 "/home/johanna/tinyos-main-test/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiByte__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 126 "/home/johanna/tinyos-main-test/tos/system/StateImplP.nc"
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 214 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

# 82 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 229 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__enableRxIntr(void )
#line 229
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 230
    {
      HplMsp430UsciB0P__IFG2 &= ~0x04;
      HplMsp430UsciB0P__IE2 |= 0x04;
    }
#line 233
    __nesc_atomic_end(__nesc_atomic); }
}

# 93 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__enableRxIntr(void ){
#line 93
  HplMsp430UsciB0P__Usci__enableRxIntr();
#line 93
}
#line 93
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 65 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
    }
}

# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 194 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP__Packet__payloadLength(message_t *msg)
#line 194
{
  return __nesc_ntoh_leuint8(CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg)->length.nxdata) - CC2420_SIZE;
}

# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ActiveMessageP__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 173 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void )
#line 173
{
  return 28;
}

# 112 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static uint8_t UniqueSendP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420CsmaP__Send__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 95 "/home/johanna/tinyos-main-test/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void )
#line 95
{
  return UniqueSendP__SubSend__maxPayloadLength();
}

# 112 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = UniqueSendP__Send__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 90 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void )
#line 90
{
  return CC2420TinyosNetworkP__SubSend__maxPayloadLength();
}

# 112 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 202 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void )
#line 202
{
  return CC2420ActiveMessageP__SubSend__maxPayloadLength();
}

# 310 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void )
#line 310
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 311
    {
      unsigned int __nesc_temp = 
#line 311
      CC2420ControlP__m_pan;

      {
#line 311
        __nesc_atomic_end(__nesc_atomic); 
#line 311
        return __nesc_temp;
      }
    }
#line 313
    __nesc_atomic_end(__nesc_atomic); }
}

# 77 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void ){
#line 77
  unsigned int __nesc_result;
#line 77

#line 77
  __nesc_result = CC2420ControlP__CC2420Config__getPanAddr();
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 215 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id)
#line 215
{
  if (CC2420TinyosNetworkP__resource_owner == id) {
#line 216
    return EALREADY;
    }
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = id;
          return SUCCESS;
        }
      return FAIL;
    }
  else 
#line 224
    {
      CC2420TinyosNetworkP__resource_owner = id;
      return SUCCESS;
    }
}

# 97 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420TinyosNetworkP__Resource__immediateRequest(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 64 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY || /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 83
    {
      if (!/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = id;
            }
          else {
#line 88
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail] = id;
            }
#line 89
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = id;
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        EBUSY;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 79 "/home/johanna/tinyos-main-test/tos/interfaces/ResourceQueue.nc"
inline static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 199 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id)
#line 199
{

  CC2420TinyosNetworkP__grantTask__postTask();

  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      return CC2420TinyosNetworkP__Queue__enqueue(id);
    }
  else 
#line 205
    {
      if (id == CC2420TinyosNetworkP__resource_owner) {
          return EALREADY;
        }
      else 
#line 208
        {
          CC2420TinyosNetworkP__next_owner = id;
          return SUCCESS;
        }
    }
}

# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420TinyosNetworkP__Resource__request(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 103 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/johanna/tinyos-main-test/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 65 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
}

# 73 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 102 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__stop();
}

# 73 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 71 "/home/johanna/tinyos-main-test/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get();
}

# 109 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/johanna/tinyos-main-test/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 100 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP__ClientResource__request(uint8_t client)
{
  return Msp430RefVoltArbiterImplP__AdcResource__request(client);
}

# 168 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__ResourceRead__default__request(uint8_t client)
#line 168
{
#line 168
  return FAIL;
}

# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t AdcP__ResourceRead__request(uint8_t arg_0x411bb1e0){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x411bb1e0) {
#line 88
    case /*SenseNodeAppC.AdcReadClientC*/AdcReadClientC__0__CLIENT:
#line 88
      __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__request(/*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = AdcP__ResourceRead__default__request(arg_0x411bb1e0);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 75 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static inline error_t AdcP__Read__read(uint8_t client)
{
  return AdcP__ResourceRead__request(client);
}

# 55 "/home/johanna/tinyos-main-test/tos/interfaces/Read.nc"
inline static error_t SenseNodeC__VoltageRead__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = AdcP__Read__read(/*SenseNodeAppC.AdcReadClientC*/AdcReadClientC__0__CLIENT);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Counter.nc"
inline static /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Counter__size_type /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Counter__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli16C.Transform*/TransformCounterC__2__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static inline /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__getNow(void )
{
  return /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Counter__get();
}

#line 147
static inline void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__startAt(/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type t0, /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_t0 = t0;
      /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_dt = dt;
      /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

static inline void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__start(/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type dt)
{
  /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__startAt(/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__getNow(), dt);
}

# 66 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static void SenseNodeC__IdleAlarm__start(SenseNodeC__IdleAlarm__size_type dt){
#line 66
  /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Alarm__start(dt);
#line 66
}
#line 66
# 124 "SenseNodeC.nc"
static inline void SenseNodeC__MilliTimer__fired(void )
#line 124
{
  SenseNodeC__receive_count++;


  if (SenseNodeC__receive_count == 2) {
      SenseNodeC__IdleAlarm__start(SenseNodeC__listen_interval);
      SenseNodeC__listen_flag = TRUE;
      SenseNodeC__receive_count = 0;
    }


  printf("MilliTimer fired.\n");
  printfflush();


  SenseNodeC__VoltageRead__read();
}

# 112 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error_t error)
{
  if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {


      Msp430RefVoltArbiterImplP__ClientResource__granted(Msp430RefVoltArbiterImplP__syncOwner);
    }
}

# 113 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(error_t error){
#line 113
  Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error);
#line 113
}
#line 113
# 103 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error_t error)
{
  if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {


      Msp430RefVoltArbiterImplP__ClientResource__granted(Msp430RefVoltArbiterImplP__syncOwner);
    }
}

# 113 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(error_t error){
#line 113
  Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error);
#line 113
}
#line 113
# 188 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP__SwitchOnTimer__fired(void )
#line 188
{
  switch (Msp430RefVoltGeneratorP__m_state) {
      case Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING: 
        Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE;
      Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(SUCCESS);
      break;

      case Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING: 
        Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE;
      Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(SUCCESS);
      break;

      default: 
        return;
    }
}

# 159 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73
inline static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 73
}
#line 73
# 161 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error_t error)
{
}

# 138 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(error_t error){
#line 138
  Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error);
#line 138
}
#line 138
# 157 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error_t error)
{
}

# 138 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(error_t error){
#line 138
  Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error);
#line 138
}
#line 138
# 205 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP__SwitchOffTimer__fired(void )
#line 205
{
  switch (Msp430RefVoltGeneratorP__m_state) {
      case Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING: 
        if (Msp430RefVoltGeneratorP__switchOff() == SUCCESS) {
            Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__GENERATOR_OFF;
            Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(SUCCESS);
          }
        else {
            Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(20);
          }
      break;

      case Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING: 
        if (Msp430RefVoltGeneratorP__switchOff() == SUCCESS) {
            Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__GENERATOR_OFF;
            Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(SUCCESS);

            Msp430RefVoltGeneratorP__SwitchOffSettleTimer__startOneShot(2048);
          }
        else 
#line 223
          {
            Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(20);
          }
      break;

      default: 
        break;
    }
}

static inline void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__fired(void )
#line 233
{
}

# 204 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x40e059f0){
#line 83
  switch (arg_0x40e059f0) {
#line 83
    case 1U:
#line 83
      SenseNodeC__MilliTimer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      Msp430RefVoltGeneratorP__SwitchOnTimer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      Msp430RefVoltGeneratorP__SwitchOffTimer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      Msp430RefVoltGeneratorP__SwitchOffSettleTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x40e059f0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 139 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type __nesc_temp = 
#line 93
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;

      {
#line 93
        __nesc_atomic_end(__nesc_atomic); 
#line 93
        return __nesc_temp;
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/home/johanna/tinyos-main-test/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/home/johanna/tinyos-main-test/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 138 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void *CC2420TinyosNetworkP__BareSend__getPayload(message_t *msg, uint8_t len)
#line 138
{

  cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

#line 141
  return hdr;
}

#line 241
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 241
{
  return msg;
}

# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__BareReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__BareReceive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 283 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 283
{
  return msg;
}

# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP__Snoop__receive(am_id_t arg_0x40f0a088, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = CC2420ActiveMessageP__Snoop__default__receive(arg_0x40f0a088, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 64 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
inline static void SenseNodeC__MilliTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 64
}
#line 64
# 50 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__toggle(void )
#line 50
{
#line 50
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 50
    * (volatile uint8_t * )49U ^= 0x01 << 4;
#line 50
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle(void ){
#line 58
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__toggle();
#line 58
}
#line 58
# 50 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle();
}

# 42 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle();
#line 42
}
#line 42
# 84 "/home/johanna/tinyos-main-test/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 84
{
  LedsP__Led0__toggle();
  ;
#line 86
  ;
}

# 67 "/home/johanna/tinyos-main-test/tos/interfaces/Leds.nc"
inline static void SenseNodeC__Leds__led0Toggle(void ){
#line 67
  LedsP__Leds__led0Toggle();
#line 67
}
#line 67
# 240 "SenseNodeC.nc"
static inline message_t *SenseNodeC__Receive__receive(message_t *bufPtr, 
void *payload, uint8_t len)
#line 241
{

  if (len != sizeof(radio_count_msg_t )) {
#line 243
      return bufPtr;
    }
  else 
    {
      radio_count_msg_t *rcm = (radio_count_msg_t *)payload;

      SenseNodeC__Leds__led0Toggle();
      if (SenseNodeC__sleep_interval != __nesc_ntoh_uint16(rcm->temp.nxdata)) {
          SenseNodeC__sleep_interval = __nesc_ntoh_uint16(rcm->temp.nxdata);
          SenseNodeC__MilliTimer__startPeriodic(SenseNodeC__sleep_interval);
        }

      printf("Message Received.\n");
      printf("SleepInterval: %i\n", SenseNodeC__sleep_interval);
      printf("Node Id %i\n", __nesc_ntoh_uint16(rcm->node_id.nxdata));
      printfflush();
    }
  return bufPtr;
}

# 279 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 279
{
  return msg;
}

# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP__Receive__receive(am_id_t arg_0x40f0b9d0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x40f0b9d0) {
#line 78
    case 6:
#line 78
      __nesc_result = SenseNodeC__Receive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = CC2420ActiveMessageP__Receive__default__receive(arg_0x40f0b9d0, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 72 "/home/johanna/tinyos-main-test/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 72
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/home/johanna/tinyos-main-test/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned int __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 135 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void )
#line 135
{
  return CC2420ActiveMessageP__ActiveMessageAddress__amAddress();
}

#line 159
static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg)
#line 159
{
  return CC2420ActiveMessageP__AMPacket__destination(amsg) == CC2420ActiveMessageP__AMPacket__address() || 
  CC2420ActiveMessageP__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

#line 219
static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 219
{

  if (CC2420ActiveMessageP__AMPacket__isForMe(msg)) {
      return CC2420ActiveMessageP__Receive__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
  else {
      return CC2420ActiveMessageP__Snoop__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
}

# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__ActiveReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ActiveMessageP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 119 "/home/johanna/tinyos-main-test/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg)
#line 119
{



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      unsigned char __nesc_temp = 
#line 124
      *CC2420PacketP__getNetwork(p_msg);

      {
#line 124
        __nesc_atomic_end(__nesc_atomic); 
#line 124
        return __nesc_temp;
      }
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }
}

# 75 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t * p_msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420PacketP__CC2420Packet__getNetwork(p_msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 157 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 157
{
  uint8_t network = CC2420TinyosNetworkP__CC2420Packet__getNetwork(msg);

  if (! __nesc_ntoh_int8(CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(msg)->crc.nxdata)) {
      return msg;
    }

  if (network == 0x3f) {
      return CC2420TinyosNetworkP__ActiveReceive__receive(msg, payload, len);
    }
  else 
#line 166
    {
      return CC2420TinyosNetworkP__BareReceive__receive(msg, 
      CC2420TinyosNetworkP__BareSend__getPayload(msg, len), 
      len + sizeof(cc2420_header_t ));
    }
}

# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 138 "/home/johanna/tinyos-main-test/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn)
#line 138
{
  uint8_t element = UniqueReceiveP__recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 142
    {
      if (element == UniqueReceiveP__INVALID_ELEMENT || UniqueReceiveP__writeIndex == element) {

          element = UniqueReceiveP__writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP__receivedMessages[element].source = msgSource;
      UniqueReceiveP__receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP__writeIndex++;
          UniqueReceiveP__writeIndex %= 4;
        }
    }
#line 155
    __nesc_atomic_end(__nesc_atomic); }
}

#line 192
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 192
{
  return msg;
}

# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__DuplicateReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = UniqueReceiveP__DuplicateReceive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 112 "/home/johanna/tinyos-main-test/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 112
{
  int i;

#line 114
  UniqueReceiveP__recycleSourceElement = UniqueReceiveP__INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP__receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP__receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 121
                    TRUE;

                    {
#line 121
                      __nesc_atomic_end(__nesc_atomic); 
#line 121
                      return __nesc_temp;
                    }
                  }
                }
#line 124
              UniqueReceiveP__recycleSourceElement = i;
            }
        }
    }
#line 127
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 165 "/home/johanna/tinyos-main-test/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline uint16_t UniqueReceiveP__getSourceKey(message_t * msg)
#line 165
{
  cc2420_header_t *hdr = UniqueReceiveP__CC2420PacketBody__getHeader(msg);
  int s_mode = (__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3;
  int d_mode = (__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3;
  int s_offset = 2;
#line 169
  int s_len = 2;
  uint16_t key = 0;
  uint8_t *current = (uint8_t *)& hdr->dest;
  int i;

  if (s_mode == IEEE154_ADDR_EXT) {
      s_len = 8;
    }
  if (d_mode == IEEE154_ADDR_EXT) {
      s_offset = 8;
    }

  current += s_offset;

  for (i = 0; i < s_len; i++) {
      key += current[i];
    }
  return key;
}

#line 86
static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len)
#line 87
{

  uint16_t msgSource = UniqueReceiveP__getSourceKey(msg);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->dsn.nxdata);

  if (UniqueReceiveP__hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP__DuplicateReceive__receive(msg, payload, len);
    }
  else 
#line 94
    {
      UniqueReceiveP__insert(msgSource, msgDsn);
      return UniqueReceiveP__Receive__receive(msg, payload, len);
    }
}

# 78 "/home/johanna/tinyos-main-test/tos/interfaces/Receive.nc"
inline static message_t * CC2420ReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = UniqueReceiveP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 298 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void )
#line 298
{
  return CC2420ControlP__m_ext_addr;
}

# 66 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static ieee_eui64_t CC2420ReceiveP__CC2420Config__getExtAddr(void ){
#line 66
  struct ieee_eui64 __nesc_result;
#line 66

#line 66
  __nesc_result = CC2420ControlP__CC2420Config__getExtAddr();
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66





inline static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void ){
#line 71
  unsigned int __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Config__getShortAddr();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 355 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void )
#line 355
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 356
    {
      unsigned char __nesc_temp = 
#line 356
      CC2420ControlP__addressRecognition;

      {
#line 356
        __nesc_atomic_end(__nesc_atomic); 
#line 356
        return __nesc_temp;
      }
    }
#line 358
    __nesc_atomic_end(__nesc_atomic); }
}

# 93 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void ){
#line 93
  unsigned char __nesc_result;
#line 93

#line 93
  __nesc_result = CC2420ControlP__CC2420Config__isAddressRecognitionEnabled();
#line 93

#line 93
  return __nesc_result;
#line 93
}
#line 93
# 42 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 824 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg)
#line 824
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(msg);
  int mode = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 3;
  ieee_eui64_t *ext_addr;

  if (!CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled()) {
      return TRUE;
    }

  if (mode == IEEE154_ADDR_SHORT) {
      return __nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
       || __nesc_ntoh_leuint16(header->dest.nxdata) == IEEE154_BROADCAST_ADDR;
    }
  else {
#line 836
    if (mode == IEEE154_ADDR_EXT) {
        ieee_eui64_t local_addr = CC2420ReceiveP__CC2420Config__getExtAddr();

#line 838
        ext_addr = (ieee_eui64_t * )& header->dest;
        return memcmp(ext_addr->data, local_addr.data, IEEE_EUI64_LENGTH) == 0;
      }
    else 
#line 840
      {

        return FALSE;
      }
    }
}

# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 676 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__receiveDone_task__runTask(void )
#line 676
{
  cc2420_metadata_t *metadata = CC2420ReceiveP__CC2420PacketBody__getMetadata(CC2420ReceiveP__m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.nxdata);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.nxdata, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.nxdata, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.nxdata, buf[length - 1]);

  if (CC2420ReceiveP__passesAddressCheck(CC2420ReceiveP__m_p_rx_buf) && length >= CC2420_SIZE) {
#line 701
      CC2420ReceiveP__m_p_rx_buf = CC2420ReceiveP__Receive__receive(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 704
    CC2420ReceiveP__receivingPacket = FALSE;
#line 704
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__waitForNextPacket();
}

# 178 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline bool CC2420SpiP__Resource__isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP__m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 128 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
#line 97
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 88
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP__grant__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 184 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__SpiResource__granted(void )
#line 184
{
  CC2420SpiP__grant__postTask();
}

# 121 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__default__granted(uint8_t id)
#line 121
{
}

# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__granted(uint8_t arg_0x40b304b8){
#line 102
  switch (arg_0x40b304b8) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID:
#line 102
      CC2420SpiP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__default__granted(arg_0x40b304b8);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 97 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__granted(uint8_t id)
#line 97
{
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__granted(id);
}

# 202 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x40c1c540){
#line 102
  switch (arg_0x40c1c540) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID:
#line 102
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__granted(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x40c1c540);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 190 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
}

# 192 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
#line 192
{
}

# 82 "/home/johanna/tinyos-main-test/tos/interfaces/SpiPacket.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__sendDone(uint8_t arg_0x40b2f9f8, uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  switch (arg_0x40b2f9f8) {
#line 82
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID:
#line 82
      CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    default:
#line 82
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__default__sendDone(arg_0x40b2f9f8, txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    }
#line 82
}
#line 82
# 185 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone(void )
#line 185
{
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__sendDone(/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_client, /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf, /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf, /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_len, 
  SUCCESS);
}

#line 168
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__runTask(void )
#line 168
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone();
#line 169
    __nesc_atomic_end(__nesc_atomic); }
}

# 486 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 487
{
}

# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__receiveDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__receiveDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 389 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg)
#line 389
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP__m_msg) {
      ack_header = CC2420TransmitP__CC2420PacketBody__getHeader(ack_msg);
      msg_header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);

      if (CC2420TransmitP__m_state == CC2420TransmitP__S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.nxdata) == __nesc_ntoh_leuint8(ack_header->dsn.nxdata)) {
          CC2420TransmitP__BackoffTimer__stop();

          msg_metadata = CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.nxdata);

          __nesc_hton_int8(msg_metadata->ack.nxdata, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.nxdata, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.nxdata, ack_buf[length] & 0x7f);
          CC2420TransmitP__signalDone(SUCCESS);
        }
    }
}

# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP__CC2420Receive__receive(type, message);
#line 63
}
#line 63
# 70 "/home/johanna/tinyos-main-test/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP__PacketTimeStamp__clear(message_t * msg){
#line 70
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 70
}
#line 70








inline static void CC2420ReceiveP__PacketTimeStamp__set(message_t * msg, CC2420ReceiveP__PacketTimeStamp__size_type value){
#line 78
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 78
}
#line 78
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__getRaw(void )
#line 51
{
#line 51
  return * (volatile uint8_t * )32U & (0x01 << 2);
}

#line 52
static inline bool /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__get(void )
#line 52
{
#line 52
  return /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__getRaw() != 0;
}

# 73 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get();
}

# 43 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFOP__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__getRaw(void )
#line 51
{
#line 51
  return * (volatile uint8_t * )32U & (0x01 << 3);
}

#line 52
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__get(void )
#line 52
{
#line 52
  return /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__getRaw() != 0;
}

# 73 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get();
}

# 43 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 209 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

# 62 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
#line 51
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SACK__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SACK);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 382 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void )
#line 382
{
  /* atomic removed: atomic calls only */
#line 383
  {
    unsigned char __nesc_temp = 
#line 383
    CC2420ControlP__hwAutoAckDefault;

#line 383
    return __nesc_temp;
  }
}

# 112 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420ControlP__CC2420Config__isHwAutoAckDefault();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 389 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void )
#line 389
{
  /* atomic removed: atomic calls only */
#line 390
  {
    unsigned char __nesc_temp = 
#line 390
    CC2420ControlP__autoAckEnabled;

#line 390
    return __nesc_temp;
  }
}

# 117 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void ){
#line 117
  unsigned char __nesc_result;
#line 117

#line 117
  __nesc_result = CC2420ControlP__CC2420Config__isAutoAckEnabled();
#line 117

#line 117
  return __nesc_result;
#line 117
}
#line 117
# 530 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 531
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

#line 535
  CC2420ReceiveP__rxFrameLength = buf[0];

  switch (CC2420ReceiveP__m_state) {

      case CC2420ReceiveP__S_RX_LENGTH: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FCF;



      if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) 



        {

          CC2420ReceiveP__flush();
        }
      else {
          if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {
              CC2420ReceiveP__m_bytes_left -= CC2420ReceiveP__rxFrameLength + 1;
            }

          if (CC2420ReceiveP__rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP__rxFrameLength > 0) {
                  if (CC2420ReceiveP__rxFrameLength > CC2420ReceiveP__SACK_HEADER_LENGTH) {

                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP__receivingPacket = FALSE;
                  CC2420ReceiveP__CSN__set();
                  CC2420ReceiveP__SpiResource__release();
                  CC2420ReceiveP__waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP__flush();
            }
        }
      break;

      case CC2420ReceiveP__S_RX_FCF: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;










      if (CC2420ReceiveP__CC2420Config__isAutoAckEnabled() && !CC2420ReceiveP__CC2420Config__isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16(
#line 597
          header->fcf.nxdata) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.nxdata) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__SACK__strobe();
              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__RXFIFO__beginRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
              CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
              return;
            }
        }

      CC2420ReceiveP__RXFIFO__continueRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
      CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP__S_RX_PAYLOAD: 

        CC2420ReceiveP__CSN__set();
      if (!CC2420ReceiveP__m_missed_packets) {

          CC2420ReceiveP__SpiResource__release();
        }




      if ((((
#line 626
      CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get())
       || !CC2420ReceiveP__m_timestamp_size)
       || CC2420ReceiveP__rxFrameLength <= 10) {
          CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
        }
      else {
          if (CC2420ReceiveP__m_timestamp_size == 1) {
            CC2420ReceiveP__PacketTimeStamp__set(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__m_timestamp_head]);
            }
#line 634
          CC2420ReceiveP__m_timestamp_head = (CC2420ReceiveP__m_timestamp_head + 1) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;
          CC2420ReceiveP__m_timestamp_size--;

          if (CC2420ReceiveP__m_timestamp_size > 0) {
              CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
              CC2420ReceiveP__m_timestamp_head = 0;
              CC2420ReceiveP__m_timestamp_size = 0;
            }
        }



      if (buf[CC2420ReceiveP__rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 648
          CC2420ReceiveP__CC2420Receive__receive(type, CC2420ReceiveP__m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP__receiveDone_task__postTask();
              return;
            }
        }

      CC2420ReceiveP__waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP__receivingPacket = FALSE;
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__SpiResource__release();
      break;
    }
}

# 370 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x40a9a010, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x40a9a010) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP__Fifo__default__readDone(arg_0x40a9a010, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 293 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg)
#line 294
{
}

# 81 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(am_id_t arg_0x40f08148, message_t * msg){
#line 81
    CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(arg_0x40f08148, msg);
#line 81
}
#line 81
# 241 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 241
{
  CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

# 81 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 243 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime)
#line 243
{
  CC2420TransmitP__myInitialBackoff = backoffTime + 1;
}

# 60 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime){
#line 60
  CC2420TransmitP__RadioBackoff__setInitialBackoff(backoffTime);
#line 60
}
#line 60
# 223 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 223
{
  CC2420CsmaP__SubBackoff__setInitialBackoff(CC2420CsmaP__Random__rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestInitialBackoff(msg);
}

# 81 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__sendDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__sendDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 205 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err)
#line 205
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 206
    CC2420CsmaP__sendErr = err;
#line 206
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP__sendDone_task__postTask();
}

# 73 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error){
#line 73
  CC2420CsmaP__CC2420Transmit__sendDone(p_msg, error);
#line 73
}
#line 73
# 454 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 455
{

  CC2420TransmitP__CSN__set();
  if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 459
      {
        CC2420TransmitP__CSN__clr();
        CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CSN__set();
      }
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
    }
  else {
#line 468
    if (!CC2420TransmitP__m_cca) {
        /* atomic removed: atomic calls only */
#line 469
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP__attemptSend();
      }
    else {
        CC2420TransmitP__releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 476
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_SAMPLE_CCA;
        }

        CC2420TransmitP__RadioBackoff__requestInitialBackoff(CC2420TransmitP__m_msg);
        CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myInitialBackoff);
      }
    }
}

# 668 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 668
{
}

# 373 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x40a9a010, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x40a9a010) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP__Fifo__default__writeDone(arg_0x40a9a010, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 533 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__writeTxctrl(void )
#line 533
{
  /* atomic removed: atomic calls only */
#line 534
  {
    CC2420ControlP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
    3 << CC2420_TXCTRL_PA_CURRENT)) | (
    1 << CC2420_TXCTRL_RESERVED)) | ((
    31 & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
  }
}

# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_RXCTRL1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 90 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__enable(void )
#line 90
{
#line 90
  P1IE |= 1 << 4;
}

# 42 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port14__enable();
#line 42
}
#line 42
# 142 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__edge(bool l2h)
#line 142
{
  /* atomic removed: atomic calls only */
#line 143
  {
    if (l2h) {
#line 144
      P1IES &= ~(1 << 4);
      }
    else {
#line 145
      P1IES |= 1 << 4;
      }
  }
}

# 67 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port14__edge(low_to_high);
#line 67
}
#line 67
# 106 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__clear(void )
#line 106
{
#line 106
  P1IFG &= ~(1 << 4);
}

# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port14__clear();
#line 52
}
#line 52
# 98 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__disable(void )
#line 98
{
#line 98
  P1IE &= ~(1 << 4);
}

# 47 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port14__disable();
#line 47
}
#line 47
# 69 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  }
  return SUCCESS;
}

#line 52
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable();
  }
  return SUCCESS;
}

static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(TRUE);
}

# 53 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 224 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
#line 224
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 225
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 227
            FAIL;

            {
#line 227
              __nesc_atomic_end(__nesc_atomic); 
#line 227
              return __nesc_temp;
            }
          }
        }
#line 230
      CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTING;
      CC2420ControlP__IOCFG1__write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP__InterruptCCA__enableRisingEdge();
      CC2420ControlP__SXOSCON__strobe();

      CC2420ControlP__IOCFG0__write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP__writeFsctrl();
      CC2420ControlP__writeMdmctrl0();

      CC2420ControlP__RXCTRL1__write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));

      CC2420ControlP__writeTxctrl();
    }
#line 252
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startOscillator(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Power__startOscillator();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 214 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__Resource__granted(void )
#line 214
{
  CC2420CsmaP__CC2420Power__startOscillator();
}

# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static void CC2420ControlP__Resource__granted(void ){
#line 102
  CC2420CsmaP__Resource__granted();
#line 102
}
#line 102
# 41 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 413 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SpiResource__granted(void )
#line 413
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__Resource__granted();
}

# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP__syncDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ControlP__syncDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 53 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 399 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SyncResource__granted(void )
#line 399
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRFOFF__strobe();
  CC2420ControlP__writeFsctrl();
  CC2420ControlP__writeMdmctrl0();
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRXON__strobe();
  CC2420ControlP__CSN__set();
  CC2420ControlP__SyncResource__release();
  CC2420ControlP__syncDone__postTask();
}

#line 545
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data)
#line 545
{
}

# 63 "/home/johanna/tinyos-main-test/tos/interfaces/Read.nc"
inline static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val){
#line 63
  CC2420ControlP__ReadRssi__default__readDone(result, val);
#line 63
}
#line 63
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__RssiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 287 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 293
            status;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
#line 297
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

# 55 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 418 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__RssiResource__granted(void )
#line 418
{
  uint16_t data = 0;

#line 420
  CC2420ControlP__CSN__clr();
  CC2420ControlP__RSSI__read(&data);
  CC2420ControlP__CSN__set();

  CC2420ControlP__RssiResource__release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP__ReadRssi__readDone(SUCCESS, data);
}

# 416 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__SpiResource__granted(void )
#line 416
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 419
    {
      cur_state = CC2420TransmitP__m_state;
    }
#line 421
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP__S_LOAD: 
        CC2420TransmitP__loadTXFIFO();
      break;

      case CC2420TransmitP__S_BEGIN_TRANSMIT: 
        CC2420TransmitP__attemptSend();
      break;

      case CC2420TransmitP__S_CANCEL: 
        CC2420TransmitP__CSN__clr();
      CC2420TransmitP__SFLUSHTX__strobe();
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 437
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
        }
#line 439
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP__releaseSpiResource();
      break;
    }
}

# 513 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__SpiResource__granted(void )
#line 513
{







  CC2420ReceiveP__receive();
}

# 367 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
#line 367
{
}

# 102 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x40a9b5c8){
#line 102
  switch (arg_0x40a9b5c8) {
#line 102
    case /*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID:
#line 102
      CC2420ControlP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID:
#line 102
      CC2420ControlP__SyncResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID:
#line 102
      CC2420ControlP__RssiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID:
#line 102
      CC2420TransmitP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID:
#line 102
      CC2420ReceiveP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420SpiP__Resource__default__granted(arg_0x40a9b5c8);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 358 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__grant__runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP__m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_IEEEADR, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 235 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error)
#line 235
{
}

# 709 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error)
#line 709
{
}

# 55 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP__CC2420Config__syncDone(error_t error){
#line 55
  CC2420ReceiveP__CC2420Config__syncDone(error);
#line 55
  CC2420ActiveMessageP__CC2420Config__syncDone(error);
#line 55
}
#line 55
# 469 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__syncDone__runTask(void )
#line 469
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 470
    CC2420ControlP__m_sync_busy = FALSE;
#line 470
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__CC2420Config__syncDone(SUCCESS);
}

# 88 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 323 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Config__sync(void )
#line 323
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      if (CC2420ControlP__m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 326
            FAIL;

            {
#line 326
              __nesc_atomic_end(__nesc_atomic); 
#line 326
              return __nesc_temp;
            }
          }
        }
#line 329
      CC2420ControlP__m_sync_busy = TRUE;
      if (CC2420ControlP__m_state == CC2420ControlP__S_XOSC_STARTED) {
          CC2420ControlP__SyncResource__request();
        }
      else 
#line 332
        {
          CC2420ControlP__syncDone__postTask();
        }
    }
#line 335
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 465
static inline void CC2420ControlP__sync__runTask(void )
#line 465
{
  CC2420ControlP__CC2420Config__sync();
}

# 244 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error)
#line 244
{
}

# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__BareSend__sendDone(message_t * msg, error_t error){
#line 100
  CC2420TinyosNetworkP__BareSend__default__sendDone(msg, error);
#line 100
}
#line 100
# 110 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
inline static void CC2420ActiveMessageP__AMSend__sendDone(am_id_t arg_0x40f0b010, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x40f0b010, msg, error);
#line 110
}
#line 110
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420ActiveMessageP__RadioResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420TinyosNetworkP__Resource__release(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 212 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result)
#line 212
{
  CC2420ActiveMessageP__RadioResource__release();
  CC2420ActiveMessageP__AMSend__sendDone(CC2420ActiveMessageP__AMPacket__type(msg), msg, result);
}

# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__ActiveSend__sendDone(message_t * msg, error_t error){
#line 100
  CC2420ActiveMessageP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 148 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error)
#line 148
{
  if (CC2420TinyosNetworkP__m_busy_client == CC2420TinyosNetworkP__CLIENT_AM) {
      CC2420TinyosNetworkP__ActiveSend__sendDone(msg, error);
    }
  else 
#line 151
    {
      CC2420TinyosNetworkP__BareSend__sendDone(msg, error);
    }
}

# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static void UniqueSendP__Send__sendDone(message_t * msg, error_t error){
#line 100
  CC2420TinyosNetworkP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 104 "/home/johanna/tinyos-main-test/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP__State__toIdle();
  UniqueSendP__Send__sendDone(msg, error);
}

# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static void CC2420CsmaP__Send__sendDone(message_t * msg, error_t error){
#line 100
  UniqueSendP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__stopDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__stopDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 63 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__stopVReg(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420ControlP__CC2420Power__stopVReg();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 69 "/home/johanna/tinyos-main-test/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 105 "/home/johanna/tinyos-main-test/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420TransmitP__StdControl__stop();
#line 105
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__stop());
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 275 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__shutdown(void )
#line 275
{
  CC2420CsmaP__SubControl__stop();
  CC2420CsmaP__CC2420Power__stopVReg();
  CC2420CsmaP__stopDone_task__postTask();
}

#line 244
static inline void CC2420CsmaP__sendDone_task__runTask(void )
#line 244
{
  error_t packetErr;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    packetErr = CC2420CsmaP__sendErr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
      CC2420CsmaP__shutdown();
    }
  else {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
    }

  CC2420CsmaP__Send__sendDone(CC2420CsmaP__m_msg, packetErr);
}

# 76 "/home/johanna/tinyos-main-test/tos/interfaces/McuSleep.nc"
inline static void SenseNodeC__PowerManager__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 109 "/home/johanna/tinyos-main-test/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 109
{
  LedsP__Led2__set();
  ;
#line 111
  ;
}

# 94 "/home/johanna/tinyos-main-test/tos/interfaces/Leds.nc"
inline static void SenseNodeC__Leds__led2Off(void ){
#line 94
  LedsP__Leds__led2Off();
#line 94
}
#line 94
# 217 "SenseNodeC.nc"
static inline void SenseNodeC__AMControl__stopDone(error_t err)
#line 217
{


  printf("Radio off. \n\n");
  printfflush();

  SenseNodeC__Leds__led2Off();
  SenseNodeC__PowerManager__sleep();
}

# 138 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__stopDone(error_t error){
#line 138
  SenseNodeC__AMControl__stopDone(error);
#line 138
}
#line 138
# 265 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__stopDone_task__runTask(void )
#line 265
{
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPED);
  CC2420CsmaP__SplitControl__stopDone(SUCCESS);
}

# 66 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/timer/Msp430ClockP.nc"
static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void )
#line 66
{
  return MSP430_POWER_LPM3;
}

# 62 "/home/johanna/tinyos-main-test/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{
  mcu_power_t pState = MSP430_POWER_LPM3;





  if (((((((
#line 77
  TACCTL0 & 0x0010 || TACCTL1 & 0x0010) || TACCTL2 & 0x0010) && (
  TACTL & 0x0300) == 0x0200) || (
  UCA0CTL1 & 0xC0) != 0x00) || (
  UCA1CTL1 & 0xC0) != 0x00) || (
  UCB0CTL1 & 0xC0) != 0x00) || (
  UCB1CTL1 & 0xC0) != 0x00) {

    pState = MSP430_POWER_LPM1;
    }


  if (ADC12CTL0 & 0x010) {
      if (ADC12CTL1 & 0x0010) {

          if (ADC12CTL1 & 0x0008) {
            pState = MSP430_POWER_LPM1;
            }
          else {
#line 94
            pState = MSP430_POWER_ACTIVE;
            }
        }
      else {
#line 95
        if (ADC12CTL1 & 0x0400 && (TACTL & 0x0300) == 0x0200) {



            pState = MSP430_POWER_LPM1;
          }
        }
    }

  return pState;
}

# 379 "/home/johanna/tinyos-main-test/tos/chips/msp430/msp430hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 379
{
  return m1 < m2 ? m1 : m2;
}

# 107 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/McuSleepC.nc"
static inline void McuSleepC__computePowerState(void )
#line 107
{
  McuSleepC__powerState = mcombine(McuSleepC__getPowerState(), 
  McuSleepC__McuPowerOverride__lowestState());
}

# 104 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static error_t SenseNodeC__AMControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420CsmaP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x407f82b0, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = CC2420ActiveMessageP__AMSend__send(arg_0x407f82b0, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 78 "/home/johanna/tinyos-main-test/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned int __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420ActiveMessageP__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = CC2420ActiveMessageP__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 198 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 198
{
  __nesc_hton_leuint8(CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg)->length.nxdata, len + CC2420_SIZE);
}

# 94 "/home/johanna/tinyos-main-test/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  CC2420ActiveMessageP__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 75 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static error_t /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 169 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t type)
#line 169
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 171
  __nesc_hton_leuint8(header->type.nxdata, type);
}

# 162 "/home/johanna/tinyos-main-test/tos/interfaces/AMPacket.nc"
inline static void /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  CC2420ActiveMessageP__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 149 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 149
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 151
  __nesc_hton_leuint16(header->dest.nxdata, addr);
}

# 103 "/home/johanna/tinyos-main-test/tos/interfaces/AMPacket.nc"
inline static void /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  CC2420ActiveMessageP__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/home/johanna/tinyos-main-test/tos/system/AMQueueEntryP.nc"
static inline error_t /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 6);
  return /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 80 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
inline static error_t SenseNodeC__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 125 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static void * CC2420ActiveMessageP__SubSend__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__getPayload(msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 206 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void *CC2420ActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len)
#line 206
{
  return CC2420ActiveMessageP__SubSend__getPayload(msg, len);
}

# 126 "/home/johanna/tinyos-main-test/tos/interfaces/Packet.nc"
inline static void * SenseNodeC__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = CC2420ActiveMessageP__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__clr(void )
#line 49
{
#line 49
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 49
    * (volatile uint8_t * )49U &= ~(0x01 << 5);
#line 49
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__clr();
#line 53
}
#line 53
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr();
}

# 41 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr();
#line 41
}
#line 41
# 104 "/home/johanna/tinyos-main-test/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 104
{
  LedsP__Led2__clr();
  ;
#line 106
  ;
}

# 89 "/home/johanna/tinyos-main-test/tos/interfaces/Leds.nc"
inline static void SenseNodeC__Leds__led2On(void ){
#line 89
  LedsP__Leds__led2On();
#line 89
}
#line 89
# 181 "SenseNodeC.nc"
static inline void SenseNodeC__AMControl__startDone(error_t err)
#line 181
{
  if (err == SUCCESS) {


      printf("Radio on. \n");
      printfflush();

      SenseNodeC__Leds__led2On();

      if (SenseNodeC__locked) {
#line 190
          return;
        }
      else {
          radio_count_msg_t *rcm = (radio_count_msg_t *)SenseNodeC__Packet__getPayload(&SenseNodeC__packet, sizeof(radio_count_msg_t ));

#line 194
          __nesc_hton_uint16(rcm->temp.nxdata, SenseNodeC__sensor_val);
          __nesc_hton_uint16(rcm->node_id.nxdata, TOS_NODE_ID);

          if (rcm == (void *)0) {
#line 197
              return;
            }

          if (SenseNodeC__AMSend__send(1, &SenseNodeC__packet, sizeof(radio_count_msg_t )) == SUCCESS) {


              printf("Packet sent.\n");
              printfflush();

              SenseNodeC__locked = TRUE;
            }
        }
    }
  else 
    {
      SenseNodeC__AMControl__start();
    }
}

# 113 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__startDone(error_t error){
#line 113
  SenseNodeC__AMControl__startDone(error);
#line 113
}
#line 113
# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 196 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__release(void )
#line 196
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 197
    {
      CC2420ControlP__CSN__set();
      {
        unsigned char __nesc_temp = 
#line 199
        CC2420ControlP__SpiResource__release();

        {
#line 199
          __nesc_atomic_end(__nesc_atomic); 
#line 199
          return __nesc_temp;
        }
      }
    }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
}

# 120 "/home/johanna/tinyos-main-test/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420ControlP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 268 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__rxOn(void )
#line 268
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 271
            FAIL;

            {
#line 271
              __nesc_atomic_end(__nesc_atomic); 
#line 271
              return __nesc_temp;
            }
          }
        }
#line 273
      CC2420ControlP__SRXON__strobe();
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__rxOn(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP__CC2420Power__rxOn();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 88 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__enable(void )
#line 88
{
#line 88
  P1IE |= 1 << 2;
}

# 42 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port12__enable();
#line 42
}
#line 42
# 130 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__edge(bool l2h)
#line 130
{
  /* atomic removed: atomic calls only */
#line 131
  {
    if (l2h) {
#line 132
      P1IES &= ~(1 << 2);
      }
    else {
#line 133
      P1IES |= 1 << 2;
      }
  }
}

# 67 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port12__edge(low_to_high);
#line 67
}
#line 67
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(FALSE);
}

# 54 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 157 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__start(void )
#line 157
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__receivingPacket = FALSE;




      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 168 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__start(void )
#line 168
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    {
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__m_receiving = FALSE;
      CC2420TransmitP__abortSpiRelease = FALSE;
      CC2420TransmitP__m_tx_power = 0;
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "/home/johanna/tinyos-main-test/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC2420TransmitP__StdControl__start();
#line 95
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 257 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__startDone_task__runTask(void )
#line 257
{
  CC2420CsmaP__SubControl__start();
  CC2420CsmaP__CC2420Power__rxOn();
  CC2420CsmaP__Resource__release();
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
  CC2420CsmaP__SplitControl__startDone(SUCCESS);
}

# 110 "/home/johanna/tinyos-main-test/tos/interfaces/AMSend.nc"
inline static void /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  SenseNodeC__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/home/johanna/tinyos-main-test/tos/system/AMQueueEntryP.nc"
static inline void /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 215 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/home/johanna/tinyos-main-test/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x407f98a8, message_t * msg, error_t error){
#line 100
  switch (arg_0x407f98a8) {
#line 100
    case 0U:
#line 100
      /*SenseNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x407f98a8, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 126 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 163
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 48 "/home/johanna/tinyos-main-test/tos/interfaces/LocalIeeeEui64.nc"
inline static ieee_eui64_t CC2420ControlP__LocalIeeeEui64__getId(void ){
#line 48
  struct ieee_eui64 __nesc_result;
#line 48

#line 48
  __nesc_result = LocalIeeeEui64C__LocalIeeeEui64__getId();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 93 "/home/johanna/tinyos-main-test/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 93
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 95
  myGroup = ActiveMessageAddressC__group;
  return myGroup;
}

# 55 "/home/johanna/tinyos-main-test/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
#line 50
inline static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned int __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__makeOutput(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 55
  * (volatile uint8_t * )30U |= 0x01 << 5;
}

# 85 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__makeOutput();
#line 85
}
#line 85
# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput();
}

# 46 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput();
#line 46
}
#line 46
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__makeOutput(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 55
  * (volatile uint8_t * )30U |= 0x01 << 6;
}

# 85 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__makeOutput();
#line 85
}
#line 85
# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput();
}

# 46 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput();
#line 46
}
#line 46
# 55 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__makeOutput(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 55
  * (volatile uint8_t * )26U |= 0x01 << 0;
}

# 85 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__makeOutput();
#line 85
}
#line 85
# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput();
}

# 46 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 129 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
#line 129
{
  int i;
#line 130
  int t;

#line 131
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();

  CC2420ControlP__m_short_addr = CC2420ControlP__ActiveMessageAddress__amAddress();
  CC2420ControlP__m_ext_addr = CC2420ControlP__LocalIeeeEui64__getId();
  CC2420ControlP__m_pan = CC2420ControlP__ActiveMessageAddress__amGroup();
  CC2420ControlP__m_tx_power = 31;
  CC2420ControlP__m_channel = 26;

  CC2420ControlP__m_ext_addr = CC2420ControlP__LocalIeeeEui64__getId();
  for (i = 0; i < 4; i++) {
      t = CC2420ControlP__m_ext_addr.data[i];
      CC2420ControlP__m_ext_addr.data[i] = CC2420ControlP__m_ext_addr.data[7 - i];
      CC2420ControlP__m_ext_addr.data[7 - i] = t;
    }





  CC2420ControlP__addressRecognition = TRUE;





  CC2420ControlP__hwAddressRecognition = FALSE;






  CC2420ControlP__autoAckEnabled = TRUE;






  CC2420ControlP__hwAutoAckDefault = FALSE;



  return SUCCESS;
}

# 81 "/home/johanna/tinyos-main-test/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 4U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 55 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ, /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4411 {
#line 57
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )386U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl();
}

# 47 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__makeInput(void )
#line 53
{
  /* atomic removed: atomic calls only */
#line 53
  * (volatile uint8_t * )30U &= ~(0x01 << 1);
}

# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__makeInput();
#line 78
}
#line 78
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput();
}

# 44 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__SFD__makeInput(void ){
#line 44
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput();
#line 44
}
#line 44


inline static void CC2420TransmitP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__makeInput(void )
#line 53
{
  /* atomic removed: atomic calls only */
#line 53
  * (volatile uint8_t * )34U &= ~(0x01 << 4);
}

# 78 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__makeInput();
#line 78
}
#line 78
# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput();
}

# 44 "/home/johanna/tinyos-main-test/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CCA__makeInput(void ){
#line 44
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput();
#line 44
}
#line 44
# 160 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__Init__init(void )
#line 160
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

# 151 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__Init__init(void )
#line 151
{
  CC2420ReceiveP__m_p_rx_buf = &CC2420ReceiveP__m_rx_buf;
  return SUCCESS;
}

# 57 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4412 {
#line 57
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )390U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl();
}

# 47 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 55 "/home/johanna/tinyos-main-test/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 52 "/home/johanna/tinyos-main-test/tos/interfaces/Random.nc"
inline static uint16_t UniqueSendP__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 62 "/home/johanna/tinyos-main-test/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Init__init(void )
#line 62
{
  UniqueSendP__localSendId = UniqueSendP__Random__rand16();
  return SUCCESS;
}

# 71 "/home/johanna/tinyos-main-test/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP__Init__init(void )
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP__receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP__receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 55 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 109 "/home/johanna/tinyos-main-test/tos/lib/printf/PrintfP.nc"
static inline error_t PrintfP__Init__init(void )
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  PrintfP__state = PrintfP__S_STARTED;
  return SUCCESS;
}

# 216 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 55 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init(void )
#line 55
{
  memset(/*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ, /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY, sizeof /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ);
  return SUCCESS;
}

# 98 "/home/johanna/tinyos-main-test/tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP__Init__init(void )
#line 98
{
  error_t rv = SUCCESS;



  return rv;
}

# 123 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__stopConversion(void ){
#line 123
  HplAdc12P__HplAdc12__stopConversion();
#line 123
}
#line 123
# 96 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP__Init__init(void )
{
  adc12ctl0_t ctl0;

  /* atomic removed: atomic calls only */
#line 100
  {

    Msp430Adc12ImplP__HplAdc12__stopConversion();


    ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();
    ctl0.adc12tovie = 1;
    ctl0.adc12ovie = 1;
    Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
  }
  return SUCCESS;
}

# 61 "/home/johanna/tinyos-main-test/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 62 "/home/johanna/tinyos-main-test/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, Msp430Adc12ImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PutcharP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsciShareA0P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PrintfP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, UniqueReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, UniqueSendP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 112 "SenseNodeC.nc"
static inline void SenseNodeC__Boot__booted(void )
#line 112
{


  printf("Starting Sense Node application.\n");
  printfflush();


  SenseNodeC__MilliTimer__startPeriodic(SenseNodeC__sleep_interval);
}

# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 348 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 104 "/home/johanna/tinyos-main-test/tos/interfaces/SplitControl.nc"
inline static error_t SerialStartP__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 44 "/home/johanna/tinyos-main-test/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP__Boot__booted(void )
#line 44
{
  SerialStartP__SerialControl__start();
}

# 60 "/home/johanna/tinyos-main-test/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  SerialStartP__Boot__booted();
#line 60
  SenseNodeC__Boot__booted();
#line 60
}
#line 60
# 76 "/home/johanna/tinyos-main-test/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/home/johanna/tinyos-main-test/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/home/johanna/tinyos-main-test/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 102 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__clear(void )
#line 102
{
#line 102
  P1IFG &= ~(1 << 0);
}

#line 78
static inline void HplMsp430InterruptP__Port10__default__fired(void )
#line 78
{
#line 78
  HplMsp430InterruptP__Port10__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port10__fired(void ){
#line 72
  HplMsp430InterruptP__Port10__default__fired();
#line 72
}
#line 72
# 103 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port11__clear(void )
#line 103
{
#line 103
  P1IFG &= ~(1 << 1);
}

#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void )
#line 79
{
#line 79
  HplMsp430InterruptP__Port11__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port11__fired(void ){
#line 72
  HplMsp430InterruptP__Port11__default__fired();
#line 72
}
#line 72
# 212 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
#line 212
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {

      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
      CC2420ReceiveP__beginReceive();
    }
  else 



    {
      CC2420ReceiveP__m_missed_packets++;
    }
}

# 68 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void ){
#line 68
  CC2420ReceiveP__InterruptFIFOP__fired();
#line 68
}
#line 68
# 77 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port12__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired();
#line 72
}
#line 72
# 105 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port13__clear(void )
#line 105
{
#line 105
  P1IFG &= ~(1 << 3);
}

#line 81
static inline void HplMsp430InterruptP__Port13__default__fired(void )
#line 81
{
#line 81
  HplMsp430InterruptP__Port13__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port13__fired(void ){
#line 72
  HplMsp430InterruptP__Port13__default__fired();
#line 72
}
#line 72
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__startDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__startDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 218 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void )
#line 218
{
  CC2420CsmaP__startDone_task__postTask();
}

# 76 "/home/johanna/tinyos-main-test/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
#line 76
  CC2420CsmaP__CC2420Power__startOscillatorDone();
#line 76
}
#line 76
# 61 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 441 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__InterruptCCA__fired(void )
#line 441
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__CC2420Power__startOscillatorDone();
}

# 68 "/home/johanna/tinyos-main-test/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void ){
#line 68
  CC2420ControlP__InterruptCCA__fired();
#line 68
}
#line 68
# 77 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port14__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired();
#line 72
}
#line 72
# 107 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port15__clear(void )
#line 107
{
#line 107
  P1IFG &= ~(1 << 5);
}

#line 83
static inline void HplMsp430InterruptP__Port15__default__fired(void )
#line 83
{
#line 83
  HplMsp430InterruptP__Port15__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port15__fired(void ){
#line 72
  HplMsp430InterruptP__Port15__default__fired();
#line 72
}
#line 72
# 108 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port16__clear(void )
#line 108
{
#line 108
  P1IFG &= ~(1 << 6);
}

#line 84
static inline void HplMsp430InterruptP__Port16__default__fired(void )
#line 84
{
#line 84
  HplMsp430InterruptP__Port16__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port16__fired(void ){
#line 72
  HplMsp430InterruptP__Port16__default__fired();
#line 72
}
#line 72
# 109 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port17__clear(void )
#line 109
{
#line 109
  P1IFG &= ~(1 << 7);
}

#line 85
static inline void HplMsp430InterruptP__Port17__default__fired(void )
#line 85
{
#line 85
  HplMsp430InterruptP__Port17__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port17__fired(void ){
#line 72
  HplMsp430InterruptP__Port17__default__fired();
#line 72
}
#line 72
# 206 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port20__clear(void )
#line 206
{
#line 206
  P2IFG &= ~(1 << 0);
}

#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void )
#line 182
{
#line 182
  HplMsp430InterruptP__Port20__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port20__fired(void ){
#line 72
  HplMsp430InterruptP__Port20__default__fired();
#line 72
}
#line 72
# 207 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port21__clear(void )
#line 207
{
#line 207
  P2IFG &= ~(1 << 1);
}

#line 183
static inline void HplMsp430InterruptP__Port21__default__fired(void )
#line 183
{
#line 183
  HplMsp430InterruptP__Port21__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port21__fired(void ){
#line 72
  HplMsp430InterruptP__Port21__default__fired();
#line 72
}
#line 72
# 208 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port22__clear(void )
#line 208
{
#line 208
  P2IFG &= ~(1 << 2);
}

#line 184
static inline void HplMsp430InterruptP__Port22__default__fired(void )
#line 184
{
#line 184
  HplMsp430InterruptP__Port22__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port22__fired(void ){
#line 72
  HplMsp430InterruptP__Port22__default__fired();
#line 72
}
#line 72
# 209 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port23__clear(void )
#line 209
{
#line 209
  P2IFG &= ~(1 << 3);
}

#line 185
static inline void HplMsp430InterruptP__Port23__default__fired(void )
#line 185
{
#line 185
  HplMsp430InterruptP__Port23__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port23__fired(void ){
#line 72
  HplMsp430InterruptP__Port23__default__fired();
#line 72
}
#line 72
# 210 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port24__clear(void )
#line 210
{
#line 210
  P2IFG &= ~(1 << 4);
}

#line 186
static inline void HplMsp430InterruptP__Port24__default__fired(void )
#line 186
{
#line 186
  HplMsp430InterruptP__Port24__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port24__fired(void ){
#line 72
  HplMsp430InterruptP__Port24__default__fired();
#line 72
}
#line 72
# 211 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port25__clear(void )
#line 211
{
#line 211
  P2IFG &= ~(1 << 5);
}

#line 187
static inline void HplMsp430InterruptP__Port25__default__fired(void )
#line 187
{
#line 187
  HplMsp430InterruptP__Port25__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port25__fired(void ){
#line 72
  HplMsp430InterruptP__Port25__default__fired();
#line 72
}
#line 72
# 212 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port26__clear(void )
#line 212
{
#line 212
  P2IFG &= ~(1 << 6);
}

#line 188
static inline void HplMsp430InterruptP__Port26__default__fired(void )
#line 188
{
#line 188
  HplMsp430InterruptP__Port26__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port26__fired(void ){
#line 72
  HplMsp430InterruptP__Port26__default__fired();
#line 72
}
#line 72
# 213 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port27__clear(void )
#line 213
{
#line 213
  P2IFG &= ~(1 << 7);
}

#line 189
static inline void HplMsp430InterruptP__Port27__default__fired(void )
#line 189
{
#line 189
  HplMsp430InterruptP__Port27__clear();
}

# 72 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port27__fired(void ){
#line 72
  HplMsp430InterruptP__Port27__default__fired();
#line 72
}
#line 72
# 98 "/home/johanna/tinyos-main-test/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 397 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/home/johanna/tinyos-main-test/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 220 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte)
#line 220
{
}

# 79 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receivedByte(uint8_t arg_0x4109d488, uint8_t byte){
#line 79
  switch (arg_0x4109d488) {
#line 79
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 79
      HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
      break;
#line 79
    default:
#line 79
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(arg_0x4109d488, byte);
#line 79
      break;
#line 79
    }
#line 79
}
#line 79
# 132 "/home/johanna/tinyos-main-test/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 221 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 221
{
}

# 99 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receiveDone(uint8_t arg_0x4109d488, uint8_t * buf, uint16_t len, error_t error){
#line 99
  switch (arg_0x4109d488) {
#line 99
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 99
      HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
      break;
#line 99
    default:
#line 99
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(arg_0x4109d488, buf, len, error);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 134 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciInterrupts__rxDone(uint8_t id, uint8_t data)
#line 134
{

  if (/*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_buf) {
      /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_buf[/*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_pos++] = data;
      if (/*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_pos >= /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_len) {
          uint8_t *buf = /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_buf;

#line 140
          /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_buf = (void *)0;
          /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receiveDone(id, buf, /*Msp430Uart0P.UartP*/Msp430UartP__0__m_rx_len, SUCCESS);
        }
    }
  else 
#line 143
    {
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__receivedByte(id, data);
    }
}

# 60 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 60
{
}

# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
inline static void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__rxDone(uint8_t arg_0x40bec220, uint8_t data){
#line 59
  switch (arg_0x40bec220) {
#line 59
    case /*PlatformSerialC.UartC.UsciC*/Msp430UsciA0C__0__CLIENT_ID:
#line 59
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciInterrupts__rxDone(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID, data);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__default__rxDone(arg_0x40bec220, data);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 90 "/home/johanna/tinyos-main-test/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__ArbiterInfo__inUse()) {
    /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__rxDone(/*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__ArbiterInfo__userId(), data);
    }
}

# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
inline static void HplMsp430UsciA0P__Interrupts__rxDone(uint8_t data){
#line 59
  /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__RawInterrupts__rxDone(data);
#line 59
}
#line 59
# 80 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA0P.nc"
static inline void HplMsp430UsciA0P__UsciRawInterrupts__rxDone(uint8_t temp)
#line 80
{
  HplMsp430UsciA0P__Interrupts__rxDone(temp);
}

# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
inline static void HplMsp430UsciAB0RawInterruptsP__UsciA__rxDone(uint8_t data){
#line 58
  HplMsp430UsciA0P__UsciRawInterrupts__rxDone(data);
#line 58
}
#line 58
# 401 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 203 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/home/johanna/tinyos-main-test/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/home/johanna/tinyos-main-test/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "/home/johanna/tinyos-main-test/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "/home/johanna/tinyos-main-test/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 98 "/home/johanna/tinyos-main-test/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 217 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__disableRxIntr(void )
#line 217
{
  HplMsp430UsciB0P__IE2 &= ~0x04;
}

# 90 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__disableRxIntr(void ){
#line 90
  HplMsp430UsciB0P__Usci__disableRxIntr();
#line 90
}
#line 90
# 172 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__rxDone(uint8_t data)
#line 172
{

  if (/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf) {
    /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf[/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos - 1] = data;
    }
  if (/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos < /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_len) {
    /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__continueOp();
    }
  else 
#line 179
    {
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__disableRxIntr();
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone();
    }
}

# 60 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 60
{
}

# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
inline static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__rxDone(uint8_t arg_0x40bec220, uint8_t data){
#line 59
  switch (arg_0x40bec220) {
#line 59
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID:
#line 59
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__rxDone(data);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__rxDone(arg_0x40bec220, data);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 90 "/home/johanna/tinyos-main-test/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__rxDone(/*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__userId(), data);
    }
}

# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
inline static void HplMsp430UsciB0P__Interrupts__rxDone(uint8_t data){
#line 59
  /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__rxDone(data);
#line 59
}
#line 59
# 82 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__UsciRawInterrupts__rxDone(uint8_t temp)
#line 82
{
  HplMsp430UsciB0P__Interrupts__rxDone(temp);
}

# 58 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
inline static void HplMsp430UsciAB0RawInterruptsP__UsciB__rxDone(uint8_t data){
#line 58
  HplMsp430UsciB0P__UsciRawInterrupts__rxDone(data);
#line 58
}
#line 58
# 219 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 219
{
}

# 57 "/home/johanna/tinyos-main-test/tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__sendDone(uint8_t arg_0x4109d488, uint8_t * buf, uint16_t len, error_t error){
#line 57
  switch (arg_0x4109d488) {
#line 57
    case /*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID:
#line 57
      HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
      break;
#line 57
    default:
#line 57
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__default__sendDone(arg_0x4109d488, buf, len, error);
#line 57
      break;
#line 57
    }
#line 57
}
#line 57
# 285 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA0P.nc"
static inline void HplMsp430UsciA0P__Usci__tx(uint8_t data)
#line 285
{
  HplMsp430UsciA0P__UCA0TXBUF = data;
}

# 136 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__tx(uint8_t data){
#line 136
  HplMsp430UsciA0P__Usci__tx(data);
#line 136
}
#line 136
# 222 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA0P.nc"
static inline void HplMsp430UsciA0P__Usci__clrTxIntr(void )
#line 222
{
  HplMsp430UsciA0P__IFG2 &= ~0x02;
}

# 125 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA.nc"
inline static void /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__clrTxIntr(void ){
#line 125
  HplMsp430UsciA0P__Usci__clrTxIntr();
#line 125
}
#line 125
# 163 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static inline void /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciInterrupts__txDone(uint8_t id)
#line 163
{
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__clrTxIntr();
  if (/*Msp430Uart0P.UartP*/Msp430UartP__0__current_owner != id) {
      uint8_t *buf = /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf;

#line 167
      /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf = (void *)0;
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__sendDone(id, buf, /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_len, FAIL);
    }
  else {
#line 170
    if (/*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_pos < /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_len) {
        /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__tx(/*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf[/*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_pos++]);
      }
    else {
        uint8_t *buf = /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf;

#line 175
        /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf = (void *)0;
        /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__sendDone(id, buf, /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_len, SUCCESS);
      }
    }
}

# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__default__txDone(uint8_t id)
#line 59
{
}

# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
inline static void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__txDone(uint8_t arg_0x40bec220){
#line 54
  switch (arg_0x40bec220) {
#line 54
    case /*PlatformSerialC.UartC.UsciC*/Msp430UsciA0C__0__CLIENT_ID:
#line 54
      /*Msp430Uart0P.UartP*/Msp430UartP__0__UsciInterrupts__txDone(/*PlatformSerialC.UartC*/Msp430Uart0C__0__CLIENT_ID);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__default__txDone(arg_0x40bec220);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__ArbiterInfo__inUse()) {
    /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__Interrupts__txDone(/*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__ArbiterInfo__userId());
    }
}

# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
inline static void HplMsp430UsciA0P__Interrupts__txDone(void ){
#line 54
  /*Msp430UsciShareA0P.UsciShareP*/Msp430UsciShareP__1__RawInterrupts__txDone();
#line 54
}
#line 54
# 84 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciA0P.nc"
static inline void HplMsp430UsciA0P__UsciRawInterrupts__txDone(void )
#line 84
{
  HplMsp430UsciA0P__Interrupts__txDone();
}

# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
inline static void HplMsp430UsciAB0RawInterruptsP__UsciA__txDone(void ){
#line 53
  HplMsp430UsciA0P__UsciRawInterrupts__txDone();
#line 53
}
#line 53
# 65 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 529 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 529
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 531
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/home/johanna/tinyos-main-test/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/home/johanna/tinyos-main-test/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 668 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 668
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 671
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 699
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 190 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__txDone(void )
#line 190
{
}

# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__txDone(uint8_t id)
#line 59
{
}

# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
inline static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__txDone(uint8_t arg_0x40bec220){
#line 54
  switch (arg_0x40bec220) {
#line 54
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID:
#line 54
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__txDone();
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__txDone(arg_0x40bec220);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__txDone(/*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__userId());
    }
}

# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
inline static void HplMsp430UsciB0P__Interrupts__txDone(void ){
#line 54
  /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__txDone();
#line 54
}
#line 54
# 86 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__UsciRawInterrupts__txDone(void )
#line 86
{
  HplMsp430UsciB0P__Interrupts__txDone();
}

# 53 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
inline static void HplMsp430UsciAB0RawInterruptsP__UsciB__txDone(void ){
#line 53
  HplMsp430UsciB0P__UsciRawInterrupts__txDone();
#line 53
}
#line 53
# 61 "/home/johanna/tinyos-main-test/tos/system/QueueC.nc"
static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 250;
}

#line 57
static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void )
#line 57
{
  return /*PrintfC.QueueC*/QueueC__0__size;
}

#line 97
static inline error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(/*PrintfC.QueueC*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*PrintfC.QueueC*/QueueC__0__Queue__size() < /*PrintfC.QueueC*/QueueC__0__Queue__maxSize()) {
      ;
      /*PrintfC.QueueC*/QueueC__0__queue[/*PrintfC.QueueC*/QueueC__0__tail] = newVal;
      /*PrintfC.QueueC*/QueueC__0__tail++;
      if (/*PrintfC.QueueC*/QueueC__0__tail == 250) {
#line 102
        /*PrintfC.QueueC*/QueueC__0__tail = 0;
        }
#line 103
      /*PrintfC.QueueC*/QueueC__0__size++;
      /*PrintfC.QueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/home/johanna/tinyos-main-test/tos/interfaces/Queue.nc"
inline static error_t PrintfP__Queue__enqueue(PrintfP__Queue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
#line 58
inline static uint8_t PrintfP__Queue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 152 "/home/johanna/tinyos-main-test/tos/lib/printf/PrintfP.nc"
static inline int PrintfP__Putchar__putchar(int c)
{
  if (PrintfP__state == PrintfP__S_STARTED && PrintfP__Queue__size() >= 250 / 2) {
      PrintfP__state = PrintfP__S_FLUSHING;
      PrintfP__sendNext();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      if (PrintfP__Queue__enqueue(c) == SUCCESS) 
        {
          int __nesc_temp = 
#line 160
          0;

          {
#line 160
            __nesc_atomic_end(__nesc_atomic); 
#line 160
            return __nesc_temp;
          }
        }
      else 
#line 161
        {
          int __nesc_temp = 
#line 161
          -1;

          {
#line 161
            __nesc_atomic_end(__nesc_atomic); 
#line 161
            return __nesc_temp;
          }
        }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 49 "/home/johanna/tinyos-main-test/tos/lib/printf/Putchar.nc"
inline static int PutcharP__Putchar__putchar(int c){
#line 49
  int __nesc_result;
#line 49

#line 49
  __nesc_result = PrintfP__Putchar__putchar(c);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 161 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static inline uint16_t *AdcP__SingleChannel__multipleDataReady(uint8_t client, 
uint16_t *buf, uint16_t numSamples)
{

  return 0;
}

# 662 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline uint16_t *Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(uint8_t id, 
uint16_t *buf, uint16_t numSamples)
{
  return 0;
}

# 227 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static uint16_t * Msp430Adc12ImplP__SingleChannel__multipleDataReady(uint8_t arg_0x411f7d20, uint16_t * buffer, uint16_t numSamples){
#line 227
  unsigned int *__nesc_result;
#line 227

#line 227
  switch (arg_0x411f7d20) {
#line 227
    case /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 227
      __nesc_result = AdcP__SingleChannel__multipleDataReady(/*SenseNodeAppC.AdcReadClientC*/AdcReadClientC__0__CLIENT, buffer, numSamples);
#line 227
      break;
#line 227
    default:
#line 227
      __nesc_result = Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(arg_0x411f7d20, buffer, numSamples);
#line 227
      break;
#line 227
    }
#line 227

#line 227
  return __nesc_result;
#line 227
}
#line 227
# 88 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline uint16_t HplAdc12P__HplAdc12__getMem(uint8_t i)
#line 88
{
  return ((volatile int *)0x0140)[i];
}

# 89 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static uint16_t Msp430Adc12ImplP__HplAdc12__getMem(uint8_t idx){
#line 89
  unsigned int __nesc_result;
#line 89

#line 89
  __nesc_result = HplAdc12P__HplAdc12__getMem(idx);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 114 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__enableConversion(void )
#line 114
{
  HplAdc12P__ADC12CTL0 |= 0x002;
}

# 133 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__enableConversion(void ){
#line 133
  HplAdc12P__HplAdc12__enableConversion();
#line 133
}
#line 133
# 668 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__MultiChannel__default__dataReady(uint8_t id, uint16_t *buffer, uint16_t numSamples)
#line 668
{
}

# 107 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
inline static void Msp430Adc12ImplP__MultiChannel__dataReady(uint8_t arg_0x411f3a08, uint16_t *buffer, uint16_t numSamples){
#line 107
    Msp430Adc12ImplP__MultiChannel__default__dataReady(arg_0x411f3a08, buffer, numSamples);
#line 107
}
#line 107
# 657 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP__SingleChannel__default__singleDataReady(uint8_t id, uint16_t data)
{
  return FAIL;
}

# 206 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t Msp430Adc12ImplP__SingleChannel__singleDataReady(uint8_t arg_0x411f7d20, uint16_t data){
#line 206
  unsigned char __nesc_result;
#line 206

#line 206
  switch (arg_0x411f7d20) {
#line 206
    case /*SenseNodeAppC.AdcReadClientC.Msp430AdcClient*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 206
      __nesc_result = AdcP__SingleChannel__singleDataReady(/*SenseNodeAppC.AdcReadClientC*/AdcReadClientC__0__CLIENT, data);
#line 206
      break;
#line 206
    default:
#line 206
      __nesc_result = Msp430Adc12ImplP__SingleChannel__default__singleDataReady(arg_0x411f7d20, data);
#line 206
      break;
#line 206
    }
#line 206

#line 206
  return __nesc_result;
#line 206
}
#line 206
# 671 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(uint8_t id)
#line 671
{
}

# 54 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
inline static void Msp430Adc12ImplP__Overflow__conversionTimeOverflow(uint8_t arg_0x411f2388){
#line 54
    Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(arg_0x411f2388);
#line 54
}
#line 54
# 670 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__Overflow__default__memOverflow(uint8_t id)
#line 670
{
}

# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
inline static void Msp430Adc12ImplP__Overflow__memOverflow(uint8_t arg_0x411f2388){
#line 49
    Msp430Adc12ImplP__Overflow__default__memOverflow(arg_0x411f2388);
#line 49
}
#line 49
# 554 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__HplAdc12__conversionDone(uint16_t iv)
{
  bool overflow = FALSE;
  uint16_t *resultBuffer;

  if (iv <= 4) {
      if (iv == 2) {
        Msp430Adc12ImplP__Overflow__memOverflow(Msp430Adc12ImplP__clientID);
        }
      else {
#line 563
        Msp430Adc12ImplP__Overflow__conversionTimeOverflow(Msp430Adc12ImplP__clientID);
        }
      if (! Msp430Adc12ImplP__HplAdc12__getCtl0().msc) {
        overflow = TRUE;
        }
    }
#line 568
  switch (Msp430Adc12ImplP__state & Msp430Adc12ImplP__CONVERSION_MODE_MASK) 
    {
      case Msp430Adc12ImplP__SINGLE_DATA: 
        Msp430Adc12ImplP__stopConversion();
      Msp430Adc12ImplP__SingleChannel__singleDataReady(Msp430Adc12ImplP__clientID, Msp430Adc12ImplP__HplAdc12__getMem(0));
      break;
      case Msp430Adc12ImplP__SINGLE_DATA_REPEAT: 
        {
          error_t repeatContinue;

#line 577
          repeatContinue = Msp430Adc12ImplP__SingleChannel__singleDataReady(Msp430Adc12ImplP__clientID, 
          Msp430Adc12ImplP__HplAdc12__getMem(0));
          if (repeatContinue != SUCCESS) {
            Msp430Adc12ImplP__stopConversion();
            }
#line 581
          break;
        }

      case Msp430Adc12ImplP__MULTI_CHANNEL: 
        {
          uint16_t i = 0;
#line 586
          uint16_t k;

#line 587
          resultBuffer = Msp430Adc12ImplP__resultBufferStart + Msp430Adc12ImplP__resultBufferIndex;
          do {
              * resultBuffer++ = Msp430Adc12ImplP__HplAdc12__getMem(i);
            }
          while (
#line 590
          ++i < Msp430Adc12ImplP__numChannels);
          Msp430Adc12ImplP__resultBufferIndex += Msp430Adc12ImplP__numChannels;




          if (Msp430Adc12ImplP__resultBufferLength == Msp430Adc12ImplP__resultBufferIndex) {
              Msp430Adc12ImplP__stopConversion();
              resultBuffer -= Msp430Adc12ImplP__resultBufferIndex;
              k = Msp430Adc12ImplP__resultBufferIndex - Msp430Adc12ImplP__numChannels;
              Msp430Adc12ImplP__resultBufferIndex = 0;
              Msp430Adc12ImplP__MultiChannel__dataReady(Msp430Adc12ImplP__clientID, resultBuffer, 
              overflow ? k : Msp430Adc12ImplP__resultBufferLength);
            }
          else {
#line 603
            Msp430Adc12ImplP__HplAdc12__enableConversion();
            }
        }
#line 605
      break;
      case Msp430Adc12ImplP__MULTIPLE_DATA: 
        {
          uint16_t i = 0;
#line 608
          uint16_t length;
#line 608
          uint16_t k;

#line 609
          resultBuffer = Msp430Adc12ImplP__resultBufferStart + Msp430Adc12ImplP__resultBufferIndex;
          if (Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex > 16) {
            length = 16;
            }
          else {
#line 613
            length = Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex;
            }
#line 614
          do {
              * resultBuffer++ = Msp430Adc12ImplP__HplAdc12__getMem(i);
            }
          while (
#line 616
          ++i < length);
          Msp430Adc12ImplP__resultBufferIndex += length;
          if (overflow || Msp430Adc12ImplP__resultBufferLength == Msp430Adc12ImplP__resultBufferIndex) {
              Msp430Adc12ImplP__stopConversion();
              resultBuffer -= Msp430Adc12ImplP__resultBufferIndex;
              k = Msp430Adc12ImplP__resultBufferIndex - length;
              Msp430Adc12ImplP__resultBufferIndex = 0;
              Msp430Adc12ImplP__SingleChannel__multipleDataReady(Msp430Adc12ImplP__clientID, resultBuffer, 
              overflow ? k : Msp430Adc12ImplP__resultBufferLength);
            }
          else {
#line 625
            if (Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex > 15) {
              return;
              }
            else 
#line 627
              {

                adc12memctl_t memctl = Msp430Adc12ImplP__HplAdc12__getMCtl(0);

#line 630
                memctl.eos = 1;
                Msp430Adc12ImplP__HplAdc12__setMCtl(Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex, memctl);
              }
            }
        }
#line 634
      break;
      case Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT: 
        {
          uint8_t i = 0;

#line 638
          resultBuffer = Msp430Adc12ImplP__resultBufferStart;
          do {
              * resultBuffer++ = Msp430Adc12ImplP__HplAdc12__getMem(i);
            }
          while (
#line 641
          ++i < Msp430Adc12ImplP__resultBufferLength);

          Msp430Adc12ImplP__resultBufferStart = Msp430Adc12ImplP__SingleChannel__multipleDataReady(Msp430Adc12ImplP__clientID, 
          resultBuffer - Msp430Adc12ImplP__resultBufferLength, 
          overflow ? 0 : Msp430Adc12ImplP__resultBufferLength);
          if (!Msp430Adc12ImplP__resultBufferStart) {
            Msp430Adc12ImplP__stopConversion();
            }
#line 648
          break;
        }

      default: 
        Msp430Adc12ImplP__stopConversion();
      break;
    }
}

# 236 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP__HplAdc12__conversionDone(uint16_t iv)
#line 236
{
}

# 112 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void HplAdc12P__HplAdc12__conversionDone(uint16_t iv){
#line 112
  Msp430RefVoltGeneratorP__HplAdc12__conversionDone(iv);
#line 112
  Msp430Adc12ImplP__HplAdc12__conversionDone(iv);
#line 112
}
#line 112
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIORenP__40__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )55U &= ~(0x01 << 0);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port60__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIORenP__40__IO__selectIOFunc();
#line 99
}
#line 99
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIORenP__41__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )55U &= ~(0x01 << 1);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port61__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIORenP__41__IO__selectIOFunc();
#line 99
}
#line 99
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIORenP__42__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )55U &= ~(0x01 << 2);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port62__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIORenP__42__IO__selectIOFunc();
#line 99
}
#line 99
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIORenP__43__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )55U &= ~(0x01 << 3);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port63__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIORenP__43__IO__selectIOFunc();
#line 99
}
#line 99
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIORenP__44__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )55U &= ~(0x01 << 4);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port64__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIORenP__44__IO__selectIOFunc();
#line 99
}
#line 99
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIORenP__45__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )55U &= ~(0x01 << 5);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port65__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIORenP__45__IO__selectIOFunc();
#line 99
}
#line 99
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIORenP__46__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )55U &= ~(0x01 << 6);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port66__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIORenP__46__IO__selectIOFunc();
#line 99
}
#line 99
# 59 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIORenP__47__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )55U &= ~(0x01 << 7);
}

# 99 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port67__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIORenP__47__IO__selectIOFunc();
#line 99
}
#line 99
# 95 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__resetIFGs(void )
#line 95
{
  HplAdc12P__ADC12IV = 0;
  HplAdc12P__ADC12IFG = 0;
}

# 106 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__resetIFGs(void ){
#line 106
  HplAdc12P__HplAdc12__resetIFGs();
#line 106
}
#line 106
# 67 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
inline static error_t AdcP__readDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcP__readDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 178 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t client, error_t result, uint16_t val)
#line 178
{
}

# 66 "/home/johanna/tinyos-main-test/tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0x411bc700, error_t result, AdcP__ReadNow__val_t val){
#line 66
    AdcP__ReadNow__default__readDone(arg_0x411bc700, result, val);
#line 66
}
#line 66
# 411 "/home/johanna/tinyos-main-test/tos/chips/msp430/msp430hardware.h"
  __nesc_atomic_t __nesc_atomic_start(void )
{
  __nesc_atomic_t result = (__read_status_register() & 0x0008) != 0;

#line 414
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}

  void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)
{
   __asm volatile ("" :  :  : "memory");
  if (reenable_interrupts) {
    __nesc_enable_interrupt();
    }
}

# 11 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0032)))  void sig_TIMERA0_VECTOR(void )
#line 11
{
#line 11
  Msp430TimerCommonP__VectorTimerA0__fired();
}

# 180 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired();
    }
}

# 12 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0030)))  void sig_TIMERA1_VECTOR(void )
#line 12
{
#line 12
  Msp430TimerCommonP__VectorTimerA1__fired();
}

#line 13
__attribute((wakeup)) __attribute((interrupt(0x003A)))  void sig_TIMERB0_VECTOR(void )
#line 13
{
#line 13
  Msp430TimerCommonP__VectorTimerB0__fired();
}

# 146 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n)
{
}

# 39 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x4056f850){
#line 39
  switch (arg_0x4056f850) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired();
#line 39
      break;
#line 39
    case 3:
#line 39
      /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired();
#line 39
      break;
#line 39
    case 4:
#line 39
      /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired();
#line 39
      break;
#line 39
    case 6:
#line 39
      /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired();
#line 39
      break;
#line 39
    case 7:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x4056f850);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 147 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

#line 107
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get();
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type )remaining << 0);
}

# 80 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper;
      /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*Counter32khz32C.Transform*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 62 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void )
{




  if (1) {
      /* atomic removed: atomic calls only */
#line 69
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )400U;

#line 72
        do {
#line 72
            t0 = t1;
#line 72
            t1 = * (volatile uint16_t * )400U;
          }
        while (
#line 72
        t0 != t1);
        {
          unsigned int __nesc_temp = 
#line 73
          t1;

#line 73
          return __nesc_temp;
        }
      }
    }
  else 
#line 76
    {
      return * (volatile uint16_t * )400U;
    }
}

# 788 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__congestionBackoff(void )
#line 788
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 789
    {
      CC2420TransmitP__RadioBackoff__requestCongestionBackoff(CC2420TransmitP__m_msg);
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myCongestionBackoff);
    }
#line 792
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "/home/johanna/tinyos-main-test/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 73
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgC__seed = mlcg;
  }
  return mlcg;
}

# 795 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP__acquireSpiResource(void )
#line 795
{
  error_t error = CC2420TransmitP__SpiResource__immediateRequest();

#line 797
  if (error != SUCCESS) {
      CC2420TransmitP__SpiResource__request();
    }
  return error;
}

# 126 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP__SpiResource__isOwner()) {
          CC2420SpiP__m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
            CC2420SpiP__m_holder = id;
          }
        else {
            CC2420SpiP__WorkingState__toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 96 "/home/johanna/tinyos-main-test/tos/system/StateImplP.nc"
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
          StateImplP__state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

# 177 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id)
#line 177
{
  /* atomic removed: atomic calls only */
#line 178
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id && /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 179
        TRUE;

#line 179
        return __nesc_temp;
      }
    else 
#line 180
      {
        unsigned char __nesc_temp = 
#line 180
        FALSE;

#line 180
        return __nesc_temp;
      }
  }
}

#line 133
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  /* atomic removed: atomic calls only */
#line 134
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id) {
        if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING) {
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
            {
              unsigned char __nesc_temp = 
#line 138
              SUCCESS;

#line 138
              return __nesc_temp;
            }
          }
        else {
#line 140
          if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
              /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
              /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 143
                SUCCESS;

#line 143
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 147
  return FAIL;
}

# 170 "/home/johanna/tinyos-main-test/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 182 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static void HplMsp430UsciB0P__Usci__setModeSpi(msp430_spi_union_config_t *config)
#line 182
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 183
    {
      HplMsp430UsciB0P__Usci__disableIntr();
      HplMsp430UsciB0P__Usci__clrIntr();
      HplMsp430UsciB0P__Usci__resetUsci(TRUE);
      HplMsp430UsciB0P__Usci__enableSpi();
      HplMsp430UsciB0P__configSpi(config);
      HplMsp430UsciB0P__Usci__resetUsci(FALSE);
    }
#line 190
    __nesc_atomic_end(__nesc_atomic); }
}

# 107 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
          CC2420SpiP__m_holder = id;
          if (CC2420SpiP__SpiResource__isOwner()) {
              CC2420SpiP__grant__postTask();
            }
          else {
              CC2420SpiP__SpiResource__request();
            }
        }
      else {
          CC2420SpiP__m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 743 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__attemptSend(void )
#line 743
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 747
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          CC2420TransmitP__SFLUSHTX__strobe();
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__CSN__set();
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
          CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
          {
#line 754
            __nesc_atomic_end(__nesc_atomic); 
#line 754
            return;
          }
        }





      CC2420TransmitP__CSN__clr();
      status = CC2420TransmitP__m_cca ? CC2420TransmitP__STXONCCA__strobe() : CC2420TransmitP__STXON__strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP__SNOP__strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP__m_state = congestion ? CC2420TransmitP__S_SAMPLE_CCA : CC2420TransmitP__S_SFD;
      CC2420TransmitP__CSN__set();
    }
#line 773
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP__totalCcaChecks = 0;
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__congestionBackoff();
    }
  else 
#line 779
    {
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__CC2420_ABORT_PERIOD);
    }
}

# 318 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 321
            0;

            {
#line 321
              __nesc_atomic_end(__nesc_atomic); 
#line 321
              return __nesc_temp;
            }
          }
        }
    }
#line 325
    __nesc_atomic_end(__nesc_atomic); }
#line 325
  return CC2420SpiP__SpiByte__write(addr);
}

# 133 "/home/johanna/tinyos-main-test/tos/system/StateImplP.nc"
static bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP__state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 101 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiByte__write(uint8_t tx)
#line 101
{
  uint8_t byte;


  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__tx(tx);
  while (!/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__isRxIntrPending()) ;
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__clrRxIntr();
  byte = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__rx();

  return byte;
}

# 149 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP__attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP__m_requests > 0
   || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
   || !CC2420SpiP__WorkingState__isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP__release = TRUE;
  CC2420SpiP__ChipSpiResource__releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP__release) {
        CC2420SpiP__SpiResource__release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__set(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )25U |= 0x01 << 0;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

#line 49
static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__clr(void )
#line 49
{
#line 49
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 49
    * (volatile uint8_t * )25U &= ~(0x01 << 0);
#line 49
    __nesc_atomic_end(__nesc_atomic); }
}

# 850 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__signalDone(error_t err)
#line 850
{
  /* atomic removed: atomic calls only */
#line 851
  CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
  CC2420TransmitP__abortSpiRelease = FALSE;
  CC2420TransmitP__ChipSpiResource__attemptRelease();
  CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, err);
}

# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode)
#line 49
{
  /* atomic removed: atomic calls only */
#line 50
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents();
  }
  return SUCCESS;
}

# 49 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__clr(void )
#line 49
{
#line 49
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 49
    * (volatile uint8_t * )29U &= ~(0x01 << 6);
#line 49
    __nesc_atomic_end(__nesc_atomic); }
}

#line 48
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__set(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )29U |= 0x01 << 6;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 260 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP__SpiByte__write(tmpData[tmpLen - len]);
    }

  return status;
}

# 171 "/home/johanna/tinyos-main-test/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata, FALSE);
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);
}

# 107 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get();
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type expires;
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type remaining;




  expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;


  remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 <= now) 
    {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt = 0;
    }
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type )now << 5, 
  (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type )remaining << 5);
}

# 80 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void )
{
  /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper;
      /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get();

#line 87
      if (/*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get();
        }
      {
        /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type high_to = high;
        /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 130 "/home/johanna/tinyos-main-test/tos/lib/printf/PrintfP.nc"
  int printfflush(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (PrintfP__state == PrintfP__S_FLUSHING) 
        {
          int __nesc_temp = 
#line 133
          SUCCESS;

          {
#line 133
            __nesc_atomic_end(__nesc_atomic); 
#line 133
            return __nesc_temp;
          }
        }
#line 134
      if (PrintfP__Queue__empty()) 
        {
          int __nesc_temp = 
#line 135
          FAIL;

          {
#line 135
            __nesc_atomic_end(__nesc_atomic); 
#line 135
            return __nesc_temp;
          }
        }
#line 136
      PrintfP__state = PrintfP__S_FLUSHING;
    }
#line 137
    __nesc_atomic_end(__nesc_atomic); }
  PrintfP__sendNext();
  return SUCCESS;
}

#line 119
static void PrintfP__sendNext(void )
#line 119
{
  int i;
  printf_msg_t *m = (printf_msg_t *)PrintfP__Packet__getPayload(&PrintfP__printfMsg, sizeof(printf_msg_t ));
  uint16_t length_to_send = PrintfP__Queue__size() < sizeof(printf_msg_t ) ? PrintfP__Queue__size() : sizeof(printf_msg_t );

#line 123
  memset(m->buffer, 0, sizeof(printf_msg_t ));
  for (i = 0; i < length_to_send; i++) 
    __nesc_hton_uint8(m->buffer[i].nxdata, PrintfP__Queue__dequeue());
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 135 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 135
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 53 "/home/johanna/tinyos-main-test/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(msg, dest);
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(msg, 100);
  return /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(msg, len);
}

# 172 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

#line 148
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
#line 148
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 150
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

#line 68
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 518 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 518
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 519
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 525
    __nesc_atomic_end(__nesc_atomic); }
}

# 96 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static error_t CC2420CsmaP__SplitControl__stop(void )
#line 96
{
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPING);
      CC2420CsmaP__shutdown();
      return SUCCESS;
    }
  else {
#line 102
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPED)) {
        return EALREADY;
      }
    else {
#line 105
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_TRANSMITTING)) {
          CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPING);

          return SUCCESS;
        }
      else {
#line 110
        if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
            return SUCCESS;
          }
        }
      }
    }
#line 114
  return EBUSY;
}

# 179 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP__StdControl__stop(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;
      CC2420TransmitP__BackoffTimer__stop();
      CC2420TransmitP__CaptureSFD__disable();
      CC2420TransmitP__SpiResource__release();
      CC2420TransmitP__CSN__set();
    }
#line 186
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 171 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static error_t CC2420ReceiveP__StdControl__stop(void )
#line 171
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__InterruptFIFOP__disable();
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 813
static void CC2420ReceiveP__reset_state(void )
#line 813
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 815
  CC2420ReceiveP__receivingPacket = FALSE;
  CC2420ReceiveP__m_timestamp_head = 0;
  CC2420ReceiveP__m_timestamp_size = 0;
  CC2420ReceiveP__m_missed_packets = 0;
}

# 216 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__stopVReg(void )
#line 216
{
  CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;
  CC2420ControlP__RSTN__clr();
  CC2420ControlP__VREN__clr();
  CC2420ControlP__RSTN__set();
  return SUCCESS;
}

# 107 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static void /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__set_alarm(void )
{
  /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type now = /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__Counter__get();
#line 109
  /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type expires;
#line 109
  /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type remaining;




  expires = /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_t0 + /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_dt;


  remaining = (/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__to_size_type )(expires - now);


  if (/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_t0 <= now) 
    {
      if (expires >= /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__MAX_DELAY) 
    {
      /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_t0 = now + /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__MAX_DELAY;
      /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_dt = remaining - /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__MAX_DELAY;
      remaining = /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__MAX_DELAY;
    }
  else 
    {
      /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_t0 += /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_dt;
      /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__m_dt = 0;
    }
  /*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__AlarmFrom__startAt((/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__from_size_type )now << 5, 
  (/*SenseNodeAppC.AlarmMilli16C.Transform*/TransformAlarmC__2__from_size_type )remaining << 5);
}

# 80 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli16C.Transform*/TransformCounterC__2__to_size_type /*CounterMilli16C.Transform*/TransformCounterC__2__Counter__get(void )
{
  /*CounterMilli16C.Transform*/TransformCounterC__2__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli16C.Transform*/TransformCounterC__2__upper_count_type high = /*CounterMilli16C.Transform*/TransformCounterC__2__m_upper;
      /*CounterMilli16C.Transform*/TransformCounterC__2__from_size_type low = /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__get();

#line 87
      if (/*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli16C.Transform*/TransformCounterC__2__CounterFrom__get();
        }
      {
        /*CounterMilli16C.Transform*/TransformCounterC__2__to_size_type high_to = high;
        /*CounterMilli16C.Transform*/TransformCounterC__2__to_size_type low_to = low >> /*CounterMilli16C.Transform*/TransformCounterC__2__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli16C.Transform*/TransformCounterC__2__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 14 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0038)))  void sig_TIMERB1_VECTOR(void )
#line 14
{
#line 14
  Msp430TimerCommonP__VectorTimerB1__fired();
}

# 63 "/home/johanna/tinyos-main-test/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 48 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__set(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )49U |= 0x01 << 5;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 134 "/home/johanna/tinyos-main-test/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/home/johanna/tinyos-main-test/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x404ac5c0){
#line 75
  switch (arg_0x404ac5c0) {
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__startDone_task:
#line 75
      CC2420CsmaP__startDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__stopDone_task:
#line 75
      CC2420CsmaP__stopDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__sendDone_task:
#line 75
      CC2420CsmaP__sendDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__sync:
#line 75
      CC2420ControlP__sync__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__syncDone:
#line 75
      CC2420ControlP__syncDone__runTask();
#line 75
      break;
#line 75
    case CC2420SpiP__grant:
#line 75
      CC2420SpiP__grant__runTask();
#line 75
      break;
#line 75
    case /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task:
#line 75
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case CC2420ReceiveP__receiveDone_task:
#line 75
      CC2420ReceiveP__receiveDone_task__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case CC2420TinyosNetworkP__grantTask:
#line 75
      CC2420TinyosNetworkP__grantTask__runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask:
#line 75
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask:
#line 75
      /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    case PrintfP__retrySend:
#line 75
      PrintfP__retrySend__runTask();
#line 75
      break;
#line 75
    case AdcP__readDone:
#line 75
      AdcP__readDone__runTask();
#line 75
      break;
#line 75
    case /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case Msp430RefVoltArbiterImplP__switchOff:
#line 75
      Msp430RefVoltArbiterImplP__switchOff__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x404ac5c0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 147 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__state_t nextState)
#line 147
{
  error_t result;

  if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__GENERATOR_OFF) {
    result = EALREADY;
    }
  else {
#line 152
    if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE) {
        result = SUCCESS;
        Msp430RefVoltGeneratorP__m_state = nextState;
        Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(20);
      }
    else {
#line 156
      if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING) {
          if ((result = Msp430RefVoltGeneratorP__switchOff()) == SUCCESS) {

              Msp430RefVoltGeneratorP__state_t oldState = Msp430RefVoltGeneratorP__m_state;

#line 160
              Msp430RefVoltGeneratorP__SwitchOnTimer__stop();
              Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__GENERATOR_OFF;
              Msp430RefVoltGeneratorP__signalStartDone(oldState, FAIL);
              Msp430RefVoltGeneratorP__signalStopDone(nextState, SUCCESS);
            }
        }
      else {
#line 165
        if (Msp430RefVoltGeneratorP__m_state == nextState) {
          result = SUCCESS;
          }
        else {
#line 168
          result = EBUSY;
          }
        }
      }
    }
#line 170
  return result;
}

# 144 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 259 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP__switchOff(void )
#line 259
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 260
    {
      if (Msp430RefVoltGeneratorP__HplAdc12__isBusy()) {
          {
            unsigned char __nesc_temp = 
#line 262
            EBUSY;

            {
#line 262
              __nesc_atomic_end(__nesc_atomic); 
#line 262
              return __nesc_temp;
            }
          }
        }
      else 
#line 264
        {
          adc12ctl0_t ctl0 = Msp430RefVoltGeneratorP__HplAdc12__getCtl0();

#line 266
          ctl0.enc = 0;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          ctl0.refon = 0;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          {
            unsigned char __nesc_temp = 
#line 270
            SUCCESS;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
}

#line 173
static void Msp430RefVoltGeneratorP__signalStartDone(Msp430RefVoltGeneratorP__state_t state, error_t result)
#line 173
{
  if (state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING) {
    Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(result);
    }
  else {
#line 177
    Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(result);
    }
}

# 80 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static void AdcP__ResourceRead__granted(uint8_t client)
{

  error_t result = AdcP__configure(client);

#line 84
  if (result == SUCCESS) {
      AdcP__state = AdcP__STATE_READ;
      result = AdcP__SingleChannel__getData(client);
    }
  else 
#line 87
    {
      AdcP__ResourceRead__release(client);
      AdcP__Read__readDone(client, result, 0);
    }
}

# 137 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void )
#line 137
{
  /* atomic removed: atomic calls only */
#line 138
  {
    if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state != /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 140
        /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;

#line 140
        return __nesc_temp;
      }
#line 141
    {
      unsigned char __nesc_temp = 
#line 141
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId;

#line 141
      return __nesc_temp;
    }
  }
}

# 91 "/home/johanna/tinyos-main-test/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(int mode)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(0x0020 | 0x0010)) | ((mode << 4) & (0x0020 | 0x0010));
}

# 121 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static error_t Msp430RefVoltArbiterImplP__ClientResource__release(uint8_t client)
{
  error_t error;

#line 124
  if (Msp430RefVoltArbiterImplP__syncOwner == client) {
    Msp430RefVoltArbiterImplP__switchOff__postTask();
    }
#line 126
  error = Msp430RefVoltArbiterImplP__AdcResource__release(client);
#line 138
  return error;
}

# 97 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 75 "/home/johanna/tinyos-main-test/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 144 "SenseNodeC.nc"
static void SenseNodeC__VoltageRead__readDone(error_t result, uint16_t val)
#line 144
{

  uint32_t soil_moisture = 0;

  if (result == SUCCESS) {


      if (val < 1502) {
          soil_moisture = 10 * val - 1;
        }
      else {
#line 154
        if (val < 1774 && val >= 1502) {
            soil_moisture = 25 * val - 17.5;
          }
        else {
#line 157
          if (val < 2485 && val >= 1774) {
              soil_moisture = 48.08 * val - 47.5;
            }
          else {
#line 160
            if (val < 3004 && val >= 2485) {
                soil_moisture = 26.32 * val - 7.89;
              }
            else {
                printf("Value out of range.\n");
                printfflush();
              }
            }
          }
        }
#line 169
      printf("Soil Moisture: %lu \n", soil_moisture);
      printfflush();


      SenseNodeC__sensor_val = soil_moisture;


      SenseNodeC__AMControl__start();
    }
}

# 81 "/home/johanna/tinyos-main-test/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static error_t CC2420CsmaP__SplitControl__start(void )
#line 81
{
  if (CC2420CsmaP__SplitControlState__requestState(CC2420CsmaP__S_STARTING) == SUCCESS) {
      CC2420CsmaP__CC2420Power__startVReg();
      return SUCCESS;
    }
  else {
#line 86
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
        return EALREADY;
      }
    else {
#line 89
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 93
  return EBUSY;
}

# 180 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static void Msp430RefVoltGeneratorP__signalStopDone(Msp430RefVoltGeneratorP__state_t state, error_t result)
#line 180
{
  if (state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING) {
    Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(result);
    }
  else {
#line 184
    Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(result);
    }
}

# 71 "/home/johanna/tinyos-main-test/tos/system/SimpleArbiterP.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = id;
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 78
            SUCCESS;

            {
#line 78
              __nesc_atomic_end(__nesc_atomic); 
#line 78
              return __nesc_temp;
            }
          }
        }
#line 80
      {
        unsigned char __nesc_temp = 
#line 80
        /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

        {
#line 80
          __nesc_atomic_end(__nesc_atomic); 
#line 80
          return __nesc_temp;
        }
      }
    }
#line 83
    __nesc_atomic_end(__nesc_atomic); }
}

# 95 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__state_t targetState)
#line 95
{
  error_t result;

  if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE) {
      if (targetState == Msp430RefVoltGeneratorP__m_state) {
          result = EALREADY;
        }
      else {
#line 101
        if ((result = Msp430RefVoltGeneratorP__switchOn(targetState)) == SUCCESS) {
            if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE) {
                Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING;
                Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(17);
              }
            else 
#line 105
              {
                Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING;
                Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(70);
              }
          }
        }
    }
  else {
#line 110
    if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__GENERATOR_OFF) {
        if ((result = Msp430RefVoltGeneratorP__switchOn(targetState)) == SUCCESS) {
            if (targetState == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE && Msp430RefVoltGeneratorP__SwitchOffSettleTimer__isRunning()) {
                Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(70);
              }
            else {
              Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(17);
              }
#line 117
            Msp430RefVoltGeneratorP__SwitchOffSettleTimer__stop();
            Msp430RefVoltGeneratorP__m_state = targetState + 2;
          }
      }
    else {
#line 120
      if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING) {
          if ((result = Msp430RefVoltGeneratorP__switchOn(targetState)) == SUCCESS) {

              Msp430RefVoltGeneratorP__state_t oldState = Msp430RefVoltGeneratorP__m_state;

#line 124
              Msp430RefVoltGeneratorP__SwitchOffTimer__stop();
              Msp430RefVoltGeneratorP__signalStopDone(oldState, FAIL);
              if (targetState == Msp430RefVoltGeneratorP__m_state - 4) {
                  Msp430RefVoltGeneratorP__m_state = targetState;
                  Msp430RefVoltGeneratorP__signalStartDone(targetState, SUCCESS);
                }
              else {
#line 130
                if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING) {
                    Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING;
                    Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(17);
                  }
                else {
                    Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING;
                    Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(70);
                  }
                }
            }
        }
      else {
#line 139
        if (Msp430RefVoltGeneratorP__m_state == targetState + 2) {
          result = SUCCESS;
          }
        else {
#line 142
          result = EBUSY;
          }
        }
      }
    }
#line 144
  return result;
}

#line 240
static error_t Msp430RefVoltGeneratorP__switchOn(uint8_t level)
#line 240
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 241
    {
      if (Msp430RefVoltGeneratorP__HplAdc12__isBusy()) {
          {
            unsigned char __nesc_temp = 
#line 243
            EBUSY;

            {
#line 243
              __nesc_atomic_end(__nesc_atomic); 
#line 243
              return __nesc_temp;
            }
          }
        }
      else 
#line 245
        {
          adc12ctl0_t ctl0 = Msp430RefVoltGeneratorP__HplAdc12__getCtl0();

#line 247
          ctl0.enc = 0;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          ctl0.refon = 1;


          ctl0.r2_5v = level - 1;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          {
            unsigned char __nesc_temp = 
#line 254
            SUCCESS;

            {
#line 254
              __nesc_atomic_end(__nesc_atomic); 
#line 254
              return __nesc_temp;
            }
          }
        }
    }
#line 258
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/johanna/tinyos-main-test/tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 88 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static void /*Msp430Uart0P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id)
#line 88
{
  msp430_uart_union_config_t *config = /*Msp430Uart0P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(id);

#line 90
  /*Msp430Uart0P.UartP*/Msp430UartP__0__m_byte_time = config->uartConfig.ubr / 2;
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__setModeUart(config);
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__enableIntr();
}

# 174 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void )
#line 174
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask();
        }
    }
}

# 142 "/home/johanna/tinyos-main-test/tos/lib/printf/PrintfP.nc"
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error)
#line 142
{
  if (error == SUCCESS) {
      if (PrintfP__Queue__size() > 0) {
        PrintfP__sendNext();
        }
      else {
#line 146
        PrintfP__state = PrintfP__S_STARTED;
        }
    }
  else {
#line 148
    PrintfP__retrySend__postTask();
    }
}

# 177 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static bool /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(uint8_t id)
#line 177
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 178
    {
      if (/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId == id && /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 179
          TRUE;

          {
#line 179
            __nesc_atomic_end(__nesc_atomic); 
#line 179
            return __nesc_temp;
          }
        }
      else 
#line 180
        {
          unsigned char __nesc_temp = 
#line 180
          FALSE;

          {
#line 180
            __nesc_atomic_end(__nesc_atomic); 
#line 180
            return __nesc_temp;
          }
        }
    }
#line 183
    __nesc_atomic_end(__nesc_atomic); }
}

# 357 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 98 "/home/johanna/tinyos-main-test/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 148 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430UartP.nc"
static error_t /*Msp430Uart0P.UartP*/Msp430UartP__0__UartStream__send(uint8_t id, uint8_t *buf, uint16_t len)
#line 148
{
  if (/*Msp430Uart0P.UartP*/Msp430UartP__0__UsciResource__isOwner(id) == FALSE) {
    return FAIL;
    }
#line 151
  if (len == 0) {
    return FAIL;
    }
  else {
#line 153
    if (/*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 155
  /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_buf = buf;
  /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_len = len;
  /*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_pos = 0;
  /*Msp430Uart0P.UartP*/Msp430UartP__0__current_owner = id;
  /*Msp430Uart0P.UartP*/Msp430UartP__0__Usci__tx(buf[/*Msp430Uart0P.UartP*/Msp430UartP__0__m_tx_pos++]);
  return SUCCESS;
}

# 60 "/home/johanna/tinyos-main-test/tos/system/FcfsResourceQueueC.nc"
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

      {
#line 61
        __nesc_atomic_end(__nesc_atomic); 
#line 61
        return __nesc_temp;
      }
    }
#line 63
    __nesc_atomic_end(__nesc_atomic); }
}

# 74 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static void CC2420ActiveMessageP__RadioResource__granted(void )
#line 74
{
  uint8_t rc;
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(CC2420ActiveMessageP__pending_message);

  CC2420ActiveMessageP__SendNotifier__aboutToSend(__nesc_ntoh_leuint8(header->type.nxdata), __nesc_ntoh_leuint16(header->dest.nxdata), CC2420ActiveMessageP__pending_message);
  rc = CC2420ActiveMessageP__SubSend__send(CC2420ActiveMessageP__pending_message, CC2420ActiveMessageP__pending_length);
  if (rc != SUCCESS) {
      CC2420ActiveMessageP__RadioResource__release();
      CC2420ActiveMessageP__AMSend__sendDone(__nesc_ntoh_leuint8(header->type.nxdata), CC2420ActiveMessageP__pending_message, rc);
    }
}

# 80 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len)
#line 80
{
  CC2420TinyosNetworkP__CC2420Packet__setNetwork(msg, 0x3f);
  CC2420TinyosNetworkP__m_busy_client = CC2420TinyosNetworkP__CLIENT_AM;
  return CC2420TinyosNetworkP__SubSend__send(msg, len);
}

# 90 "/home/johanna/tinyos-main-test/tos/chips/cc2420/packet/CC2420PacketP.nc"
static uint8_t * CC2420PacketP__getNetwork(message_t * msg)
#line 90
{
  cc2420_header_t *hdr = CC2420PacketP__CC2420PacketBody__getHeader(msg);
  int offset;

  offset = CC2420PacketP__getAddressLength((__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3) + 
  CC2420PacketP__getAddressLength((__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3) + 
  (unsigned short )& ((cc2420_header_t *)0)->dest;

  return (uint8_t *)hdr + offset;
}

# 825 "/home/johanna/tinyos-main-test/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__loadTXFIFO(void )
#line 825
{
  cc2420_header_t *header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg)->tx_power.nxdata);

  if (!tx_power) {
      tx_power = 31;
    }

  CC2420TransmitP__CSN__clr();

  if (CC2420TransmitP__m_tx_power != tx_power) {
      CC2420TransmitP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP__m_tx_power = tx_power;

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8(header->length.nxdata) - 1;

#line 846
    CC2420TransmitP__TXFIFO__write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.nxdata) - 1);
  }
}

# 305 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

# 146 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len)
#line 148
{

  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_client = id;
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf = tx_buf;
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf = rx_buf;
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_len = len;
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos = 0;

  if (len) {
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__enableRxIntr();
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__continueOp();
    }
  else {
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__postTask();
    }

  return SUCCESS;
}

#line 123
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__continueOp(void )
#line 123
{

  uint8_t end;
  uint8_t tmp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 128
    {
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__tx(/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf ? /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf[/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos] : 0);

      end = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos + /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SPI_ATOMIC_SIZE;
      if (end > /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_len) {
        end = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_len;
        }
      while (++/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos < end) {
          while (!/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__isRxIntrPending()) ;
          tmp = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__rx();
          if (/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf) {
            /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf[/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos - 1] = tmp;
            }
#line 140
          /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__tx(/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf ? /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf[/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos] : 0);
        }
    }
#line 142
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/home/johanna/tinyos-main-test/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void ){
#line 56
  StateImplP__State__toIdle(2U);
#line 56
}
#line 56
# 189 "/home/johanna/tinyos-main-test/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

#line 174
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 164 "/home/johanna/tinyos-main-test/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg)
#line 164
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 166
  return __nesc_ntoh_leuint8(header->type.nxdata);
}

#line 139
static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg)
#line 139
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

#line 141
  return __nesc_ntoh_leuint16(header->dest.nxdata);
}

#line 87
static error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 89
{
  unsigned char *__nesc_temp48;
#line 90
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg);

  if (len > CC2420ActiveMessageP__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_leuint8(header->type.nxdata, id);
  __nesc_hton_leuint16(header->dest.nxdata, addr);
  __nesc_hton_leuint16(header->destpan.nxdata, CC2420ActiveMessageP__CC2420Config__getPanAddr());
  __nesc_hton_leuint16(header->src.nxdata, CC2420ActiveMessageP__AMPacket__address());
  (__nesc_temp48 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp48, __nesc_ntoh_leuint16(__nesc_temp48) | (((1 << IEEE154_FCF_INTRAPAN) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));
  __nesc_hton_leuint8(header->length.nxdata, len + CC2420_SIZE);

  if (CC2420ActiveMessageP__RadioResource__immediateRequest() == SUCCESS) {
      error_t rc;

#line 107
      CC2420ActiveMessageP__SendNotifier__aboutToSend(id, addr, msg);

      rc = CC2420ActiveMessageP__SubSend__send(msg, len);
      if (rc != SUCCESS) {
          CC2420ActiveMessageP__RadioResource__release();
        }

      return rc;
    }
  else 
#line 115
    {
      CC2420ActiveMessageP__pending_length = len;
      CC2420ActiveMessageP__pending_message = msg;
      return CC2420ActiveMessageP__RadioResource__request();
    }
}

# 106 "/home/johanna/tinyos-main-test/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 106
{
  am_addr_t myAddr;

#line 108
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    myAddr = ActiveMessageAddressC__addr;
#line 108
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 264 "SenseNodeC.nc"
static void SenseNodeC__AMSend__sendDone(message_t *bufPtr, error_t error)
#line 264
{
  if (&SenseNodeC__packet == bufPtr) {
      SenseNodeC__locked = FALSE;
      if (!SenseNodeC__listen_flag) {
          SenseNodeC__AMControl__stop();
        }
    }
}

# 73 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 147 "/home/johanna/tinyos-main-test/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 = t0;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt = dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

# 302 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void )
#line 302
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 303
    {
      unsigned int __nesc_temp = 
#line 303
      CC2420ControlP__m_short_addr;

      {
#line 303
        __nesc_atomic_end(__nesc_atomic); 
#line 303
        return __nesc_temp;
      }
    }
#line 305
    __nesc_atomic_end(__nesc_atomic); }
}

# 154 "/home/johanna/tinyos-main-test/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 769 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__waitForNextPacket(void )
#line 769
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 770
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
          CC2420ReceiveP__SpiResource__release();
          {
#line 773
            __nesc_atomic_end(__nesc_atomic); 
#line 773
            return;
          }
        }
      CC2420ReceiveP__receivingPacket = FALSE;
#line 788
      if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

          if (CC2420ReceiveP__m_missed_packets) {
              CC2420ReceiveP__m_missed_packets--;
            }





          CC2420ReceiveP__beginReceive();
        }
      else 
        {

          CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
          CC2420ReceiveP__m_missed_packets = 0;
          CC2420ReceiveP__SpiResource__release();
        }
    }
#line 807
    __nesc_atomic_end(__nesc_atomic); }
}

#line 716
static void CC2420ReceiveP__beginReceive(void )
#line 716
{
  CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
  /* atomic removed: atomic calls only */
#line 718
  CC2420ReceiveP__receivingPacket = TRUE;
  if (CC2420ReceiveP__SpiResource__isOwner()) {
      CC2420ReceiveP__receive();
    }
  else {
#line 722
    if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
        CC2420ReceiveP__receive();
      }
    else {
        CC2420ReceiveP__SpiResource__request();
      }
    }
}

#line 759
static void CC2420ReceiveP__receive(void )
#line 759
{
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__RXFIFO__beginRead((uint8_t *)CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf), 1);
}

# 189 "/home/johanna/tinyos-main-test/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

#line 329
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP__m_addr & 0x40) {
      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

# 733 "/home/johanna/tinyos-main-test/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__flush(void )
#line 733
{








  CC2420ReceiveP__reset_state();

  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

# 479 "/home/johanna/tinyos-main-test/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP__writeFsctrl(void )
#line 479
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 482
    {
      channel = CC2420ControlP__m_channel;
    }
#line 484
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP__writeMdmctrl0(void )
#line 496
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 497
    {
      CC2420ControlP__MDMCTRL0__write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP__addressRecognition && CC2420ControlP__hwAddressRecognition ? 1 : 0) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 506
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP__writeId(void )
#line 515
{
  nxle_uint16_t id[6];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 518
    {

      memcpy((uint8_t *)id, CC2420ControlP__m_ext_addr.data, 8);
      __nesc_hton_leuint16(id[4].nxdata, CC2420ControlP__m_pan);
      __nesc_hton_leuint16(id[5].nxdata, CC2420ControlP__m_short_addr);
    }
#line 523
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__IEEEADR__write(0, (uint8_t *)&id, 12);
}

# 112 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/McuSleepC.nc"
static void McuSleepC__McuSleep__sleep(void )
#line 112
{
  uint16_t temp;

#line 114
  if (McuSleepC__dirty) {
      McuSleepC__computePowerState();
    }

  temp = McuSleepC__msp430PowerBits[McuSleepC__powerState] | 0x0008;
   __asm volatile ("bis  %0, r2" :  : "m"(temp));

   __asm volatile ("" :  :  : "memory");
  __nesc_disable_interrupt();
}

# 94 "/home/johanna/tinyos-main-test/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static void *CC2420TinyosNetworkP__ActiveSend__getPayload(message_t *msg, uint8_t len)
#line 94
{
  if (len <= CC2420TinyosNetworkP__ActiveSend__maxPayloadLength()) {
      return msg->data;
    }
  else 
#line 97
    {
      return (void *)0;
    }
}

# 105 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
static void HplAdc12P__HplAdc12__stopConversion(void )
#line 105
{

  uint16_t ctl1 = HplAdc12P__ADC12CTL1;

#line 108
  HplAdc12P__ADC12CTL1 &= ~(0x0002 | 0x0004);
  HplAdc12P__ADC12CTL0 &= ~(0x001 + 0x002);
  HplAdc12P__ADC12CTL0 &= ~0x010;
  HplAdc12P__ADC12CTL1 |= ctl1 & (0x0002 | 0x0004);
}

# 42 "/home/johanna/tinyos-main-test/tos/platforms/z1/LocalIeeeEui64C.nc"
static ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void )
#line 42
{
  ieee_eui64_t id;

  id.data[0] = 0x00;
  id.data[1] = 0x12;
  id.data[2] = 0x6d;




  id.data[3] = 'L';
  id.data[4] = 'O';

  id.data[5] = 0;
  id.data[6] = TOS_NODE_ID >> 8;
  id.data[7] = TOS_NODE_ID & 0xff;
  return id;
}

# 64 "/home/johanna/tinyos-main-test/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0024)))  void sig_PORT1_VECTOR(void )
{
  volatile int n = P1IFG & P1IE;

  if (n & (1 << 0)) {
#line 68
      HplMsp430InterruptP__Port10__fired();
#line 68
      return;
    }
#line 69
  if (n & (1 << 1)) {
#line 69
      HplMsp430InterruptP__Port11__fired();
#line 69
      return;
    }
#line 70
  if (n & (1 << 2)) {
#line 70
      HplMsp430InterruptP__Port12__fired();
#line 70
      return;
    }
#line 71
  if (n & (1 << 3)) {
#line 71
      HplMsp430InterruptP__Port13__fired();
#line 71
      return;
    }
#line 72
  if (n & (1 << 4)) {
#line 72
      HplMsp430InterruptP__Port14__fired();
#line 72
      return;
    }
#line 73
  if (n & (1 << 5)) {
#line 73
      HplMsp430InterruptP__Port15__fired();
#line 73
      return;
    }
#line 74
  if (n & (1 << 6)) {
#line 74
      HplMsp430InterruptP__Port16__fired();
#line 74
      return;
    }
#line 75
  if (n & (1 << 7)) {
#line 75
      HplMsp430InterruptP__Port17__fired();
#line 75
      return;
    }
}

#line 169
__attribute((wakeup)) __attribute((interrupt(0x0026)))  void sig_PORT2_VECTOR(void )
{
  volatile int n = P2IFG & P2IE;

  if (n & (1 << 0)) {
#line 173
      HplMsp430InterruptP__Port20__fired();
#line 173
      return;
    }
#line 174
  if (n & (1 << 1)) {
#line 174
      HplMsp430InterruptP__Port21__fired();
#line 174
      return;
    }
#line 175
  if (n & (1 << 2)) {
#line 175
      HplMsp430InterruptP__Port22__fired();
#line 175
      return;
    }
#line 176
  if (n & (1 << 3)) {
#line 176
      HplMsp430InterruptP__Port23__fired();
#line 176
      return;
    }
#line 177
  if (n & (1 << 4)) {
#line 177
      HplMsp430InterruptP__Port24__fired();
#line 177
      return;
    }
#line 178
  if (n & (1 << 5)) {
#line 178
      HplMsp430InterruptP__Port25__fired();
#line 178
      return;
    }
#line 179
  if (n & (1 << 6)) {
#line 179
      HplMsp430InterruptP__Port26__fired();
#line 179
      return;
    }
#line 180
  if (n & (1 << 7)) {
#line 180
      HplMsp430InterruptP__Port27__fired();
#line 180
      return;
    }
}

# 52 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciAB0RawInterruptsP.nc"
__attribute((wakeup)) __attribute((interrupt(0x002E)))  void sig_USCIAB0RX_VECTOR(void )
#line 52
{
  uint8_t temp;

#line 54
  if (IFG2 & 0x01) {
      temp = UCA0RXBUF;
      HplMsp430UsciAB0RawInterruptsP__UsciA__rxDone(temp);
    }
  if (IFG2 & 0x04) {
      temp = UCB0RXBUF;
      HplMsp430UsciAB0RawInterruptsP__UsciB__rxDone(temp);
    }
}

# 153 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static bool /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 156
        FALSE;

#line 156
        return __nesc_temp;
      }
  }
#line 158
  return TRUE;
}

# 412 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 91 "/home/johanna/tinyos-main-test/tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b)
#line 91
{
  crc = (uint8_t )(crc >> 8) | (crc << 8);
  crc ^= b;
  crc ^= (uint8_t )(crc & 0xff) >> 4;
  crc ^= crc << 12;
  crc ^= (crc & 0xff) << 5;
  return crc;
}

# 296 "/home/johanna/tinyos-main-test/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 166 "/home/johanna/tinyos-main-test/tos/system/ArbiterP.nc"
static uint8_t /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__state != /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsciShareA0P.ArbiterC.Arbiter*/ArbiterP__1__resId;

#line 170
      return __nesc_temp;
    }
  }
}

#line 153
static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 156
        FALSE;

#line 156
        return __nesc_temp;
      }
  }
#line 158
  return TRUE;
}






static uint8_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state != /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId;

#line 170
      return __nesc_temp;
    }
  }
}

# 64 "/home/johanna/tinyos-main-test/tos/chips/msp430/x2xxx/usci/HplMsp430UsciAB0RawInterruptsP.nc"
__attribute((wakeup)) __attribute((interrupt(0x002C)))  void sig_USCIAB0TX_VECTOR(void )
#line 64
{
  if ((IFG2 & 0x02) | (IFG2 & 0x01)) {
      HplMsp430UsciAB0RawInterruptsP__UsciA__txDone();
    }
  if ((IFG2 & 0x08) | (IFG2 & 0x04)) {
      HplMsp430UsciAB0RawInterruptsP__UsciB__txDone();
    }
}

# 118 "/home/johanna/tinyos-main-test/tos/lib/serial/HdlcTranslateC.nc"
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  /* atomic removed: atomic calls only */
#line 120
  {
    if (HdlcTranslateC__state.sendEscape) {
        HdlcTranslateC__state.sendEscape = 0;
        HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
        HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
      }
    else {
        HdlcTranslateC__SerialFrameComm__putDone();
      }
  }
}

#line 106
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 107 "/home/johanna/tinyos-main-test/tos/lib/printf/PutcharP.nc"
__attribute((noinline))   int putchar(int c)
#line 107
{
#line 119
  return PutcharP__Putchar__putchar(c);
}

# 120 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/HplAdc12P.nc"
__attribute((wakeup)) __attribute((interrupt(0x002A)))  void sig_ADC12_VECTOR(void )
#line 120
{
  HplAdc12P__HplAdc12__conversionDone(HplAdc12P__ADC12IV);
}

# 513 "/home/johanna/tinyos-main-test/tos/platforms/z1/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static void Msp430Adc12ImplP__stopConversion(void )
{
  uint8_t i;

  if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__USE_TIMERA) {
    Msp430Adc12ImplP__TimerA__setMode(MSP430TIMER_STOP_MODE);
    }
  Msp430Adc12ImplP__resetAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(0).inch);
  if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__MULTI_CHANNEL) {
      for (i = 1; i < Msp430Adc12ImplP__numChannels; i++) 
        Msp430Adc12ImplP__resetAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(i).inch);
    }
  /* atomic removed: atomic calls only */
#line 525
  {
    Msp430Adc12ImplP__HplAdc12__stopConversion();
    Msp430Adc12ImplP__HplAdc12__resetIFGs();
    Msp430Adc12ImplP__state &= ~Msp430Adc12ImplP__ADC_BUSY;
  }
}

#line 169
static void Msp430Adc12ImplP__resetAdcPin(uint8_t inch)
{

  switch (inch) 
    {
      case 0: Msp430Adc12ImplP__Port60__selectIOFunc();
#line 174
      break;
      case 1: Msp430Adc12ImplP__Port61__selectIOFunc();
#line 175
      break;
      case 2: Msp430Adc12ImplP__Port62__selectIOFunc();
#line 176
      break;
      case 3: Msp430Adc12ImplP__Port63__selectIOFunc();
#line 177
      break;
      case 4: Msp430Adc12ImplP__Port64__selectIOFunc();
#line 178
      break;
      case 5: Msp430Adc12ImplP__Port65__selectIOFunc();
#line 179
      break;
      case 6: Msp430Adc12ImplP__Port66__selectIOFunc();
#line 180
      break;
      case 7: Msp430Adc12ImplP__Port67__selectIOFunc();
#line 181
      break;
    }
}

# 142 "/home/johanna/tinyos-main-test/tos/chips/msp430/adc12/AdcP.nc"
static error_t AdcP__SingleChannel__singleDataReady(uint8_t client, uint16_t data)
{
  switch (AdcP__state) 
    {
      case AdcP__STATE_READ: 
        AdcP__owner = client;
      AdcP__value = data;
      AdcP__readDone__postTask();
      break;
      case AdcP__STATE_READNOW: 
        AdcP__ReadNow__readDone(client, SUCCESS, data);
      break;
      default: 

        break;
    }
  return SUCCESS;
}

