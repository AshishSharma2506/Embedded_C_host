/*
 * main.c
 *
 *  Created on: 13-Mar-2023
 *      Author: HP
 */

// this is an illustration for using floaing point data type
#include <stdio.h>
int main(void)
{
	// define the charge on one electron
	float ChargeE = 1.6012457845e-19; // float is single precision and precise upto 6 decimal places
	//Let us see till how many decimal places float is accurate
	printf("Charge on One Electron is: %f\n",ChargeE);
	printf("Charge on One Electron is: %0.15f\n",ChargeE);

	// let us see the storage size of Float
	printf("Size of float data type is:%d\n",sizeof(float));

	// using double
	double ChargeE2 =  1.6012457845e-19;// double has precision upto 15 decimal places
	printf("Charge on One Electron is: %lf\n",ChargeE2);
	printf("Charge on One Electron is: %0.15lf\n",ChargeE2);


	// calculating number of electrons
	double charge;
	printf("Enter the charge in coulombs\n");
	scanf("%le",&charge);
	double number = charge/ChargeE2;
	printf("Total number of electrons are:%le\n",number);
	printf("Total number of electrons are:%lf\n",number);
	while (getchar()!='\n')
	{

	}
	getchar();
}

