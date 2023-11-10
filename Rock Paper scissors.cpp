#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int matches(int rounds)
	{
		int x;
		char userchoice,word[10],botword[10];
		int botchoice;
		char correspondingletter;
		int yourwins=0,botwins=0;
		
		for(x=0;x<rounds;x++)
			{
				printf("\nRound %d\n",x+1);
				
				srand(time(NULL));
				botchoice = rand()%3;
				switch(botchoice)
					{
						case 0:
							{
								correspondingletter = 'r';
								strcpy(botword,"rock");
								break;
							}
						case 1:
							{
								correspondingletter = 'p';
								strcpy(botword,"paper");
								break;
							}
						case 2:
							{
								correspondingletter = 's';
								strcpy(botword,"scissors");
								break;
							}
					}
					
				printf("\nAlright. Choose:\nRock(r)\nPaper(p)\nScissors(s)\n>");
				scanf(" %c",&userchoice);
				
				while(userchoice!= 'r' && userchoice!= 'p'&& userchoice!= 's')
					{
						printf("Not one of the options. Choose:\nRock(r)\nPaper(p)\nScissors(s)\n>");
						scanf(" %c",&userchoice);
					}
				
				switch(tolower(userchoice))
					{
						case 'r':
							strcpy(word,"rock");
							break;
						
						case 'p':
							strcpy(word,"paper");
							break;
						
						case 's':
							strcpy(word,"scissors");
							break;
					}
				
				if(tolower(userchoice)==correspondingletter)
					printf("Player - %s\tBot - %s\nDraw!\n",word,botword);
				
				if((tolower(userchoice) == 'r' && correspondingletter == 's') || (tolower(userchoice) == 'p' && correspondingletter == 'r') || (tolower(userchoice) == 's' && correspondingletter == 'p'))
					{
						printf("Player - %s\tBot - %s\nPlayer wins!\n",word,botword);	
						yourwins++;
					}
				
				if((tolower(userchoice) == 's' && correspondingletter == 'r') || (tolower(userchoice) == 'r' && correspondingletter == 'p') || (tolower(userchoice) == 'p' && correspondingletter == 's'))
					{
						printf("Player - %s\tBot - %s\nBot wins!\n",word,botword);	
						botwins++;
					}
				printf("End of Round %d\nPlayer - %d wins \t Bot - %d wins\n",x+1,yourwins,botwins);
				
				if(yourwins-botwins > rounds - (x+1)||(botwins-yourwins > rounds - (x+1))||rounds-(x+1)==0)
					break;	
			}
		if(yourwins > botwins)
			return 1; // 1 = you win
		
		if(botwins > yourwins)
			return 2;
		
		if(botwins == yourwins)
			return 3;		
	}
	
main()
	{
		int sets;
		int winner;
		char YN;
		
		printf("Welcome to wrestlemania :) With your hands. It's Rock Papers Scissors boys\n\n");
		do
			{
				printf("Firstly, how many sets do you want? [Postive Odd numbers only]\n>");
				scanf(" %d",&sets);
				while(sets < 1 || sets%2 != 1)
					{
						printf("Hold up sir, You think this is a joke? Try again bud.\n>");
						scanf(" %d",&sets);
					}
				winner = matches(sets);
				
				switch(winner)
					{
						case 1:
							printf("\nCongrats on winning! You aced the bot\n");
							break;
						
						case 2:
							printf("\nBetter luck next time champ. Bot trashed you\n");
							break;
						
						case 3:
							printf("\nEven fights are the best to watch. It wasn't a win but you won our hearts\n");
							break;
					}
				printf("Do you want to play again?[Y - Yes|N - No]\n>");
				scanf(" %c",&YN);
				if(tolower(YN) != 'n'&&tolower(YN)!='y')
					printf("Well I'll take that as a no\n");
			}while(tolower(YN)=='y');
		printf("Thanks for playing!\n");
	}
