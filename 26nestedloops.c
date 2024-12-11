#include <stdio.h>

int main()
{
    //Nested Loop: A loop inside of another loop

    int rows, columns;
    char symbol;

    printf("Enter number of rows: ");
    scanf("%d", &rows); 

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    while ((getchar()) != '\n');                           // to remove the newline character from the previous scanf function

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)                       // It controls the number of rows that will be printed.
    {
        for(int j = 1; j <= columns; j++)                 // It controls the number of columns that will be printed in each row
        {
            printf("%c", symbol);                         // for each row, the symbol is printed
        }
        printf("\n");
    }

    return 0; 
}