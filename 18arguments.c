#include <stdio.h>

void birthday(char name[], int age)                   // parameters: what a function expects when it's envoked
{
    printf("Happy Birthday dear %s!\n", name);
    printf("You are %d years old!", age); 
}

int main() {
    
    char name[] = "Vansh";
    int age = 18;

    birthday(name, age);                              // arguments: what you are sending a function (name and age are arguments here)

    return 0; 

}

// the order of the data types should remain the same, otherwise the names can change like
/* #include <stdio.h>

void birthday(char x[], int y)                        // names are changed                         
{
    printf("Happy Birthday dear %s!\n", x);
    printf("You are %d years old!", y); 
}

int main() {
    
    char name[] = "Vansh";
    int age = 18;

    birthday(name, age);                                        

    return 0; 

}                                                                                   */

