#include <stdio.h>

// what if instead of typing just one of the values of array, we want to type all of them?
// for that purpose, we use for loops

int main()
{
    double prices[10] = {5.0, 10.0, 15.0, 25.0, 20.0};
    int i;
    for (int i = 0; i < 5; i++)
    {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}