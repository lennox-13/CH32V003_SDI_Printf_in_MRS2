#include <ch32v00x.h>

int main(void)
{
    SystemCoreClockUpdate();
    Delay_Init();
   
    printf("SystemClk:%d\r\n",SystemCoreClock);
    printf( "ChipID:%08x\r\n", DBGMCU_GetCHIPID() );
    printf( "SDI printf DEMO\r\n");
    Delay_Ms(2000);

  int i = 0;
while (1) {
    Delay_Ms(100);
    printf("CNT: %d\r\n", i);
    i = (i >= 100) ? 0 : i+1 ;
    }
}
