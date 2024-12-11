#include <stdio.h>
// here, we will try to put numbers in increasing order

void sort(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j + 1])       // here we are checking if the element on the left is greater, if yes, then we swap
            {                                 // if you want it in descending order, then simply change the sign to if(array[j] < array[j +1])
                int temp = array[j];          //You could write it like this also: 
                array[j] = array[j+1];        // int temp = array[j + 1];
                array[j+1] = temp;            // array[j + 1] = array[j];
            }                                 // array[j] = temp;              so j and j + 1 can be interchanged
        }
    }
}

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]); 
    }
}

int main()
{
    int array[] = {0, 1, 8, 2, 7, 3, 6, 4, 5}; 
    int size = sizeof(array)/sizeof(array[0]); 

    sort(array, size); 
    printArray(array, size); 

    return 0; 
}
