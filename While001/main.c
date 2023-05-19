/*
 * main.c
 *
 *  Created on: 20-Mar-2023
 *      Author: HP
 */


// video 130
// printing the even numbers and counting them between give boundaries by the user

#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);
int main(void)
{
	int32_t start_num,end_num;
	uint32_t even=0;

	printf("Enter the starting and the ending numbers(give space between the 2 nos.");
	scanf("%d %d",&start_num,&end_num);

	if(end_num < start_num)
	{
		printf("Ending number should be > starting number.\n");
		wait_for_user_input();
		return 0;
	}

	printf("Even Numbers are:\n");

	while(start_num <= end_num)
	{
		if(!(start_num % 2))
		{
			printf("%4d\t",start_num); // %4d so each output will consume 4 character
			even++;
		}
		start_num++;

	}

	printf("\nTotal even numbers: %u\n",even);
	wait_for_user_input();
	return 0;
}


void wait_for_user_input(void)
{
	printf("Press Enter to exit the application.");
	while( getchar() != '\n')
	{
	}
	getchar();
}
