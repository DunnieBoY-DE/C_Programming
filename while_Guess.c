//Building a guessing game
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretWord = 5;
    int guess;
    int guess_count = 0;
    int guess_limit = 5;
    int out_of_guesses = 0;
    
    while(guess != secretWord && out_of_guesses == 0)
    {
        if(guess_count < guess_limit)
        {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            guess_count++;
        }
        
        else
        {
            out_of_guesses = 1;
        }
    }
    if(out_of_guesses == 1)
    {
        printf("You are out of guesses, You LOSE!\n");
    }
    else
     {
        printf("You win!\n");
     }
    /*int secretNumber = 5;
    int guess;
    
    while (guess != secretNumber)
    {
        printf("Enter a number: ");
        scanf("%d", &guess);
    }
    printf("You WIN!\n");*/
    return 0;
}


























