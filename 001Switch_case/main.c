/*
 * main.c
 *
 *  Created on: 18-Mar-2023
 *      Author: HP
 */


// video 102
// program to calculate area of the figure using the switch case
// program will ask the user for the code of the figure: triangle,trapezoid,circle,square,rectangle
// t ,z ,c ,s ,r     respectively

#include <stdio.h>
#include <stdint.h>
void wait_for_user_input(void);

int main(void)
{
	// variable declaration for the figure code
	uint8_t ch;
	// area varaible
	uint64_t area;

	printf("Area Calculation Program.\nCircle     --->c\nTriangle   --->t\nRectangle  --->r\nSquare     --->s\nTrapezoid  --->z\n");
	printf("Enter the code here:");
	scanf("%c",&ch);


	// using switch-case for the different figures
	switch(ch)
	{
	case 'c': // as we can only pass intger here we have to put it in '' as it will be ASCII value of that character
		printf("Circle area calculation.\n");
		printf("Enter the radius: ");
		uint64_t r;
		double temp_r;
		if (scanf("%lf",&temp_r)==0){
			printf("Invalid Input. Exiting application.\n");
			wait_for_user_input();
			return 0;
		}
		if (temp_r<0){
			printf("Radius cannot be negative.\n");
			printf("Invalid Input. Exiting application.\n");
			wait_for_user_input();
			return 0;
		}
		r = (uint64_t) temp_r;
		area = 3.1415*r*r;
		break;

	case 't':
		printf("Triangle area calculation.\n");
		uint64_t b,h;
		double temp_b,temp_h;
		printf("Enter the base:");
		scanf("%lf",&temp_b);
		printf("Enter the Height:");
		scanf("%lf",&temp_h);

		if((temp_h <= 0)){
			printf("Invalid Height\n");
			printf("Invalid Input. Exiting application.\n");
			wait_for_user_input();
			return 0;
		}
		if((temp_b <= 0)){
			printf("Invalid Base\n");
			printf("Invalid Input. Exiting application.\n");
			wait_for_user_input();
			return 0;
		}

		h = (uint64_t) temp_h;
		b = (uint64_t) temp_b;
		area = 0.5*b*h;
		break;

	case 'z':
		printf("Trapezoid area calculation.\n");
		uint64_t b1,b2,ht;
		double temp_b1,temp_b2,temp_ht;
		printf("Enter the base1(a):");
		scanf("%lf",&temp_b1);
		printf("Enter the base2(b):");
		scanf("%lf",&temp_b2);
		printf("Enter the height:");
		scanf("%lf",&temp_ht);


		if((temp_ht <= 0)){
			printf("Invalid Height\n");
			printf("Invalid Input. Exiting application.\n");
			wait_for_user_input();
			return 0;
		}
		if((temp_b1 <= 0 || temp_b2 <=0)){
			printf("Invalid Base\n");
			printf("Invalid Input. Exiting application.\n");
			wait_for_user_input();
			return 0;
		}
		b1 = (uint64_t) temp_b1;
		b2 = (uint64_t) temp_b2;
		ht = (uint64_t) temp_ht;

		area = ((b1+b2)/2)*ht;
		break;

	case 'r':
		printf("Rectangle area calculation.\n");
		uint64_t s1,s2;
		double temp_s1,temp_s2;
		printf("Enter the Side 1:");
		scanf("%lf",&temp_s1);
		printf("Enter the Side 2:");
		scanf("%lf",&temp_s2);

		if((temp_s2 <= 0)){
			printf("Side length cannot be negative.\n");
			printf("Invalid Input. Exiting application.\n");
			wait_for_user_input();
			return 0;
		}
		if((temp_s1 <= 0)){
			printf("Side length cannot be negative");
			printf("Invalid Input. Exiting application.\n");
			wait_for_user_input();
			return 0;
		}

		s1 = (uint64_t) temp_s1;
		s2 = (uint64_t) temp_s2;
		area = s1*s2;
		break;

	case 's':

			printf("Square area calculation.\n");
			uint64_t s;
			double temp_s;
			printf("Enter the Side:");
			scanf("%lf",&temp_s);


			if((temp_s <= 0)){
				printf("Side length cannot be negative.\n");
				printf("Invalid Input. Exiting application.\n");
				wait_for_user_input();
				return 0;
			}

			s = (uint64_t) temp_s;
			area = s*s;
			break;

	default:
		printf("Entry not valid.\n");
		wait_for_user_input();
		return 0;


		}


	printf("Area of the figure is:%I64d\n",area);

	wait_for_user_input();
	return 0;

}



// function to hang the application
void wait_for_user_input(void)
{
	printf("Press Enter to exit the application.\n");
	while( getchar() != '\n')
	{
	}
	getchar();
}
