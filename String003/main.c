/*
 * main.c
 *
 *  Created on: 04-Apr-2023
 *      Author: HP
 */


// video 188
// to read First and Last name of the user
#include <stdio.h>
#include <stdint.h>
void wait_for_user_input(void);
int main(void)
{
	// create a vatiable to store the string
	char Fname[30];// we can store max 29 char as one byte will be taken by the '\0'
	char Lname[30];
	// input the string
	printf("Enter your full name:");
	scanf("%s %s",Fname,Lname);
	printf("Your name is,%s %s\n",Fname,Lname);// a message for the user

	wait_for_user_input();
	// now using one array to store full name using scanset of scanf
	char name[30];
	printf("Enter your full name:");
	scanf("%[^\n]s",name);// scanset with \n will read everything until it encounters new line char
	printf("Your name is,%s\n",name);

/*
	// taking a look at the content of the array
	for(uint32_t i = 0;i<30 ;i++)
	{
		printf("%x\n",name[i]);// we can see the NULL char after the number of char we provided as the string. Will appear as 0 in application window
	}

*/



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
