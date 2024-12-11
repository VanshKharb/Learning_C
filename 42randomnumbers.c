#include <stdio.h>
#include <stdlib.h>  // it provides functions for memory allocation, process control, conversions, and random numbers (eg, srand, rand)
#include <time.h>    // it provides functions to manipulate date and time (e.g., time).

// pseudo random numbers: A set of values or elements that are statistically random
// we will write a code where we will get a random number between 1 and 6 (it's like rolling a dice)

int main()
{
    // rand() function generates a random number between 0 to ~30,000

    srand(time(0)); //srand() is used to set the seed for rand(), ensuring that you get different 
                    // sequences of random numbers each time you run the program.
                    // time(0) returns the current calendar time as a value of type time_t, which is
                    // typically the number of seconds since the Unix epoch (January 1, 1970). This ensures 
                    // that the seed changes every second.

    // in order to generate a random number betweeen min and max,
    // use the following:
    // int random_number = (rand() % max - min + 1) + min; 

    int number1 = (rand() % 6) + 1; // here, we are generating a random number between 1 and 6, both inclusive
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;

}