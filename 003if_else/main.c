/*
 * main.c
 *
 *  Created on: 17-Mar-2023
 *      Author: HP
 */

#include <stdio.h>
#include <stdint.h>
void wait_for_user_input(void);

int main(void)
{
	// declaring the 2 numbers as float but we will later compare only the integer part
	float a,b;

	// get the integers from the users
	printf("Input the first number:");
	// checking the return value of scanf to test if the input is valid or not . Lect:96
	if(	scanf("%f",&a) == 0) // Returns 1(as 1 input only) if scan is successful else 0
	{
		printf("Invalid Input...\n");
		wait_for_user_input();
		return 0;
	}

	printf("Input the second number:");
	if(	scanf("%f",&b) == 0) // Returns 1(as 1 input only) if scan is successful else 0
	{
		printf("Invalid Input...\n");
		wait_for_user_input();
		return 0;
	}


	// creating the integers by storing only integer part of the real numbers
	int32_t num1,num2;
	num1 = a;
	num2 = b;


	// warning the user when he inputs a non-integer number
	if((a!=num1)|| (b!=num2))
		printf("Warning! comparing only intger part.\n");




	//compare the 2 numbers(integers) by expression in the if statement
	if(num1==num2)
		printf("Both numbers are equal.\n");
	else
	{
		if(num1>num2)
		printf("%d is the greater number.\n",num1);
		else
		printf("%d is the greater number.\n",num2);
	}
	wait_for_user_input();
	return 0;



}

void wait_for_user_input(void)
{
	//removing the input buffer chararcter and holding the program using getchar()
	printf("Press Enter to exit.\n");
	while(getchar()!='\n')
	{
	}
	getchar();

}
