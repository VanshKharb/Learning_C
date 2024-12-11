#include <stdio.h>
#include <string.h>

int main()
{
    // instead of swapping char, we will now try to swap string

    char x[] = "water";
    char y[] = "lemonade";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;

    /* This will work just fine till the size of x is smaller than y, you'll run into errors when the size of y is smaller than x, in
       order to fix this error, we will set the size of both of the strings as to be same and the problem will be solved!
    */
}