/*
 * main.c
 *
 *  Created on: 18-Mar-2023
 *      Author: HP
 */

// video 108
// find if number is even or odd using bitwise AND


#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);


int main(void)
{
	int32_t a;
	// taking the numbers from the user
	printf("Input the number:");
	scanf("%d",&a);

	printf("Number is: %d\n",a);
	// refer to ECB 31 (i) and (ii)
	if(a & 1)
		printf("Number is Odd.\n");
	else
		printf("NUmber is Even.\n");

	wait_for_user_input();
	return 0;

}

void wait_for_user_input(void)
{
	while( getchar() != '\n')
	{
	}
	getchar();
}
