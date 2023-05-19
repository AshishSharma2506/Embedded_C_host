/*
 * main.c
 *
 *  Created on: 28-Mar-2023
 *      Author: HP
 */


// video 161
/* to understand the how to use the structure data pointer to access member elements
 the program and data is the same as in dataAlignment001 project*/

#include <stdio.h>
#include <stdint.h>

struct DataSet
{
	char data1;
	int data2;
	char data3;
	short data4;
};

int main(void)
{

	// create a varaible of the structure type
	struct DataSet data;

	// initialize the member elements of DataSet using the coventionsal dot operator
	data.data1   = 0x11;
	data.data2   = 0xFFFFEEEE;
	data.data3   = 0x22;
	data.data4   = 0xABCD;

	printf("Before: data.data1 = %X\n",data.data1);


	//creating a structure variable of pointer type
	struct DataSet *pData;
	// assign address of the structure to the structure pointer
	pData = &data;

	//now we can easily change the values of the member elements using the arrow(->) operator
	pData->data1 = 0x55;  // chamging the member element 1:data1

	printf("modifying the member variable using the structure pointer.\n");
	printf("After: data.data1 = %X\n",data.data1);

	getchar();

	return 0;
}
