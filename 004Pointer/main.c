/*
 * main.c
 *
 *  Created on: 13-Mar-2023
 *      Author: HP
 */


#include <stdio.h>

// creating a global variable and storing 8B data
long long int g_data = 0xFFFEABCD11112345;
// so again by default its pointer will have the type long long int*

int main(void)
{

	//creating a pointer variable and storing the address of g_data
	char *pAddress = (char*)&g_data;
	//explicit casting as both diff data type
	printf("Value of pAddress is %p\n",pAddress);
	printf("Value at address %p is %x\n",pAddress,*pAddress);
	// will fetch 1B od data as char* type pointer


	// incrementing the pointer variable by 1
	pAddress = pAddress +1;
	printf("Value of pAddress is %p\n",pAddress);
	printf("Value at address %p is %x\n",pAddress,*pAddress);

	// to understand what is haeppening better refer to ECB23(ii)

	pAddress = pAddress +5;
	printf("Value of pAddress is %p\n",pAddress);
	printf("Value at address %p is %x\n",pAddress,*pAddress);

	//ffff indicate that it is a negative number





	printf("Now look at the behavior of data fetch and memory location with short\n\n");

	short *pAddress1 = (short*)&g_data;
	//explicit casting as both diff data type
	printf("Value of pAddress is %p\n",pAddress1);
	printf("Value at address %p is %x\n",pAddress1,*pAddress1);
	// will fetch 2B of data as short* type pointer


	// incrementing the pointer variable by 1
	pAddress1 = pAddress1 +1;// since short fetches 2B of data the memory location will step by 2
	printf("Value of pAddress is %p\n",pAddress1);
	printf("Value at address %p is %x\n",pAddress1,*pAddress1);

	// to understand what is haeppening better refer to ECB23(ii)


	// simuilarly for int it will fetch 4B and step by 4 in memory location and 8 for long long

/*
	while (getchar()!='\n')
	{

	}

	getchar();
	*/
	return 0;
}
