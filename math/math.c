/*
 * math.c
 *
 *  Created on: 04-Mar-2023
 *      Author: HP
 */

// here we will write all the functions for our arithmetic operation


int math_add(int n1, int n2)
{
	return n1+n2;
}

int math_sub(int n1, int n2)
{
	return n1-n2;
}

long long int math_mul(int n1, int n2)
{
	return (long long int)n1*n2; // but function return type is long long
}

float math_div(int n1, int n2)
{
	return (float)n1/n2; // again int/int in 'C' is int and not float
}
