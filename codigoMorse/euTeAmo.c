#include <avr/io.h>
#include <util/delay.h>
//1500 //
/*750 /
375 _
250 .
100  */
int main(void){
	DDRD |= (1<<PD0);
	int bolle = 1;

	while(bolle){
		PORTD |= (1<<PD0);
		_delay_ms(250);

		PORTD &= ~(1<<PD0);
		_delay_ms(750);

		for(int i = 1; i == 2; i++){
			PORTD |= (1<<PD0);
			_delay_ms(250);

			PORTD &= ~(1<<PD0);
			_delay_ms(100);
		}
		PORTD |= (1<<PD0);
		_delay_ms(375);

		PORTD &= ~(1<<PD0);
		_delay_ms(1500);




		PORTD |= (1<<PD0);
		_delay_ms(375);

		PORTD &= ~(1<<PD0);
		_delay_ms(750);

		PORTD |= (1<<PD0);
		_delay_ms(250);

		PORTD &= ~(1<<PD0);
		_delay_ms(1500);




		PORTD |= (1<<PD0);
		_delay_ms(250);

		PORTD &= ~(1<<PD0);
		_delay_ms(100);

		PORTD |= (1<<PD0);
		_delay_ms(375);

		PORTD &= ~(1<<PD0);
		_delay_ms(750);

		PORTD |= (1<<PD0);
		_delay_ms(375);

		PORTD &= ~(1<<PD0);
		_delay_ms(100);

		PORTD |= (1<<PD0);
		_delay_ms(375);

		PORTD &= ~(1<<PD0);
		_delay_ms(750);

		PORTD |= (1<<PD0);
		_delay_ms(375);

		PORTD &= ~(1<<PD0);
		_delay_ms(100);

		PORTD |= (1<<PD0);
		_delay_ms(375);

		PORTD &= ~(1<<PD0);
		_delay_ms(100);

		PORTD |= (1<<PD0);
		_delay_ms(375);

		PORTD &= ~(1<<PD0);
		_delay_ms(100);


		bolle = 0;
	}
}
