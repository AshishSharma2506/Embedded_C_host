/*
 * main.c
 *
 *  Created on: 01-Apr-2023
 *      Author: HP
 */

#include <stdio.h>
#include <stdint.h>
void array_display(uint8_t const *const pArray, uint32_t nItems);
int main(void)
{
	uint8_t data[10] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};

	// printing the elements using a loop
	for(uint32_t i = 0; i<10 ; i++)
	{
		printf("%x\t",data[i]);
	}

	// modify second data element
	data[2] = 0x33;
	printf("\n");

	uint32_t nItems = sizeof(data)/sizeof(uint8_t);
	array_display(data,nItems);

	getchar();
	return 0;
}

void array_display(uint8_t const *const pArray, uint32_t nItems)
{
	// lets us display the content of the received array
	for(uint32_t i = 0; i < nItems ; i++)
	{
		printf("%x\t",pArray[i]);
	}

}
