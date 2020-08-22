#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int number,guess,n_of_guesses=1;
    srand(time(0));
    number=rand()%100 +1;
    do{
        printf("Enter guess number between 1-100 \n");
        scanf("%d",&guess);
        printf("\n");
        if(guess>100 || guess<1){
            printf("!! Invalid number !!\n\n");
        }
        else if(guess>number){
            printf("!! enter lower number !!\n\n");
        }
        else if(guess<number){
            printf("!! enter higher number !!\n\n");
        }
        else{
            printf("You guessed it right in %d attempsts\n",n_of_guesses);
        }
        
        n_of_guesses++;
    }while(guess!=number);
    return 0;
}