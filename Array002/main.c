/*
 * main.c
 *
 *  Created on: 01-Apr-2023
 *      Author: HP
 */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint8_t data[10] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
	// printing the second element
	printf("Before: Second element is %x\n",*(data+1));

	// changing the value of second element(1st position in array)
	*(data+1) = 0xEE;

	printf("After:  Second element is %x\n",*(data+1));


	// shorthand method: array_name[offset or position] = new_value;
	printf("Before: Third element is %x\n",data[2]);
	data[2] = 0xAA;
	printf("After:  Third element is %x\n",data[2]);



	getchar();
	return 0;
}
