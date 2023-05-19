/*
 * main.c
 *
 *  Created on: 20-Mar-2023
 *      Author: HP
 */


// video 133
// finding the even numbers between 2 given numbers and also the number of even numbers


#include <stdio.h>
#include <stdint.h>
void wait_for_user_input(void);

int main(void)
{

	int32_t start_num,end_num;
	uint32_t count;

	printf("Enter the 2 numbers(seperated by space):");
	scanf("%d %d",&start_num,&end_num);

	if (end_num < start_num)
	{
		printf("Ending number should be > than starting number.\n");
		wait_for_user_input();
		return 0;
	}


// to understand argumerts of for refer to ECB 41(i)
	for( printf("Even numbers are:\n"), count = 0;start_num <= end_num; start_num++)
	{
		if(!(start_num % 2))
		{
			printf("%4d",start_num);
			count++;
	}

	}



	printf("\nTotal even numbers are:%u\n",count);
	wait_for_user_input();
	return 0;
}

void wait_for_user_input(void)
{
	printf("Press Enter to exit the application.");
	while (getchar() != '\n')
	{
	}
	getchar();
}
