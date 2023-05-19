/*
 * main.c
 *
 *  Created on: 13-Mar-2023
 *      Author: HP
 */


#include <stdio.h>
int main(void)
{
	// creating the char variable
	char a = 100;


	// printing the address of the above variable
	printf("Current values of a is %d\n",a);
	printf("Address is %p\n",&a);


	// creating a pointer variable
	char* address1 = &a;// using the "address of" operator '&' and storing the address in a pointer variable


	// printing the address of the variable
	char value = *address1; // dereferencing a pointer variable to read 1 byte of data
	printf("Read Value of 'a' is :%d\n",value);
	printf("Address of variable 'a' is :%p\n",address1);

	// writing the store the value 65
	*address1 = 65; // dereferencing to write data

	printf("new value of a is %d\n",a);

	while (getchar()!='\n')
	{
	}
	getchar();

	return 0;
}
