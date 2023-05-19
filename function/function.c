/*
 * main.c
 *
 *  Created on: 04-Mar-2023
 *      Author: HP
 */

#include <stdio.h> // for prototyps of function in standard library like printf()
void function_add_nums(int a ,int b ,int c); // function declaration or function prototyping in global scope
int function_add_nums_2(int a ,int b ,int c);

int main()
{

	// calling the function
	function_add_nums(12,13,14);
	// can also pass variables
	int valA = 19;
	int valB = 70;
	function_add_nums(valA,valB,20);

	// catch the value returned from the function2
	int retValue;
	retValue =  function_add_nums_2(15,97,54);
	printf("002F Sum = %d\n",retValue);

	return 0;

}

// let us write a function to add 2 numbers
void function_add_nums(int a ,int b ,int c) // this is the function defintion
{
	int sum;
	sum = a+b+c;
	printf("Sum is equal to %d\n",sum);
}

// now the function will return something
int function_add_nums_2(int a ,int b ,int c) // this is the function defintion
{
	int sum;
	sum = a+b+c;
	// now instead of printing ,return the sum to the caller
	return sum;
}


