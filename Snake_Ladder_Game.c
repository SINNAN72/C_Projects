#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printBoard(int board[10][10], int A, int B)
{
	int a,b;
	printf("BOARD:\n\n");
	for(a = 0; a < 10; a++) // For printingg Board
	{
		for(b = 0; b < 10; b++)
		{
			int position = board[a][b];
			if(position == A && position == B)
			{
				printf(" A/B ");
			}
			else if(position == A)
			{
				printf(" A ");
			}
			else if(position == B)
			{
				printf(" B  ");
			}
			else if(position == 16)
			{
				printf(" 16# ");
			}
			else if(position == 32)
			{
				printf(" 32# ");
			}
			else if(position == 98)
			{
				printf(" 98* ");
			}
			else if(position == 78)
			{
				printf(" 78* ");
			}
			else
			{
				printf("%3d ",position);
			}
		}
		printf("\n");	
	}
}
int main()
{
	int a,b;
	int A=1,B=1;
	int roll;
	int board[10][10] = {
						 {100,99,98,97,96,95,94,93,92,91},
						 {81,82,83,84,85,86,87,88,89,90},
						 {80,79,78,77,76,75,74,73,72,71},
						 {61,62,63,64,65,66,67,68,69,70},
						 {60,59,58,57,56,55,54,53,52,51},
						 {41,42,43,44,45,46,47,48,49,50},
						 {40,39,38,37,36,35,34,33,32,31},
						 {21,22,23,24,25,26,27,28,29,30},
						 {20,19,18,17,16,15,14,13,12,11},
						 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
						};
					 

	printf("------------SNAKE LADDER GAME------------\n\n");
	
	printf("Ladders at:-\n 16 => 68\n 32 => 57\n\n");
	printf("Snakes at:-\n 78 => 23\n 98 => 38\n\n\n");
	
	srand(time(NULL));
	

	while(1) // Main Game.
	{
		printf("----PLAYER \'A\' TURN----\n\n");
	
		printBoard(board,A,B);

		printf("\n\nPress 0 to Roll a dice A\n");
		scanf("%d",&roll);
		getchar();

		if(roll == 0)
		{
			
			int number = rand() % 6 + 1;

			printf("\nThe Rolled Number is: %d",number);
			
			A = A + number;
			
			if(A == 16)// Ladder
			{
				A = 68;
				printf("\nPlayer A is on the Ladder: 16");
			}
			if(A == 32)// Ladder
			{
				A = 57;
				printf("\nPlayer A is on the Ladder: 32");
			}
			if(A == 98)// Snake
			{
				A = 38;	
				printf("\nPlayer A is on the Snake: 98");
			}
			if(A == 78)// Snake
			{
				A = 23;	
				printf("\nPlayer A is on the Snake: 78");
			}
			if(A > 100)
			{
				A = 100;
			}
			
			printf("\nPlayer A is on the: %d",A);
			
			if(A == 100)
			{
				printf("\nPlayer A WON the Game--------");
				printf("\xF0\x9F\x8F\x86");
				break;
			}
			printf("\n\n");
		}
		
		printf("-----------------------------------\n\n");

		printf("----PLAYER \'B\' TURN----\n\n");

		printBoard(board,A,B);

		printf("\n\nPress 0 to Roll a dice B\n");
		scanf("%d",&roll);
		getchar();
		
		if(roll == 0)
		{
			int number = rand() % 6 + 1;

			printf("\nThe Rolled Number is: %d",number);
				
			B = B + number;
				
			if(B == 16)// Ladder
				{
					B = 68;
					printf("\nPlayer B is on the Ladder: 16");
				}
			if(B == 32)// Ladder
				{
					B = 57;
					printf("\nPlayer B is on the Ladder: 32");
				}
				
			if(B == 78)// Snake
				{
					B = 23;	
					printf("\nPlayer B is on the Snake: 78");
				}
			if(B == 98)//Snake
				{
					B = 38;	
					printf("\nPlayer B is on the Snake: 98");
				}
				
			if(B > 100)
				{
					B = 100;
				}
				
			printf("\nPlayer B is on the: %d",B);
				
			if(B == 100)
				{
					printf("\nPlayer B WON the Game--------");
					printf("\xF0\x9F\x8F\x86");
					break;
				}
				printf("\n\n");
		}
		printf("-----------------------------------\n\n");
	}
	return 0;
}

