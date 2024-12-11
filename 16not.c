#include <stdio.h>
#include <stdbool.h>

// logical operators = ! (NOT) reverses the state of a condition

int main() {

    bool sunny = true;

    if (!sunny) {                                // it says if it's not sunny
        printf("It's cloudy outside!");
    }
    else {
        printf("It's sunny outside!");
    }

    return 0;

}