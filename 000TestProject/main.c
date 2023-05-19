/*
 * main.c
 *
 *  Created on: 26-Feb-2023
 *      Author: Ashish
 */
#include<stdio.h>
int a; // global variable

int main()
{
	a = 25;
	{
		int my_var;
		my_var = 45;
		printf("001Value of my_var is: %d\n",my_var);
		printf("001Value of global var is: %d\n",a);
	}//execution body ends

	int my_var; // declaration of the variable
	my_var = my_var + 10;
	/* since we have not initialized the variable my_var in this space it will assign it
	 a garbage value that is at the location of the memory address assigned*/
	printf("003Value of my_var is: %d\n",my_var);
	// so we will see an arbitrary value printed

	return 0;

}

