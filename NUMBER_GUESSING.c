#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int guess,number,attempts=0;
    srand(time(0));
    number=rand()%100+1;
    printf("\n----GUESSING GAME----------\n");
    printf("I have chosed 1 to 100 \n");
    printf("Try to guess it \n");

    do{
        printf("\n Enter your guess");
        scanf("%d",&guess);

        attempts++;
        if(guess>number)
        {
            printf("Too high!Try again \n");
        }
        else if(guess<number)
        {
            printf("Too low!Ty again \n");
        }
        else
        {
            printf("You guessed the number in %d attempts \n",attempts);
        }
    }while(guess!=number);
}