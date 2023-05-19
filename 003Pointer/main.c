/*
 * main.c
 *
 *  Created on: 13-Mar-2023
 *      Author: HP
 */


#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345; //8 Byte data
// since long long typt, by default its pointer data type will be long long int*

int main(void){
	 // create a pointer variable of char*
	char* pAddress1;
	// this syntax is also correct
	// char *pAddress
	pAddress1 = (char*)&g_data;
	printf("Value at address %p is :%x\n",pAddress1,*pAddress1);
	// we will see it will fectch only 1 Byte of data as it was of pointer data type char*
	// we get the last byte of g_data that is :45



	/* not doing explicit casting will not hurt but the compiler will issue a warning
	 but there is no loss of infromation. But it is always better to follow the rules, and typecast
	 to make sure LHS and RHS data type are same    */


	// let us see for other pointer data type
	int *pAddress2;
	pAddress2 = (int*)&g_data;
	printf("Value at address %p is :%x\n",pAddress2,*pAddress2);
	// here we will see 4B are fetched of the data as int*

	short *pAddress3;
	pAddress3 = (short*)&g_data;
	printf("Value at address %p is :%x\n",pAddress3,*pAddress3);
	// will print 2B of data

	long long int *pAddress4;
	pAddress4 = &g_data; // no explicit casting needed as by default it was lon long int*
	printf("Value at address %p is :%I64x\n",pAddress4,*pAddress4);
	// will print 8B of data





	while (getchar()!='\n')
	{

	}
	getchar();
	return 0;

 }
