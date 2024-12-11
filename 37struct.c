#include <stdio.h>
#include <string.h>

    /*  Struct: struct (short for structure) is a user-defined data type that allows you to group variables of 
        different types under a single name. This is useful for organizing complex data that belong together. 
        Each variable within a struct is called a member or a field.
        Very similar to classes in other languages (but no methods)
    */ 

   struct Player
   {
    char name[12];
    int score;
   };

   int main()
   {
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Vansh");
    player1.score = 4;

    strcpy(player2.name, "Harsh");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score); 

    return 0;

   }
