    // Switch: It is a more efficient alternative to using many "else if" statements. It allows 
    //         a value to be tested for equality against many cases

    /* so now let's consider a case where we would be using else if statements

    #include <stdio.h>
    int main(){

    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    if (grade == 'A') {
        printf("perfect!\n");
    }
    else if (grade == 'B') {
        printf("you did good!\n");
    }
    else {
        printf("this is not a valid grade\n");
    }

    return 0;

    }                                    */

   // now let's use switch statements 

   #include <stdio.h>
   #include <ctype.h>              // for using toupper function

   int main() {

    char grade;

    printf("Enter your grade\n");
    scanf("%c", &grade); 

    grade = toupper(grade);         // to use this, you will need <ctype.h> library

    switch(grade) {                 // type the value which you would like to examine in "()"
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        default:                     // this is like else statement, like if no other cases match
            printf("Please enter only valid grades"); 
    }

    //The expression in the switch statement must be of an integral type (such as int, char, or enum).
    // It cannot be a floating-point type or a complex expression.

    // Use if-else for more complex, flexible conditions and switch for simpler, discrete value checks.
   }
