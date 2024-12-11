#include <stdio.h>

int main(){
    // for a variable, we need declaration + initialization
    // we need to preceed the name of our variable with the data type

    int x; // this step is DECLARATION, notice that "x" is the name of the variable and we have precedded it with the data type

    // storing a value is initialization 
    x = 123; //initialization 


    // we can also combine both declaration and initialization 
    int y = 321; // both

    /* different types of variables:*/
    int age = 18;                // integer
    float gpa = 2.45;            // decimal point numbers
    char grade = 'C';            //stores only single character, has to be enclosed in ''
    // there is no string data type, so in order to type a string, we would create an array as following:
    char name[] = "Vansh";       // we place [], and place the name in " " 

    //How to use these variables in printf?
    /* in order to do that, we will use something called format specifiers, like
     %i or %d for integers
     %f for floating point, %.nf for n decimal places
     %c for characters
     %s for string

     then after " write ',' and type the name of the variable      */
     //for example
     printf("Hello %s\n", name);
     printf("you are %d years old\n",age);
     printf("your average grade is %c\n", grade);
     printf("your gpa is %.2f",gpa);


    return 0; 
}