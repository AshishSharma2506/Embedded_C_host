/*
 * main.c
 *
 *  Created on: 18-Mar-2023
 *      Author: HP
 */


// video 110
#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main(void)
{
	// declaring the variable for the input & after operation on it
	int32_t a,b;
	printf("Enter the Number:");
	scanf("%d",&a);

	// for clearing the 4th,5th,6th bit the bit mask is 1000 1111 which is 143 in decimal
	b = a & 143;
	printf("The number after clearing the 4th,5th,6th bit is :%d\n",b);

	wait_for_user_input();
	return 0;
}


void wait_for_user_input(void)
{
	printf("Press Enter to exit the application.\n");
	while( getchar() != '\n')
	{}
	getchar();

}
