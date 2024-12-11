#include <stdio.h>
#include <string.h>

// WHILE LOOP: repeats a section of code possibly unlimited times when some condition remains true
// a while loop might not execute at all if the given condtion is not met

int main() {
    char name[25]; 

    printf("What's your name? "); 
    fgets(name, 25, stdin); 
    name[strlen(name) - 1] = '\0';            // removing the newline character

    while (strlen(name) == 0)
    {
        printf("\nYou did not enter your name");    // we are forcing the person to enter his name, if he does not, this loop keeps repeating

        printf("\nWhat's your name? "); 
        fgets(name, 25, stdin); 
        name[strlen(name) - 1] = '\0';
    }


    printf("\nHello %s", name);

    return 0;
}