#include <stdio.h>

int main()
{
    // Array: a data structure that can store many values of the same data type.
    // Initializing an array is much like naming a varaible, except you have to add sqare brackets at the end

    double prices[10] = {5.0, 1.0, 15.0, 25.0, 20.0};   // here [10] means you can add 10 values, we have only added 5, so we can add 5 more

    printf("$%.2lf", prices[0]); // the counting starts from 0, so 0th number in the array is 5.0

    return 0;
    
}