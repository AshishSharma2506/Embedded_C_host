/*
 * main.c
 *
 *  Created on: 17-Mar-2023
 *      Author: HP
 */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	// variable declaration for age
	uint32_t age;


	// get the age from the user
	printf("Enter your age:");
	scanf("%d",&age);
	printf("Age is :%d\n",age);

	// printing relevant info
	if(age>=18)
		printf("You are eligible to vote.\n");
	else
		printf("You are NOT eligible to vote.\n");

	//removing the buffer chararcter and holding the program using getchar()
	printf("Press Enter to exit\n");
	while(getchar()!='\n')
	{
	}
	getchar();



	return 0;
}
