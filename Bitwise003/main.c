/*
 * main.c
 *
 *  Created on: 18-Mar-2023
 *      Author: HP
 */

// video 108 question
// setting(making it 1) the 3th and 6th bit and printing the result

#include <stdio.h>
#include <stdint.h>
void wait_for_user_input(void);
int main(void)
{
	// declaring the input variable
	int32_t a;
	printf("Input the number:");
	scanf("%d",&a);

	//bit mask for 3th & 6th bit will be (0100 1001) which is 73 in decimal
	// Setting the 4th and 7th bit
	int32_t b = a | 73;

	printf("The new number with 3th and 6th bit set is : %d\n",b);



	wait_for_user_input();
	return 0;

}


void wait_for_user_input(void)
{
	printf("Press Enter to Exit.\n");
	while ( getchar() != '\n')
	{
	}
	getchar();

}
