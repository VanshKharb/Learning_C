#include <stdio.h>

// ENUM: It is a user-defined data type consisting of a set of named integer constants. 
//       The purpose of using enum is to assign names to integral constants,
//       which can make a program easier to read and maintain.

enum Day {Sunday = 2, Monday = 3, Tuesday = 4, Wednesday = 5, Thursday = 6, Friday = 7, Saturday = 8}; 

// now, had we used array of strings, and if we would have to print it using printf function
// we would have done so by using the names assigned to each variable, like for Sunday, the 
// value for it will be 0, and so on, which makes the code hard to read, in order to tackel 
// this problem we have enum, we can directly use names. On default, numbers from 0 are assigned 
// them, but you can assign number to them according to your choice too.

// Internally, enums are represented as integers, which are memory-efficient and performant.

int main()
{
    enum Day today = Sunday;
    printf("%d", today); // enums are not strings, they can be treated as integers

    // let's take a look at a example of enums

    if (today == Sunday || today == Saturday)
    {
        printf("\nIt's the weekend! Party time!");
    }

    else 
    {
        printf("\nWe gotta grind our ass on work today");
    }

    return 0;
    
}