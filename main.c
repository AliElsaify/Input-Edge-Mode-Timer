#include <IntCtrl.h>

unsigned int   time_period                                                  ;
float          width                                                        ;
int main ( void )
{
	Timer0ACapture_init()                                                     ;
	while (1)
	{
		  time_period                    = Timer0ACapture_PulseWidth()          ;
		  width                          = (time_period * 62.5)/1000000         ;
		 
      DELAY(1000)                                                           ;
	}
	
	return 0                                                                  ;
	
}
