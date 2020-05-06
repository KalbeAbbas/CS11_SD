

#include "ff.h"
#ifndef _DISKIO_DEFINED
#define _DISKIO_DEFINED

#ifdef __cplusplus
extern "C" {
#endif


typedef BYTE	DSTATUS;


typedef enum {
	RES_OK = 0,		
	RES_ERROR,		
	RES_WRPRT,		
	RES_NOTRDY,		
	RES_PARERR		
} DRESULT;






DSTATUS disk_initialize (BYTE pdrv);
DSTATUS disk_status (BYTE pdrv);
DRESULT disk_read (BYTE pdrv, BYTE* buff, LBA_t sector, UINT count);
DRESULT disk_write (BYTE pdrv, const BYTE* buff, LBA_t sector, UINT count);
DRESULT disk_ioctl (BYTE pdrv, BYTE cmd, void* buff);



#define STA_NOINIT		0x01	
#define STA_NODISK		0x02	
#define STA_PROTECT		0x04	





#define CTRL_SYNC			0	
#define GET_SECTOR_COUNT	1	
#define GET_SECTOR_SIZE		2	
#define GET_BLOCK_SIZE		3	
#define CTRL_TRIM			4	


#define CTRL_FORMAT			5	
#define CTRL_POWER_IDLE		6	
#define CTRL_POWER_OFF		7	
#define CTRL_LOCK			8	
#define CTRL_UNLOCK			9	
#define CTRL_EJECT			10	
#define CTRL_GET_SMART		11	


#define MMC_GET_TYPE		50	
#define MMC_GET_CSD			51	
#define MMC_GET_CID			52	
#define MMC_GET_OCR			53	
#define MMC_GET_SDSTAT		54	
#define ISDIO_READ			55	
#define ISDIO_WRITE			56	
#define ISDIO_MRITE			57	


#define ATA_GET_REV			60	
#define ATA_GET_MODEL		61	
#define ATA_GET_SN			62	



#define CT_MMC		0x01		
#define CT_SD1		0x02		
#define CT_SD2		0x04		
#define CT_SDC		(CT_SD1|CT_SD2)	
#define CT_BLOCK	0x08		


#ifdef __cplusplus
}
#endif

#endif
