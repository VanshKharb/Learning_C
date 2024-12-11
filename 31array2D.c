#include <stdio.h>

int main()
{
    // 2D array: an array, where each element is an entire array of it's own.
    //           It is useful if you need a matrix, grid, or table of data

    int numbers[2][3] = {{1, 2, 3},{4, 5, 6}}; // here, you need to have 2 square brackets and the second one should not be empty
                                               // the first one is for the number of rows and other for the columns

    /* for better understanding, we can also write it like this:
       int numbers[2][3] = {
                             {1, 2, 3},
                             {4, 5, 6}
                            };
        now, it looks more of like a matrix 

        we can also write it like this:
        int numbers[2][3];                      // declaration

        numbers[0][0] = 1;
        numbers[0][1] = 2;
        numbers[0][3] = 3;
        numbers[1][0] = 4;
        numbers[1][1] = 5;
        numbers[1][2] = 6;
    */

   // for writing these, we use nested for loops

   for(int i = 0; i < 2; i++)
   {
    for(int j = 0; j < 3; j++)
    {
        printf("%d ", numbers[i][j]); 
    }
    printf("\n"); 
   }

   return 0;

}