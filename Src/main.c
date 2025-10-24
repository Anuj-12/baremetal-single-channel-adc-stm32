// To check which GPIO is mapped for Tx and Rx
// Check the alternate function table

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "uart.h"
#include "adc.h"

uint32_t sensorValue;

int main(){

	uart2_tx_init();
	pa1_adc_init();
	start_conversion();


	while(1){

		sensorValue = adc_read();
		printf("Sensor Value: %d \n\r", (int)sensorValue);
	}
}








