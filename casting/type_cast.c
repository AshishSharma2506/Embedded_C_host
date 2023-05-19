/*
 * type_cast.c
 *
 *  Created on: 04-Mar-2023
 *      Author: HP
 */
#include <stdio.h>

int main()
{
	// explaination on ECB12 (i)
	//unsigned char data = 0x87 + 0xFF00;
	unsigned char data = (unsigned char)(0x87 + 0xFF00);

	// assumed as long long by complier since greater than 4B
	unsigned char data2 = 0x1FFFFFFFFFA080 + 0x1245;


	//unsigned char data = 0x01 + 0x0089;
	// compiler sees it as 0x00000001 + 0x00000089

	float result = 80/3; // will be int and loss of info will occur
	float res = (float)80/3;


	printf("Data : %u result :%f  res:%f\n",data ,result,res);
	printf("Data2 : %u",data2);
	return 0;
}
