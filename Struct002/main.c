/*
 * main.c
 *
 *  Created on: 28-Mar-2023
 *      Author: HP
 */
// video 155

#include <stdio.h>
#include <stdint.h>

struct carModel
{
	//define the different member elements
	uint32_t carNumber;
	/*uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;*/
};

int main(void)
{
	// create a var of the ne data type carModel
	struct carModel carBMW = {0};

	// what is the memory comsumed by this variable?
	printf("Size of struct carModel carBMW is %d\n",sizeof(carBMW));
	// can pass the data type itself also ,that is,struct carModel
	// theoretically it should be= 4+4+2+4 = 14

	// it says that consumes 16 B instead in the print!
	/* this is beacuse of structure padding.*/

	getchar();


	return 0;
}
