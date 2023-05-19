/*
 * main.c
 *
 *  Created on: 11-Mar-2023
 *      Video no:72
 */

#include <stdio.h>
int main(void)
{

	float number1,number2,number3;
	float average;

	printf("Enter the three numbers:");
	scanf("%f %f %f",&number1,&number2,&number3);


	average = (number1 + number2 + number3)/3;
	printf("\nAverge is %f\n",average);

	printf("Press key to exit");
	while(getchar()!='\n')
	{
		// to make sure left '\n' from input buffer is not going to return the getchar
	}
	// the input buffer and return
	getchar();
	//return 0;

}
