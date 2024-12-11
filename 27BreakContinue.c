#include <stdio.h>

int main()
{
    // continue: skips rest of code and forces the next iteration of the loop
    // break: exits a loop/used in switch

    // let's say we want to write numbers from 1 to 20 but we want to skip 13

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;       // if we had used break; it would have stopped at 12
        }
        printf("%d\n", i);
    }

    return 0;

}