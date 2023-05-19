
#include <stdio.h>
int main()
{
    // create some variables
    char a1 = 'A';
    char a2 = 'p';
    char a3 = 'p';
    char a4 = 'l';
    char a5 = 'e';
    char a6 = ':';
    char a7 = ')';

    // let us print the addresses of the variables
    // format specifier for memory address location(aka pointer) which is %p can also be used,in hex format
    printf("Address of the variable a1: %p\n",&a1);
    printf("Address of the variable a2: %p\n",&a2);
    printf("Address of the variable a3: %p\n",&a3);
    printf("Address of the variable a4: %p\n",&a4);
    printf("Address of the variable a5: %p\n",&a5);
    printf("Address of the variable a6: %p\n",&a6);
    printf("Address of the variable a7: %p\n",&a7);

    // let us try to save the memory address in a new variable
    //unsigned long int addressofa1 = &a1;
    /* will give a warning as pointer data type is not the same as variable data type
     pointers have a special data type which is char* . In order to save the pointer data to
     newer varaible we have to do 'typecasting'  */

    // after applying typecasting we will not get the error
    unsigned long int addressofa1_new = (unsigned long int)&a1;
    printf("Address of a1 is:%ld\n",addressofa1_new);


    unsigned long long addressofa1_new2 = (unsigned long long)&a1;
    printf("Address of a1 is:%I64X\n",addressofa1_new2);


    long int abc = sizeof(unsigned long int);
    printf("Size of Unsigned long int is : %ld\n",abc);

    long long xyz = sizeof(unsigned long int);
    printf("Size of Unsigned long long is : %I64u\n",xyz);


    return 0;

}

