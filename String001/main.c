/*
 * main.c
 *
 *  Created on: 02-Apr-2023
 *      Author: HP
 */


// Video 185
// String Variable VS String Constant

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	// creating a char array
	char msg1[] = "Hello How are you?";
	printf("The message is: %s\n",msg1);

	getchar();

	return 0;
}
