#include <stdio.h>

// WHILE LOOP = checks a condition, THEN executes a block of code if condition is true
// DO WHILE LOOP = always executes a block of code once, THEN checks a condition

int main()
{
    int number = 0;
    int sum = 0;

    do
    {
        printf("Enter a number above 0: "); 
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;                       // sum = sum + number
        } 
    } while (number > 0); 


}