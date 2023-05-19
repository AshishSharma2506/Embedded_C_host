/*
 * main.c
 *
 *  Created on: 18-Mar-2023
 *      Author: HP
 */

// video 106
// takes 2 numbers and does bitwise AND,OR and NOT

#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);


int main(void)
{
	int32_t a,b;
	// taking the numbers from the user
	printf("Input 2 numbers for the operation:");
	scanf("%d %d",&a,&b);

	printf("Biwise AND(&): %d\n",(a&b));
	printf("Biwise OR(|): %d\n",(a|b));
	printf("Biwise XOR(^): %d\n",(a^b));
	printf("Biwise NOT(~) of first number: %d\n",(~a));
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
