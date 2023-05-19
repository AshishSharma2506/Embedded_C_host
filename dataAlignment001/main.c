/*
 * main.c
 *
 *  Created on: 28-Mar-2023
 *      Author: HP
 */


// video 157
/* to understand the data alignment and how the compiler generates instructions to store variables
 according to their natural size boundary addresses*/

#include <stdio.h>
#include <stdint.h>

struct DataSet
{
	// different variables of different data types
	char data1;
	int data2;
	char data3;
	short data4;
};

int main(void)
{

	// create a varaible of the structure created
	struct DataSet data;

	// initialize the member elements of DataSet
	data.data1   = 0x11;
	data.data2   = 0xFFFFEEEE;
	data.data3   = 0x22;
	data.data4   = 0xABCD;

	// creating a pointer variable
	uint8_t *ptr;
	// initialize it with the address of the structure variable:data
	ptr =(uint8_t*)&data;// data type of this pointer will be : struct DataSet* so typecasting is req


	// total size of the struct DataSet
	uint32_t totalSize = sizeof(struct DataSet);

	// print the content which is pointed by our pointer
	// will use a for loop
	printf("Memory Address        Content \n");
	printf("==============================\n");

	for(uint32_t i = 0; i<totalSize; i++)
	{
		printf("%p        %X\n",ptr,*ptr);
		ptr++;// increment the pointer
		/* to see how exactly the members of our structure are stored in the memory by printing them
	       byte by byte*/
	}

	printf("Total memory consumed by struct DataSet variable = %u\n",sizeof(struct DataSet));
	getchar();

	return 0;
}
