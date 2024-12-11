#include <stdio.h>

int main()
{
    char x = 'X';
    char y = 'Y';
    char temp;

    // we want of swap value of x with y and that of y with x

    temp = x;
    x = y;
    y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);

    return 0;
}