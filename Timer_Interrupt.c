#include<msp430.h>
__attribute__( ( interrupt(TIMERA1_VECTOR) ) )
timer_service_routine(void) {
	TACTL^=1;
	P1OUT^=1;
}
void main() {
	P1DIR=0x01;
	P1OUT=0x00;
	TACTL = 0x0222;
	__enable_interrupt();
	while(1);
}

