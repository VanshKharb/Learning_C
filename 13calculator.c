#include <stdio.h>

int main()
{
    char operator;

    printf("Enter an operator(+, -, *, /): ");
    scanf("%c", &operator);

    float a, b;
    printf("Enter the value of first number: ");
    scanf("%f", &a);
    printf("Enter the value of second number: ");
    scanf("%f", &b);

    switch(operator)
    {
        case '+':
            printf("%.1f + %.1f = %.1f", a, b, a + b);
            break;

        case '-':
            printf("%.1f - %.1f = %.1f", a, b, a - b);
            break;

        case '*':
            printf("%.1f * %.1f = %.1f", a, b, a * b);
            break;

        case '/':
            switch (b == 0)
            {
                case 1:
                    printf("ERROR! Division by zero is not allowed.\n");
                    break;
                case 0:
                    printf("%.1f / %.1f = %.1f", a, b, a / b);
                    break;
            }
            break;

        default:
            printf("%c is not a valid operator", operator);
    }

    return 0;
}