/*
 * main.c
 *
 *  Created on: 30-Mar-2023
 *      Author: HP
 */
// Video 166
// understanding the behavior of 'Unions'
// Refer to ECB 52(ii)
#include <stdio.h>
#include <stdint.h>

// creating a union ,which is same as creating a structure . Just replace 'struct' with 'union'
union Address
{
	uint16_t shortAddr;
	uint32_t longAddr;
	// size of union is the same as the size of the biggest member element
};

int main(void)
{

	// creating a union var
	union Address addr;

	addr.shortAddr = 0xABCD;
	addr.longAddr  = 0xEEEECCCC;


	// print the values
	printf("short address = %#X\n",addr.shortAddr);
	printf("l ong address = %#X\n",addr.longAddr);

	getchar();
	/*Understand
	 when you first store the value ABCD it gets stored in the memory addresses as CD AB
	 but when you execute the next statement it OVERWRITES the same memory addresses as CC CC EE EE
	 that is why is the short address print it prints the 1st 2 bytes(now overwritten) as CC CC
	 and in the long address it prints the whole which is CC CC EE EE*/

	return 0;
}
