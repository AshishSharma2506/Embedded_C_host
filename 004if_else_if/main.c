/*
 * main.c
 *
 *  Created on: 17-Mar-2023
 *      Author: HP
 */

/* this porgram is for calculating income tax payable of the user
Formula is provided in the Lect 98             */

#include <stdio.h>
#include <stdint.h>

// function defintion
void wait_for_user_input(void);

int main(void)
{
	// declaring the income variable
	uint64_t income,tax;
	double temp_income; // temporary variable for income to avoid problems of data type input mismatch
	printf("Input the Income in Dollars.\n");
	scanf("%lf",&temp_income);

	if(temp_income <0)
	{
		printf("Value cannot be negative.Exiting...\n");
		wait_for_user_input();
		return 0;
	}
	// storing the integer income value
	income  =  (uint64_t) temp_income;

	printf("Income is $%I64u \n",income);


	// if-else-if ladder
	if(income <= 9525)
		tax = 0;
	else if((income > 9525) && (income <= 38700))
		tax = 0.12*income;
	else if((income > 38700) && (income <=82500) )
		tax = 0.22*income;
	else if(income > 82500)
		tax = 0.32*income +1000;


	// printing the tax
	printf("Tax payable is:$ %I64u\n",tax);

	wait_for_user_input();

	return 0;

}



// function to hang the application
void wait_for_user_input(void)
{
	printf("Press Enter to exit.\n");
	while(getchar()!='\n')
	{
	}

	getchar();
}
