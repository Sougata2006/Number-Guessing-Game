#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    srand(time(0));

    int randomnum = (rand()% 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    do {

        printf("guess the number ");
        scanf("%d",&guessed);
        if (guessed <randomnum){
            printf("HIGHER NUMBER PLEASE!\n!");
        }
        else if (guessed >randomnum){
            printf("LOWER NUMBER PLEASE!!\n");
        }
        else {
            printf("congrats\n");
        }

        no_of_guesses++;
    }
while( guessed!=randomnum);
    printf("you guessed the number in %d guesses",no_of_guesses);

 

    return 0;
}
