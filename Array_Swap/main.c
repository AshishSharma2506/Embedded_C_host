/*
 * main.c
 *
 *  Created on: 01-Apr-2023
 *      Author: HP
 */

#include <stdio.h>
#include <stdint.h>
void wait_for_user_input(void);
void array_display(int32_t *pArray, uint32_t len);
void swap_arrays(int32_t *pArray1,int32_t *pArray2, uint32_t nItem1, uint32_t nItem2);

int main(void)
{
	int32_t nItem1,nItem2;
	printf("Array Swapping Program.\n");
	printf("Enter Number of Elements of Array 1 & 2:");
	scanf("%d %d",&nItem1,&nItem2);

	if((nItem1<0) || (nItem2<0))
	{
		printf("Array size cannot be negative.\n");
		wait_for_user_input();
		return 0;
	}


	// creating the arrays
	int32_t array1[nItem1];
	int32_t array2[nItem2];

	// get the inputs for the data items
	for(uint32_t i = 0 ;i<nItem1 ;i++)
	{
		printf("Enter the %d element of Array1:",i);
		scanf("%d",&array1[i]);
	}

	// for array 2
	for(uint32_t i = 0 ;i<nItem2 ;i++)
	{
		printf("Enter the %d element of Array2:",i);
		scanf("%d",&array2[i]);
	}

	// printing the contents of the array before swapping
	printf("Arrays before Swapping are:\n");
	array_display(array1,nItem1);
	printf("\n");
	array_display(array2,nItem2);
	printf("\n");

	// printing the contents of the array AFTER swapping
	printf("Arrays After Swapping are:\n");
	swap_arrays(array1, array2,nItem1,nItem2);
	array_display(array1,nItem1);
	printf("\n");
	array_display(array2,nItem2);
	printf("\n");

	// hold the application
	wait_for_user_input();
	return 0;
}


void swap_arrays(int32_t *pArray1,int32_t *pArray2, uint32_t nItem1, uint32_t nItem2)
{
	uint32_t len = nItem1 < nItem2 ? nItem1:nItem2;

	for(uint32_t i = 0; i < len; i++)
	{
		int32_t temp = pArray1[i];
		pArray1[i] = pArray2[i];
		pArray2[i] = temp;
	}
}

void array_display(int32_t *pArray, uint32_t len)
{
	for(uint32_t i = 0 ;i<len ;i++)
	{
		printf("%4d  ",pArray[i]);
	}
}


void wait_for_user_input(void)
{
	printf("Press Enter to Exit the application.\n");
	while( getchar() != '\n')
	{
	     ;
	}
	getchar();
}
