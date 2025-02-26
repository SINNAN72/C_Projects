#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int rdnum,gnum;
    int turns = 0;
    char play;

    srand(time(NULL));

    

    

    do
    {
        rdnum = rand() % 100 + 1;
        turns = 0;

        printf("\n---------Number Guessing Game----------\n");
        printf("Guess a Number between 1-100.\n");

        while(1)
        {
            printf("\nEnter Your Guessed Numebr:\n");
            scanf("%d",&gnum); 

            turns++;  

            if(rdnum > gnum)
            {
                printf("Too LOW\n");
            }
            else if(rdnum < gnum)
            {
                printf("Too HIGH\n");
            }
            else
            {
                printf("\nCongratulation! Your guess is Correct! The Generated Number is: %d\n",rdnum);
                printf("You Guessed the Number in %d Turns\n",turns);
                break;
            }
        }   

        printf("Do you want to play again (y/n):\n");
        scanf(" %c",&play);

    } while (play == 'y' || play == 'Y');

    printf("\nThank you for playing!\nSee You Next Time!\n");

    return 0;
}