#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>

int main (void){
    DDRB = 0xFF;  //PORT B en output
    while(1) {
        PORTB ^= 0xFF;  // toggle PORTB 
        _delay_ms(1000);  // Espero 1s
    }
    return 0;
}
