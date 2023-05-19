/*
 * main.c
 *
 *  Created on: 20-Mar-2023
 *      Author: HP
 */


// video 135
// printing the pyramid for the hight provided by the user



#include <stdio.h>
#include <stdint.h>
void wait_for_user_input(void);

int main(void)
{
	uint32_t height;

	printf("Enter the height:");
	scanf("%d",&height);

	if (height < 0)
	{
		printf("Height cannot be negative.\n");
		wait_for_user_input();
		return 0;
	}


	for(uint32_t i = 1;i <= height ; i++)
	{
		for(uint32_t j = i;j > 0; j--)
		{
			printf("%4d",j);
		}
		printf("\n");
	}

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
