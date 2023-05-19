/*
 * math.h
 *
 *  Created on: 04-Mar-2023
 *      Author: HP
 */

#ifndef MATH_H_
#define MATH_H_

/* are also called ' exposed function prototypes
  because main.c can include this and come to know about all the function prototypes
  of all math.c code  */
int math_add(int n1, int n2);
int math_sub(int n1, int n2);
long long int math_mul(int n1, int n2);
float math_div(int n1, int n2);



#endif /* MATH_H_ */
