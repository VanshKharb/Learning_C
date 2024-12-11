#include <stdio.h>

int main()
{
    // Now, what if we don't know how many rows and columns are there?
    // then we got to calculate them
    int numbers[2][4    ] = {
                             {1, 2, 3},
                             {4, 5, 6}
                        };

    int rows = sizeof(numbers)/sizeof(numbers[0]);                // we are divding the total number of bytes in the 2D array with the number of bytes in one row
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);       // it divides the size of bytes in one row with the size of byte of one element

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);

    for(int i = 0; i < rows; i++)
    {
        for(int j =0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}