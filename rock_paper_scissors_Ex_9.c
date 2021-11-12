#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

//Create Rock, Paper & Scissors Game
// Player 1: rock
// Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer.
// Log the scores of computer and the player. Display the name of the winner at the end.
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

static int me = 0;
static int comp = 0;

void game(int k, int l)
{
   
    if (k == 1 && l == 1)
    {
        printf("*******It's a Tie!*******\n");
        me;
        comp;
        printf("You: %d   Computer:  %d\n\n", me, comp);
    }
    else if (k == 1 && l == 2)
    {
        printf("*******Computer Wins!*******\n");
        me;
        comp++;
        printf("You: %d   Computer:  %d\n\n", me, comp);
    }
    else if (k == 1 && l == 3)
    {
        printf("*******You win!*******\n");
        me++;
        comp;
        printf("You: %d   Computer:  %d\n\n", me, comp);
    }

    else if (k == 2 && l == 1)
    {
        printf("*******You win!*******\n");
        me++;
        comp;
        printf("You: %d   Computer:  %d\n\n", me, comp);

    }
    else if (k == 2 && l == 2)
    {
        printf("*******It's a Tie!*******\n");
        me;
        comp;
        printf("You: %d   Computer:  %d\n\n", me, comp);

    }
    else if (k == 2 && l == 3)
    {
        printf("*******Computer Wins!*******\n");
        comp++;
        me;
        printf("You: %d   Computer:  %d\n\n", me, comp);

    }

    else if (k == 3 && l == 1)
    {
        printf("*******Computer Wins!*******\n");
        comp++;
        me;
        printf("You: %d   Computer:  %d\n\n", me, comp);

    }
    else if (k == 3 && l == 2)
    {
        printf("*******You win!*******\n");
        me++;
        comp;
        printf("You: %d   Computer:  %d\n\n", me, comp);

    }
    else if (k == 3 && l == 3)
    {
        printf("*******It's a Tie!*******\n");
        me;
        comp;
        printf("You: %d   Computer:  %d\n\n", me, comp);

    }
    else
    {
        printf("*******Enter a valid entity!*******\n\n");
    }
}

int main()
{
    int num;
    int random;
    char dict[] = {'R', 'P', 'S'};
    printf("Welcome to the Game of (ROCK, PAPER & SCISSORS) made by Casanova...\n\n");
    int count = 3;
    for (int i = 0; i < count; i++)
    {
        printf("Select ('1' for Rock) ('2' for Paper) and ('3' for Scissors): \n");
        scanf("%d", &num);
        printf("\n");
        random = generateRandomNumber(3) + 1;
        printf("You choose: %c   Computer choose: %c\n", dict[num - 1], dict[random - 1]);
        game(num, random);
    }
    if (me > comp)
    {
        printf("HURRAY!!! YOU ARE THE CHAMPION...");
    }
    else if (me < comp)
    {
        printf("YOU ARE TOO WEAK TO DEFEAT ME...");
    }
    else
    {
        printf("MATCH TIED...");
    }
    
    // printf("The random number between 0 to 7 is: %d\n", generateRandomNumber(3) +1);
    return 0;
}