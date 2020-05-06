#include "ff.h"
void setup()
{
  FATFS FatFs;
FIL Fil;
    SerialUSB.begin(115200);
    while (!SerialUSB)
        ;
    SerialUSB.println("DEDEDED");
    UINT bw;
    FRESULT fr;
    f_mount(&FatFs, "", 0);
    fr = f_open(&Fil, "newfile6.txt", FA_WRITE | FA_CREATE_ALWAYS);
    if (fr == FR_OK)
    {
        SerialUSB.println("DEDEDED");
        f_write(&Fil, "It works!\r\n", 11, &bw);
        fr = f_close(&Fil);
        if (fr == FR_OK && bw == 11)
        {
        }
    }

    SerialUSB.println("File written");
    for (;;)
        ;
}
void loop()
{
}
