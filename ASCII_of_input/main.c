/*
 * main.c
 *
 *  Created on: 11-Mar-2023
 *      Author: HP
 */


#include <stdio.h>
int main(void)
{
	char a,b,c,d,e,f; // intializing the variables
	printf("Enter any 6 characters of your choice:");
	// made for application so not used fflush(stdout);

	// input the characters using scanf()
	scanf("%c %c %c %c %c %c",&a,&b,&c,&d,&e,&f);

	printf("The ASCII of the characters are %d ,%d,%d,%d,%d,%d",a,b,c,d,e,f);
	printf("\nPress a key to exit");
	while (getchar()!='\n')
	{

	}
	getchar();

}
