#include <stdio.h>

int main()
{
    // MEMORY: an array of bytes within RAM (street)
    // MEMORY BLOCK: single unit (byte) within memory, used to hold some value (person)
    // MEMORY ADDRESS: the address where a memory block is located (house address) 

    char a = 'X'; 
    char b = 'Y';
    char c = 'Z'; 

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c)); 

    printf("%p\n", &a);    //The format specifier %p in C is used to print the memory address (pointer) stored in a pointer variable.
    printf("%p\n", &b);    // Notice that '&' is used
    printf("%p\n", &c);

    return 0;

}