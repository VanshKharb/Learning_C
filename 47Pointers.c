#include <stdio.h>

int main()
{
    // Pointers are the variables that store the memory address of some other variable

    // let's try to make a pointer

    int age = 18;
    // the syntax of the pointer is as follows:
    // data_type *pName 
    // here the data type is "int" and *p is common in all, the name of the variable should have it's first letter in uppercase
    // * = indirection operator (value at address)

    int *pAge = &age; // we set it equal to the address of the age

    printf("Address of age: %p\n", &age); // %p is used to print memory address in hexadecimal format
    printf("value of pAge: %p\n", pAge); 

    // as you would run this code, you would be able to see that both of them show the address of age

    printf("Value of age: %d\n", age);
    printf("Value at stored address: %d\n", *pAge); // notice how here, we use * but in the previous one, we didn't

    // as you would run this code, you would be able to see that both of them represent the value of age

    return 0; 
}