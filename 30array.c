#include <stdio.h>

int main()
{
    // what if we do not know how many elements are there in the array and we want to print all of them?
    // for that we need to know how many elements are there in the array

    /* Calculating the number of elements in the array:
       sizeof() function calculates the number of bytes and if we divide the number of bytes in the complete array
       by the number of bytes in one element of the array, we would get the number of elements in the array  
    */

   double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

   for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
   {
        printf("$%.2lf\n", prices[i]);
   }

   return 0;

}