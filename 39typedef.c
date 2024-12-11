#include <stdio.h>

// typedef is used with structs
// we will type the code of 37struct.c using typedef

typedef struct
{
    char name[12];
    int score;
}Player;

int main()
{
    Player player1 = {"Vansh", 4};
    Player player2 = {"Harsh", 5};

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score); 

    return 0;
}