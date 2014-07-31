
#ifndef WMT_TSH_201010191758
#define WMT_TSH_201010191758

#include <linux/platform_device.h>
#include <linux/types.h>
#include <linux/device.h>
#include <linux/suspend.h>
#include <linux/i2c.h>


//#define DEBUG_WMT_TS
#ifdef DEBUG_WMT_TS
#undef dbg
#define dbg(fmt, args...) printk(KERN_ALERT "[%s]: " fmt, __FUNCTION__ , ## args)

//#define dbg(fmt, args...) if (kpadall_isrundbg()) printk(KERN_ALERT "[%s]: " fmt, __FUNCTION__, ## args)

#else
#define dbg(fmt, args...) 
#endif

#undef errlog
#undef klog
#define errlog(fmt, args...) printk("[%s]: " fmt, __FUNCTION__, ## args)
#define klog(fmt, args...) printk("[%s]: " fmt, __FUNCTION__, ## args)

#define WMT_TS_I2C_NAME    "zet6221-ts"
#define WMT_TS_I2C_ADDR    0x76


#ifndef dim
#define dim(x) (sizeof(x) / sizeof(x[0]))
#endif

extern int earlysus_en;

//////////////////////////////data type///////////////////////////
typedef struct {
	short pressure;
	short x;
	short y;
	//short millisecs;
} TS_EVENT;

struct wmtts_device
{
	//data
	char* driver_name;
	char* ts_id;
	//function
	int (*init)(void);
	int (*probe)(struct platform_device *platdev);
	int (*remove)(struct platform_device *pdev);
	void (*exit)(void);
	int (*suspend)(struct platform_device *pdev, pm_message_t state);
	int (*resume)(struct platform_device *pdev);
	int (*capacitance_calibrate)(void);
	int (*wait_penup)(struct wmtts_device*tsdev); // waiting untill penup
	int penup; // 0--pendown;1--penup
	
};

enum {
    ZET6221 = 0,
    ZET6231,
	ZET6223,
	ZET6251,
};
extern u8 ic_model;
extern unsigned char* flash_buffer;
extern int l_fwlen;


//////////////////////////function interface/////////////////////////
extern  int wmt_ts_get_gpionum(void);
extern  int wmt_ts_iscalibrating(void);
extern  int wmt_ts_get_resolvX(void);
extern  int wmt_ts_get_resolvY(void);
extern int wmt_set_gpirq(int type);
extern int wmt_get_tsirqnum(void);
extern int wmt_disable_gpirq(void);
extern int wmt_enable_gpirq(void);
extern int wmt_is_tsirq_enable(void);
extern int wmt_is_tsint(void);
extern void wmt_clr_int(void);
extern void wmt_tsreset_init(void);
extern int wmt_ts_get_resetgpnum(void);
extern void wmt_enable_rst_pull(int enable);
extern void wmt_set_rst_pull(int up);
extern void wmt_rst_output(int high);
extern void wmt_rst_input(void);
extern void wmt_set_intasgp(void);
extern void wmt_intgp_out(int val);
extern void wmt_ts_set_irqinput(void);
extern unsigned int wmt_ts_irqinval(void);
extern void wmt_ts_set_penup(int up);
extern int wmt_ts_wait_penup(void);
extern void wmt_ts_wakeup_penup(void);
extern struct i2c_client* ts_get_i2c_client(void);
extern int wmt_ts_ispenup(void);
extern unsigned int wmt_ts_get_maxfingernum(void);
extern unsigned int wmt_ts_get_ictype(void);
extern unsigned int wmt_ts_get_xaxis(void);
extern unsigned int wmt_ts_get_xdir(void);
extern unsigned int wmt_ts_get_ydir(void);
// short
extern unsigned int wmt_ts_get_touchheight(void);
// long
extern unsigned int wmt_ts_get_touchwidth(void);
extern void wmt_ts_get_firmwname(char* firmname);
extern int wmt_ts_load_firmware(char* firmwarename, unsigned char** firmdata, int* fwlen);




extern void TouchPanelCalibrateAPoint(
    int   UncalX,     //@PARM The uncalibrated X coordinate
    int   UncalY,     //@PARM The uncalibrated Y coordinate
    int   *pCalX,     //@PARM The calibrated X coordinate
    int   *pCalY      //@PARM The calibrated Y coordinate
    );

//filepath:the path of firmware file;
//firmdata:store the data from firmware file;
//maxlen: the max len of firmdata;
//return:the length of firmware data,negative-parsing error.
//extern 
u8 zet6221_ts_sfr(struct i2c_client *client);
int wmt_getsyspara(char *varname, unsigned char *varval, int *varlen);


#define HIGH_IMPENDENCE_MODE 0
#define NOT_HIGH_IMPENDENCE_MODE 1

extern int is_high_impendence_mode(void);


#define FORCE_DOWNLOAD			1
#define FORCE_CANCEL_DOWNLOAD	2
extern int get_download_option(void);



#endif



