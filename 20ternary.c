#include <stdio.h>

// ternary operator = shortcut to if/else when assigning/returning a value
// (condition) ? value if true : value if false

int findmax(int x, int y)
{
    if (x > y) 
    {
        return x;
    }
    else
    {
        return y; 
    }
}

int main()
{
    int max = findmax(3, 4);

    printf("%d", max);

    return 0;
} 

// on the other hand, if we had used the ternary operator

#include <stdio.h>

int findmax(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    int max = findmax(3, 4);

    printf("%d", max);

    return 0;
}