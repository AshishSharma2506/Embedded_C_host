/*
 * main.c
 *
 *  Created on: 11-Mar-2023
 *  video no:70
 */


#include <stdio.h>
 int main(void)
 {
	 float number = 45.785114853747;

	 printf("Number is %f\n",number); // fpormat specifier for float
	 printf("Number is %0.9f\n",number);
	 /* as float is only till 6 decimal places & we are trying
	 to print 9 digits after decimal we will see only the 6 decimal places match for the original
	 number but the remaining 3 are wrong*/


	 // let us see double, as we know double is having precision upto 15 decimal places
	 double number2 = 45.785114853747;

	 printf("Number is %0.14lf\n",number2); // fpormat specifier for double upto 14 decimal places
	 // result will be identical to the actual number



	 // printing in scienctific notation usinf %e format specifier
	 printf("Number is %e\n",number2);


	 double chargeElectron = -1.60217662e-19; // storing scientific notation
	 printf("Charge is %0.8lf\n",chargeElectron);
	 printf("Charge is %0.8le\n",chargeElectron);

	 return 0;
 }

