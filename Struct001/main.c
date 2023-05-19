/*
 * main.c
 *
 *  Created on: 28-Mar-2023
 *      Author: HP
 */
// video 154

#include <stdio.h>
#include <stdint.h>

struct carModel
{
	//define the different member elements
	unsigned int carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void)
{
	// creating variables of the new data type we created ,user defined type carModel


	// initialize the variables in the structure with the data
	// two ways to do it. ECB48(i)
	struct carModel carBMW = {2021,15000,220,1330}; // order is important
	// one to one mapping in the order they are passed and in whihc they appear in the structure
	struct carModel carFord = {4031,35000,160,1900.96};


	// way 2 : using designated initializers using the dot(.) operator.Order is not important
	struct carModel carHonda = {.carWeight=1889.90,.carPrice=50000};


	// priting by accessing the member elements using dot operator
	printf("Details of carBMW is as follows\n");
	printf("Car Number = %u\n",carBMW.carNumber);
	printf("Car Price = %u\n",carBMW.carPrice);
	printf("Car Maximum Speed = %u\n",carBMW.carMaxSpeed);
	printf("Car Weight = %f\n",carBMW.carWeight);

	printf("Details of carFord is as follows\n");
	printf("Car Number = %u\n",carFord.carNumber);
	printf("Car Price = %u\n",carFord.carPrice);
	printf("Car Maximum Speed = %u\n",carFord.carMaxSpeed);
	printf("Car Weight = %f\n",carFord.carWeight);

	printf("Details of carHonda is as follows\n");
	printf("Car Number = %u\n",carHonda.carNumber);
	printf("Car Price = %u\n",carHonda.carPrice);
	printf("Car Maximum Speed = %u\n",carHonda.carMaxSpeed);
	printf("Car Weight = %f\n",carHonda.carWeight);


	// overwriting the values of member element
	// say change car number of carFord
	carFord.carNumber = 5200;

	getchar();


	return 0;
}
