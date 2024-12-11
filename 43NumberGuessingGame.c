#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess, answer;
    int guesses = 0;

    srand(time(0)); // uses the current time as seed to generate some random numbers

    answer = (rand() % MAX) + MIN; // generate a random number between MIN and MAX
    // rand() % MAX: Generates a random number between 0 and MAX - 1.

    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if (guess > answer)
        {
            printf("Too High!\n");
        }

        else if (guess < answer)
        {
            printf("Too Low!\n"); 
        }

        else
        {
            printf("CORRECT!!!\n"); 
        }
        guesses ++;

        if (guesses == 7)
        {
            printf("You lost the game! No guesses remained!!");
            break;
        }
    } while (guess != answer); 

    printf("answer: %d\n", answer); 
    printf("guesses: %d\n", guesses); 

    return 0; 
    
}