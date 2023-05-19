/*
 * main.c
 *
 *  Created on: 04-Apr-2023
 *      Author: HP
 */


// video 187
// inputting a string
#include <stdio.h>
#include <stdint.h>
void wait_for_user_input(void);
int main(void)
{
	// create a vatiable to store the string
	char name[30];// we can store max 29 char as one byte will be taken by the '\0'
	// input the string
	printf("Enter your name:");
	scanf("%s",name);
	printf("Hi,%s\n",name);// a message for the user
	// we will see if input is a 2 word only first word is printed,meaning it was unable to read char after white space char

	// taking a look at the content of the array
	for(uint32_t i = 0;i<30 ;i++)
	{
		printf("%x\n",name[i]);// we can see the NULL char after the number of char we provided as the string. Will appear as 0 in application
	}





	wait_for_user_input();
	return 0;
}
void wait_for_user_input(void)
{
	printf("Press Enter to exit application.\n");
	while(getchar() != '\n')
	{
	}
	getchar();
}
