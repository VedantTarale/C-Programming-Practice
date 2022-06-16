/*
Write a program to play Sanke Water Gun with you.
Your program should be able to print the result after you choose 
Snake water or gun.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int again;
    char will,input;
    int initial_draw;
    
    printf("This is Snake Water Gun!\n");
    printf("Would you like to play?(y/n): ");
    scanf("%c",&will);
    if (will == 'y' || will == 'Y'){
        again = 1;
    }
    else if (will == 'n' || will == 'N'){
        again=0;
        printf("Thanks for visiting");
    }
    while (again)
    {
        srand(time(0));
        initial_draw = rand()%3 + 1;         // 1 = snake    2 = water   3 = gun
        fflush(stdin); 
        printf("To Choose Snake press: S\n");
        printf("To Choose Water press: W\n");
        printf("To Choose Gun press: G\n");
        printf(": ");
        scanf("%c",&input);

        if ((input=='S' || input=='s') && initial_draw ==2)
        {
            printf("The Programm chose Water. Your Choice was Snake.\n");
            printf("Congratulations!! You Won");
        }    
        else if ((input=='w' || input=='W') && initial_draw ==3)
        {
            printf("The Programm chose Gun. Your Choice was Water.\n");
            printf("Congratulations!! You Won");
        }    
        else if ((input=='G' || input=='g') && initial_draw ==1)
        {
            printf("The Programm chose Snake. Your Choice was Gun.\n");
            printf("Congratulations!! You Won");
        }    
        else if ((input=='G' || input=='g') && initial_draw ==2)
        {
            printf("The Programm chose Water. Your Choice was Gun.\n");
            printf("Sorry!! You lost...");
        }    
        else if ((input=='W' || input=='w') && initial_draw ==1)
        {
            printf("The Programm chose Snake. Your Choice was Water.\n");
            printf("Sorry!! You lost...");
        }    
        else if ((input=='S' || input=='s') && initial_draw ==3)
        {
            printf("The Programm chose Gun. Your Choice was Snake.\n");
            printf("Sorry!! You lost...");
        }
        else if (((input=='S' || input=='s') && initial_draw ==1)||((input=='w' || input=='W') && initial_draw ==2)||((input=='G' || input=='g') && initial_draw ==3)){
                printf("Both the program and you choose the same.\n");
                printf("Its a draw.\n");
        }
        else{
            printf("Invialid input!");
        }    
    fflush(stdin);
    printf("Would you like to play again?(y/n): ");
    scanf("%c",&input);
    fflush(stdin);
    if(input=='y'||input=='Y'){
        again=1;
    }
    else if(input=='n'||input=='N'){
        printf("Thanks for playing.");
        again=0;
    }
    else
    {
        printf("Invalid Input!!");
        again=0;
    }
    }
    return 0;
}