/*
 * main.c
 *
 *  Created on: 13-Mar-2023
 *      Author: HP
 */


#include <stdio.h>
int main(void)
{
	// let us say our pointer is
	// 0x00007FFF8E3C3824
	// its a very big number:8Bytes so have to use the long long type
	long long int someAddress = 0x00007FFF8E3C3824; // this is a normal variable as not a pointer data type

	char* address1 = (char*)0x00007FFF8E3C3824;/* have to explicitly cast the RHS to tell compiler
	that it is a pointer data type else it will see it as a normal data type (here long long) and
	 data type mismatch will happen*/
}
