#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


#define wordcount 20

void welcome()
	{
		printf("\t\t\tWELCOME TO HANGMAN WHERE YOU TRY NOT TO GET HANGED\n\n");
	}


void hang(int attempts)
	{
		switch(attempts)
			{
				case 5:
					{
						printf("\tO");
						break;
					}
				case 4:
					{
						printf("\tO\n\t|");
						break;
					}
				case 3:
					{
						printf("\t O\n\t/|");
						break;
					}
				case 2:
					{
						printf("\t O\n\t/|~~ ");
						break;
					}
				case 1:
					{
						printf("\t O\n\t/|~~ \n\t/");
						break;
					}	
				case 0:
					{
						printf("\t O\n\t/|~~ \n\t/ ~~");
						break;
					}					
			}
		printf("\n\n");
	}
main()
	{		
				char alphabetholder[26] = {}; //holds the letters that are correct
				int attempts = 6; //the amount of tries the user has
				int wordnum; //holds the index location of the word to be guessed
				int x,z,a = 0; //x,a and z are used for the for loops 
				int y = 0;// y is used to hold the next index location of the alphabet holder variable
				int underscores; //responsible for the amount of underscores displayed
				char guess;//the users letter guess
				int indicator = 5;//allows the program to know to not count letters more than once
				char wrongletters[26] = {}; //holds all letters that are not in the word
				int wronglettercount = 0; //holds the index location of the wrong letters variable
				int leaver = 1;//leaver check is used in the for loop when the user tries to enter letters already used
				int goodguess=5;//indicator used to see
				int YN;
				int anotherholder=0;
				int spaceindicator=0; //allows the program to place underscores when letters are being sued
				int decider = 0;
				int loser = 0;
		
			struct wordchoices		
					{
						char choice[20];
					};
			struct wordchoices hangman[wordcount];	
			FILE *fp = fopen("words.txt","r");
		
			for(x=0;x<wordcount;x++)
				fscanf(fp,"%s",&hangman[x].choice);	
		do
			{						
				srand(time(NULL)); //allows the ability for a rnadom number to be chosen
				
				wordnum = rand()%wordcount; //chooses the index locaiton
				underscores = strlen(hangman[wordnum].choice);
				
				system("CLS");
				welcome();
				system("PAUSE");
				
				printf("\n\nThe word is down below\n\n");
				for(x=0;x<underscores;x++)
					printf("_ "); //prints the amount of letters
				printf("\n");
		
				while(attempts != 0)
					{
						goodguess = 5;
						indicator = 5;
						do
							{
								printf("\n\n\nGuess a letter\n>");
								scanf(" %c",&guess);
								guess = tolower(guess);
								getchar();
								leaver = 0;
								for(z=0;z<26;z++)
									{ 
										if(alphabetholder[z]==guess||wrongletters[z]==guess)
											{
												printf("You have already entered this letter\nThe letters used already are: ");
												for(x=0;x<wronglettercount;x++)
													{
														printf("%c ",wrongletters[x]);
														leaver = 1;
													}
												for(x=0;x<y;x++)
													{
														printf("%c ",alphabetholder[x]);
													}
												break;
											}
									}
							}while(leaver == 1);
				
						printf("\n");
						for(x=0;x<underscores;x++)
							{
								if(guess==hangman[wordnum].choice[x])
									{			
										printf("Good Guess...\n\n");				
										if(indicator == 5)
											{
												alphabetholder[y]= guess;
												y++;
												indicator = 0;
											}
										while(hangman[wordnum].choice[anotherholder] != '\0')
											{
												for(z=0;z<y;z++)
													{
														if(hangman[wordnum].choice[anotherholder] == alphabetholder[z])
															{														
																printf("%c ",alphabetholder[z]);
																spaceindicator = 3;
															}					
													}
												if(spaceindicator != 3)
													{
														printf("_ ");
													}
												anotherholder++;
												spaceindicator = 0;
											}								
										goodguess=0;	
										anotherholder = 0;	
									
										while(alphabetholder[a]!= '\0')	
											{
												for(x=0;x<underscores;x++)
													{
														if(alphabetholder[a]==hangman[wordnum].choice[x])
															{
																decider++;
															}
													}
												a++;
											}
										if(decider == underscores)
											{
												printf("You have guessed the word '%s'! Good Job!",hangman[wordnum].choice);
												loser = 1;
												attempts = 0;
												break;
											}					
										decider = 0;
										a = 0;						
									}				
							}	
						if(goodguess != 0)
							{
								attempts--;
							//	system("CLS");
								hang(attempts);
								printf("\nThere is none of that letter\n");
								while(hangman[wordnum].choice[anotherholder] != '\0')
									{
										for(z=0;z<y;z++)
											{
												if(hangman[wordnum].choice[anotherholder] == alphabetholder[z])
													{														
														printf("%c ",alphabetholder[z]);
														spaceindicator = 3;
													}					
											}
										if(spaceindicator != 3)
											{
												printf("_ ");
											}
										anotherholder++;
										spaceindicator = 0;
									}		
								anotherholder = 0;							
								wrongletters[wronglettercount] = guess;
								wronglettercount++;
							}
					}
				if(loser == 0)
					{
						printf("\n\nUnfortunately, you didnt guess the word '%s' you've been hanged. Better luck next time!\n\n",hangman[wordnum].choice);
					}			
				strcpy(alphabetholder,"\0");
				strcpy(wrongletters,"\0");
				decider = 0, loser = 0;
				a = 0;		
				attempts = 6;
				y = 0, goodguess=5,anotherholder=0;
				indicator = 5;
				wronglettercount = 0,leaver = 1,spaceindicator=0;
				printf("Do you want to play again?\n1)Yes\n2)No\n>");
				scanf("%d",&YN);
			}while(YN==1);
	}
