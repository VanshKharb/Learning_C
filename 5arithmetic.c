#include <stdio.h>

int main(){

    /* 
    arithmetic operators:
    + (addition)
    - (subtraction)
    * (multiplication)
    / (division)
    % (modulus)
    ++ (increment)
    -- (decrement) 
    */

    int x = 5;
    int y = 2;

    float z = x / (float) y; // we had to specify y as to be float to get the answer as 2.5, otherwise the answer will be 2.000
    printf("%.1f\n", z);
    
    x++;
    y--;
    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
    
}