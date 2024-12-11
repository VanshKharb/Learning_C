#include <stdio.h>

// return: returns a value back to a calling function

double square(double x)                // we did not use void square, because the return value is result, which is double
{
    double result = x * x;
    return result;
}

int main()
{
    double x;
    x = square(3.14); 
    
    printf("%lf", x); 

    return 0; 
}