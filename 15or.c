#include <stdio.h>
#include <stdbool.h>

// Logical operators = || (OR) checks if at least one condition is true

int main() {

    float temp; 

    printf("What's the temp? ");
    scanf("%f", &temp);

    if (temp <= 0 || temp >= 30) {
        printf("The temp at %f is no suitable.", temp);
    }

    else {
        printf("The temp at %f is suitable.", temp);
    }

    return 0;
    
}