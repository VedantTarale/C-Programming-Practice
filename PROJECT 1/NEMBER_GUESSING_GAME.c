/*
  WE WILL WRITE A PROGRAM THAT GENERATE A RANDOM NUMBER AND ASKS THE PLAYER TO
  GUESS IT. IF THE PLAYER'S GUESS IS HIGHER THAN THE ACTUAL NUMBER, THE PROGRAM
  DISPLAYS 'LOWER NUMBER PLEASE'. SIMILARLY IF THE USER'S GUESS IS TOO LOW THE PROGRAM PRINTS '' HIGHER NUMBER PLEASE.
  WHEN THE USER GUESSES THE CORRECT NUMBER, THE PROGRAM DISPLAYS THE NUMBER OF GUESSES THE PLAYER USED TO ARRIVE AT THE NUMBER.

  HINT: USE LOOPS
        USE A RANDOM NUMBER GENERATOR.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
    int count = 1; 
    int check=0;
    int temp;
    srand(time(0));
    number = rand()%100 + 1 ;
    printf("%d\n",number);
    int guess;
    printf("A random number has been generated between 1 and 100 both inclusive. The game is to guess the number is the least number of attempts. Good Luck.\n");
    printf("Let's Begin. Take the first guess: ");
    scanf("%d",&guess);
    if(guess==number){
        printf("Congratulations you guessed it first try.\n");
        printf("The number of attempts were 1.\n");
    }
    else{
    while (guess!=number)       
    {
        if (guess>number)
        {
            printf("Your guess was higher than the number, Guess again.  ");
            count++; 
        }
        if (guess<number)
        {
            printf("Your guess was lower than the number, Guess again.  ");
            count++; 
        }
        if (guess==number)
        {
            count++;
            break;
        }
        scanf("%d",&guess);
        }
    printf("You guessed it. The number was %d\n",number);
    printf("Your number of guesses were %d\n",count);
    } 
return 0;    
}