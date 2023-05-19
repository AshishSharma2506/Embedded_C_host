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


uint8_t const data = 10; //  data2 is a read-only variable in global scope
int main(void)
{
	printf("Value = %d\n",data);
	// cannot change the value of the variable using its name as below. Will get a Compile-Time error
	//data = 50;

	/* here cannot change the value using pointer also as it is a Global const variable
	and hence is placed in the ROM and is write-protected
	we cannot just use address of it to write the new value
	*/
	// program will crash


	uint8_t *ptr = (uint8_t*)&data;
	// the type of pointer for data will be : uint8_t const*
	*ptr = 50;  // now 'trying to' change the cotent pf the varaible 'data' using its mememory address/pointer
	// program will crash. Refer ECB42(i)

	// look at the content/value of 'data'
	printf("Value = %d\n",data);


	while(getchar() != '\n')
	{
	}
	getchar();
	return 0;
}
