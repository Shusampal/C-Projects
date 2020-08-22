#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char com_character()
{
    char com;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        com = 's';
        return com;
    }
    else if (number > 33 && number < 66)
    {
        com = 'w';
        return com;
    }
    else
    {
        com = 'g';
        return com;
    }
}

int result_game(char com, char you)
{
    // c=y
    if (com == you)
    {
        return 0;
    }

    // c=s and y = w
    if (com == 's' && you == 'w')
    {
        return -1;
    }
    // c=w and y = s
    if (com == 'w' && you == 's')
    {
        return 1;
    }

    // c=s and y = g
    if (com == 's' && you == 'g')
    {
        return 1;
    }
    // c=g and y = s
    if (com == 'g' && you == 's')
    {
        return -1;
    }

    // c=g and y = w
    if (com == 'g' && you == 'w')
    {
        return 1;
    }
    // c=w and y = g
    if (com == 'w' && you == 'g')
    {
        return -1;
    }
}
int main()
{

    char com, you;
    com = com_character();
    printf("Enter s for snake , w for water , g for gun\n");
    scanf("%c", &you);
    printf("\n");
    int result = result_game(com, you);
    if (result == 0)
    {
        printf("The game is draw !! Play again \n");
    }
    if (result == 1)
    {
        printf("You won the game !! WOW !!\n");
    }
    if (result == -1)
    {
        printf("You lose the game !! Better Luck next time\n");
    }
    printf("\nYou chose %c and computer choose %c\n\n", you, com);
    return 0;
}