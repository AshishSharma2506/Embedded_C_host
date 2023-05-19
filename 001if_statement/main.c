/*
 * main.c
 *
 *  Created on: 16-Mar-2023
 *      Author: HP
 */


// this is for checking if statement
// if a user can vote or not, minimum age is 18

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	// declaring variable for age
	uint32_t age;

	//asking the user for age
	printf("input your age:\n");
	scanf("%d",&age);
	printf("Age is %d\n",age);
	if(age>=18)
	{
		printf("You are eligible to vote\n");
	}
	if(age<18)
		printf("You are NOT eligible to vote\n");


	printf("Press enter to exit\n");
	while(getchar()!='\n')
	{
	}
	getchar();


	return 0;
}
