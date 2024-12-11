/* FUNCTION PROTOTYPE: it is function declaration, without a body, before main()
   It ensures that calls to a function are made with the correct arguments

   IMP NOTES:
   - Many C compilers do not check for parameter matching
   - Missing arguments will result in unexpected behaviour 
   - A function prototype causes the compiler to flag an error if arguments are missing

   ADVANTAGES:
   - Easier to navigate with main() function at the top
   - Helps with debugging
   - Commonly used in header files
*/ 

#include <stdio.h> 

void hello(char[], int);                // function prototype 

int main() 
{
    char name[] = "Vansh";
    int age = 18;

    hello(name, age); 

    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age); 
}
