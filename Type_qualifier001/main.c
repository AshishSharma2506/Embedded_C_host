/*
 * main.c
 *
 *  Created on: 21-Mar-2023
 *      Author: HP
 */


//video 138
// understanding type qualifier "const"

#include <stdio.h>
#include <stdint.h>


int main(void)
{
	uint8_t const data = 10;
	printf("Value = %d\n",data);
	// cannot change the value of the variable using its name as below. Will get a Compile-Time error
	//data = 50;



	// but can chnage the value of the content of the variable using its address
	uint8_t *ptr = (uint8_t*)&data;  // pointer for the content of the variable 'data'
	// the type of pointer for data will be : uint8_t const*
	*ptr = 50;  // now changing the cotent pf the varaible 'data' using its mememory address/pointer
	// this is allowed for 'const' type variable

	// look at the content/value of 'data'
	printf("Value = %d\n",data);


	while(getchar() != '\n')
	{
	}
	getchar();
	return 0;
}
