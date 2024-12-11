#include <stdio.h>

// ==: used to compare two values for equality 
// =: used to assign a value to a varaible

int main() {

    int age; 

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)  {                                // notice that you don't use ";" after )

        printf("You are signed up!");
    }

    else if (age < 0) {                             // notice that you don't use ";" after )

        printf("You have not been born yet!");
    }

    else {
        printf("You are not eligible to sign up");
    }

    return 0;

    /*
        if: Used for the initial condition check.
        else if: Used for subsequent condition checks if previous conditions are false.
        else: Used to execute code if none of the previous conditions are true.
    */
}