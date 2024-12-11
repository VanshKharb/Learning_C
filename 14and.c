#include <stdio.h>
#include <stdbool.h>    // this is for the boolean expressions

// logical operators = && (AND) checks if two conditions are true

int main() {

    float temp;
    bool sunny;

    printf("What's the temp? ");
    scanf("%f", &temp); 

    printf("\nIs it sunny? ");
    scanf("%d", &sunny);

    if (temp >=0 && temp <= 30 && sunny == 1) {
        printf("The weather is good!");
    }
    else {
        printf("The weather is bad!");
    }

    return 0; 
    
}