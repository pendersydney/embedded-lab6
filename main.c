#include <msp430.h> 
volatile long temp, temRaw;
void ConfigureAdc_temp();
void main(void)
/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW + WDTHOLD;               // stop watchdog timer
    ConfigureAdc_temp();
    _delay_cycles(5);                       // wait for ADC Ref to settle
    while(1){
        tempRaw = ADC10MEM;                 // red the converted date into a variable
        temp = (((tempRaw-673)*423)/1024);  // converts to degree celsius
    }
}

// Configure ADC Temperature
void ConfigureAdc_temp(){
    ADC10CTL1 = INCH 10 + ADC10DIV_0 + CONSEQ_2;
    ADC10CTL0 = SREF_1 | ADC10SHT_3 | REFON | ADC10ON;  // Vref+, Vss, 64 ATD clocks per sample, internal references, turn ADCON
    ADC10CTL0 | = ENC + ADC10SC + MSC;
}
