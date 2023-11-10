#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>


void menu()
	{
		printf("Welcome to Tic-Tac-Toe!\n");
		printf("Would you like to:\n1)Play against another player\n2)Play against the computer\n3)Exit\n>");
	}

struct players
	{
		int numbers[5];
	};

struct players online[2];
struct players single[2];

int gridstructure1(struct players any[])
	{
		int x;
		int found = 0;
		
		for(x=0;x<5;x++)
			{
				if(any[0].numbers[x]==1)	
					{
						printf("  x |");
						found=1;
						return 1;
					}
				else if(any[1].numbers[x]==1)
					{
						printf("  o |");
						found=1;
						return 2;
					}			
			}
				
		if(found==0)
			{
				printf("  1 |");
				return 0;
			}
		
	}

int gridstructure2(struct players any[])
	{
		int x;
		int found = 0;
		
		for(x=0;x<5;x++)
			{
				if(any[0].numbers[x]==2)	
					{
						printf("  x |");
						found=1;
						return 1;
					}
				else if(any[1].numbers[x]==2)
					{
						printf("  o |");
						found=1;
						return 2;
					}
							
			}
		if(found==0)
			{
				printf("  2 |");
				return 0;
			}
	}

int gridstructure3(struct players any[])
	{
		int x;
		int found = 0;
		
		for(x=0;x<5;x++)
			{
				if(any[0].numbers[x]==3)	
					{
						printf("  x\n");
						found=1;
						return 1;
					}
				else if(any[1].numbers[x]==3)
					{
						printf("  o\n");
						found=1;
						return 2;
					}		
			}
		if(found==0)
			{
				printf("  3\n");
				return 0;
			}		
	}
	
int gridstructure4(struct players any[])
	{
		int x;
		int found = 0;
		
		for(x=0;x<5;x++)
			{
				if(any[0].numbers[x]==4)	
					{
						printf("  x |");
						found=1;
						return 1;
					}
				else if(any[1].numbers[x]==4)
					{
						printf("  o |");
						found=1;
						return 2;
					}				
			}
		if(found==0)
			{
				printf("  4 |");
				return 0;
			}			
	}
	
int gridstructure5(struct players any[])
	{
		int x;
		int found = 0;
		
		for(x=0;x<5;x++)
			{
				if(any[0].numbers[x]==5)	
					{
						printf("  x |");
						found=1;
						return 1;
					}
				else if(any[1].numbers[x]==5)
					{
						printf("  o |");	
						found=1;
						return 2;
					}				
			}
		if(found==0)
			{
					printf("  5 |");
					return 0;
			}
	}

int gridstructure6(struct players any[])
	{
		int x;
		int found = 0;
	
		for(x=0;x<5;x++)
			{
				if(any[0].numbers[x]==6)	
					{
						printf("  x\n");
						found=1;
						return 1;
					}
				else if(any[1].numbers[x]==6)
					{
						printf("  o\n");
						found=1;
						return 2;
					}				
			}
		if(found==0)
			{
					printf("  6\n");
					return 0;
			}
	}
	
int gridstructure7(struct players any[])
	{
		int x;
		int found = 0;
		
		for(x=0;x<5;x++)
			{
				if(any[0].numbers[x]==7)	
					{
						printf("  x |");
						found=1;
						return 1;
					}
				else if(any[1].numbers[x]==7)
					{
						printf("  o |");
						found=1;
						return 2;
					}		
			}
		if(found==0)
			{
				printf("  7 |");
				return 0;
			}		
	}

int gridstructure8(struct players any[])
	{
		int x;
		int found = 0;
		
		for(x=0;x<5;x++)
			{
				if(any[0].numbers[x]==8)	
					{
						printf("  x |");
						found=1;
						return 1;
					}
				else if(any[1].numbers[x]==8)
					{
						printf("  o |");
						found=1;
						return 2;
					}				
			}
		if(found==0)
			{
				printf("  8 |");
				return 0;
			}
	}

int gridstructure9(struct players any[])
	{
		int x;
		int found = 0;
		for(x=0;x<5;x++)
			{
				if(any[0].numbers[x]==9)	
					{
						printf("  x\n");
						found=1;
						return 1;
					}
				else if(any[1].numbers[x]==9)
					{
						printf("  o\n");
						found=1;
						return 2;
					}
					
			}
		if(found==0)
			{
				printf("  9\n");
				return 0;
			}			
	}
//------------------------------------------------------------------------------------------------------------------------------
int coinflip(int headtail)
	{
		int result;
		int play1;
		int play2;
	
		srand(time(NULL));	 
		result = (rand()%2) + 1;
		 
		if(result == headtail)
			{
				do
					{				
						printf("Player 1 won the toss... Do you want to play:\n1)First\n2)Second\n>");
						scanf(" %d",&play1);
			
						switch(play1)
							{
								case 1:
									{
										printf("Alright... Player 1 will play first\n");
										return 1;
										break;
									}
						
								case 2:
									{
										printf("Alright... Player 2 will play first\n");
										return 2;
										break;
									}
						
								default:
									{							
										printf("That isn't a valid option... Please re-enter a valid decision. To remind you\n\n");	
										break;													
									}
							}
					}while(play1!= 1 && play1 != 2);
			}
		else
			{
				do
					{			
						printf("Player 2 won the toss... Do you want to play:\n1)First\n2)Second\n>");
						scanf(" %d",&play2);
				
						switch(play2)
							{
								case 1:
									{
										printf("Alright... Player 2 will play first\n");
										return 3;
										break;
									}
						
								case 2:
									{
										printf("Alright... Player 1 will play first\n");
										return 4;
										break;
									}
						
								default:
									{							
										printf("That isn't a valid option... Please re-enter a valid decision. To remind you\n\n");	
										break;													
									}
							}
					}while(play2!= 1 && play2 != 2);
			}				
	}
	
//-------------------------------------------------------------------------------------------------------------------------------------------

int offlineplay(struct players twoplayer[])
	{
		int cointoss;
		int playsfirst;
		int x;
		int indicator = 1;
		int usednumbers[9] = {0};
		int usednumbercounter=0;
		int holder1 = 0; //holds the array locations used for player 1
		int holder2 = 0; //holds the array locations used for player 2
		int turns = 1;
		int grid1,grid2,grid3,grid4,grid5,grid6,grid7,grid8,grid9;

		
		printf("Alright to decide who goes first, a coin toss will be used\n\nPlayer 1... Do you want\n1)Heads or\n2)Tails?\n>");
		scanf(" %d",&cointoss);
		
		while(cointoss != 1 && cointoss !=2)
			{
				printf("That isn't an option, please re-enter");
				scanf(" %d",&cointoss);
			}
		
		playsfirst = coinflip(cointoss);
		
				if(playsfirst== 1 || playsfirst  == 4)
					{
						do
							{
								grid1 = gridstructure1(twoplayer);
								grid2 = gridstructure2(twoplayer);
								grid3 = gridstructure3(twoplayer);
								printf("____|____|____\n");
								grid4 =gridstructure4(twoplayer);
								grid5 = gridstructure5(twoplayer);
								grid6 = gridstructure6(twoplayer);
								printf("____|____|____\n");
								grid7 = gridstructure7(twoplayer);
								grid8 = gridstructure8(twoplayer);
								grid9 =gridstructure9(twoplayer);
								
								if((grid1==1 && grid2 == 1 && grid3==1)||(grid4==1 && grid5 == 1 && grid6==1)
								||(grid7==1 && grid8 == 1 && grid9==1)||(grid1==1 && grid4 == 1 && grid7==1)
								||(grid2==1 && grid5 == 1 && grid8==1)||(grid3==1 && grid6 == 1 && grid9==1)
								||(grid1==1 && grid5 == 1 && grid9==1)||(grid3==1 && grid5 == 1 && grid7==1))
									{
										printf("\nPlayer 1 wins!\n");
										printf("Leaving\n\n");
										getchar();
										return 0;
									}
								
								if((grid1==2 && grid2 == 2 && grid3==2)||(grid4==2 && grid5 == 2 && grid6==2)
								||(grid7==2 && grid8 == 2 && grid9==2)||(grid1==2 && grid4 == 2 && grid7==2)
								||(grid2==2 && grid5 == 2 && grid8==2)||(grid3==2 && grid6 == 2 && grid9==2)
								||(grid1==2 && grid5 == 2 && grid9==2)||(grid3==2 && grid5 == 2 && grid7==2))
									{
										printf("\nPlayer 2 wins!\n");
										printf("Leaving\n\n");
										getchar();
										return 0;
									}
								
								if(turns%2==1)
									{
										printf("Player 1, choose a square:");
										scanf(" %d",&twoplayer[0].numbers[holder1]);
										do
											{																			
												for(x=0;x<9;x++)
													{
														if(twoplayer[0].numbers[holder1]==usednumbers[x]&&usednumbers[x]!= 0 || twoplayer[0].numbers[holder1] > 9 || twoplayer[0].numbers[holder1] <= 0)
															{
																printf("Number already chosen or invalid, choose another:");
																scanf(" %d",&twoplayer[0].numbers[holder1]);	
																indicator = 1;
															}
													}
												
												for(x=0;x<9;x++)
													{
														if(twoplayer[0].numbers[holder1]==usednumbers[x]&&usednumbers[x]!= 0 || twoplayer[0].numbers[holder1] > 9 || twoplayer[0].numbers[holder1] <= 0)
															{
																indicator=0;	
															}
													}
												
											}while(indicator==0);
										usednumbers[usednumbercounter] = twoplayer[0].numbers[holder1];
										usednumbercounter++;
										indicator = 1;
										turns++;
										holder1++;
									}
								else
									{
										printf("Player 2, choose a square:");
										scanf(" %d",&twoplayer[1].numbers[holder2]);
										do
											{			
												for(x=0;x<9;x++)
													{
														if(twoplayer[1].numbers[holder2]==usednumbers[x]&&usednumbers[x]!= 0 ||twoplayer[1].numbers[holder2] > 9 || twoplayer[1].numbers[holder2] <= 0)
															{
																printf("Number already chosen or invalid, choose another:");
																scanf(" %d",&twoplayer[1].numbers[holder2]);	
																indicator = 1;
																break;
															}
													}
												
												for(x=0;x<9;x++)
													{
														if(twoplayer[1].numbers[holder2]==usednumbers[x]&&usednumbers[x]!= 0||twoplayer[1].numbers[holder2] > 9 || twoplayer[1].numbers[holder2] <= 0)
															{
																indicator=0;	
															}
													}
												
											}while(indicator==0);
										indicator = 1;
										usednumbers[usednumbercounter] = twoplayer[1].numbers[holder2];
										usednumbercounter++;
										turns++;
										holder2++;
									}
								if(turns== 10)
									{
										grid1 = gridstructure1(twoplayer);
										grid2 = gridstructure2(twoplayer);
										grid3 =gridstructure3(twoplayer);
										printf("____|____|____\n");
										grid4 = gridstructure4(twoplayer);
										grid5 = gridstructure5(twoplayer);
										grid6 =gridstructure6(twoplayer);
										printf("____|____|____\n");
										grid7 =gridstructure7(twoplayer);
										grid8 =gridstructure8(twoplayer);
										grid9 =gridstructure9(twoplayer);
										if((grid1==1 && grid2 == 1 && grid3==1)||(grid4==1 && grid5 == 1 && grid6==1)
										||(grid7==1 && grid8 == 1 && grid9==1)||(grid1==1 && grid4 == 1 && grid7==1)
										||(grid2==1 && grid5 == 1 && grid8==1)||(grid3==1 && grid6 == 1 && grid9==1)
										||(grid1==1 && grid5 == 1 && grid9==1)||(grid3==1 && grid5 == 1 && grid7==1))
											{
												
											}
										
										if((grid1==2 && grid2 == 2 && grid3==2)||(grid4==2 && grid5 == 2 && grid6==2)
										||(grid7==2 && grid8 == 2 && grid9==2)||(grid1==2 && grid4 == 2 && grid7==2)
										||(grid2==2 && grid5 == 2 && grid8==2)||(grid3==2 && grid6 == 2 && grid9==2)
										||(grid1==2 && grid5 == 2 && grid9==2)||(grid3==2 && grid5 == 2 && grid7==2))
											{
												printf("\nPlayer 2 wins!\n");
												printf("Leaving\n\n");
												getchar();
												return 0;
											}
									}
							}while(turns<10);
						printf("It was a well fought draw!\n\n");
					}
				else
					{
						do
							{
								grid1 = gridstructure1(twoplayer);
								grid2 = gridstructure2(twoplayer);
								grid3 =gridstructure3(twoplayer);
								printf("____|____|____\n");
								grid4 = gridstructure4(twoplayer);
								grid5 = gridstructure5(twoplayer);
								grid6 =gridstructure6(twoplayer);
								printf("____|____|____\n");
								grid7 =gridstructure7(twoplayer);
								grid8 =gridstructure8(twoplayer);
								grid9 =gridstructure9(twoplayer);
								
								if((grid1==1 && grid2 == 1 && grid3==1)||(grid4==1 && grid5 == 1 && grid6==1)
								||(grid7==1 && grid8 == 1 && grid9==1)||(grid1==1 && grid4 == 1 && grid7==1)
								||(grid2==1 && grid5 == 1 && grid8==1)||(grid3==1 && grid6 == 1 && grid9==1)
								||(grid1==1 && grid5 == 1 && grid9==1)||(grid3==1 && grid5 == 1 && grid7==1))
									{
										printf("\nPlayer 1 wins!\n");
										printf("Leaving\n\n");
										getchar();
										return 0;
									}
								
								if((grid1==2 && grid2 == 2 && grid3==2)||(grid4==2 && grid5 == 2 && grid6==2)
								||(grid7==2 && grid8 == 2 && grid9==2)||(grid1==2 && grid4 == 2 && grid7==2)
								||(grid2==2 && grid5 == 2 && grid8==2)||(grid3==2 && grid6 == 2 && grid9==2)
								||(grid1==2 && grid5 == 2 && grid9==2)||(grid3==2 && grid5 == 2 && grid7==2))
									{
										printf("\nPlayer 2 wins!\n");
										printf("Leaving\n\n");
										getchar();
										return 0;
									}
									
								if(turns%2==1)
									{
										printf("Player 2, choose a square:");
										scanf(" %d",&twoplayer[1].numbers[holder2]);
										do
											{
												for(x=0;x<9;x++)
													{
														if(twoplayer[1].numbers[holder2]==usednumbers[x]&&usednumbers[x]!= 0 ||twoplayer[1].numbers[holder2] > 9 || twoplayer[1].numbers[holder2] <= 0)
															{
																printf("Number already chosen or invalid, choose another:");
																scanf(" %d",&twoplayer[1].numbers[holder2]);
																indicator = 1;
																break;
															}
													}
												
												for(x=0;x<9;x++)
													{
														if(twoplayer[1].numbers[holder2]==usednumbers[x]&&usednumbers[x]!= 0||twoplayer[1].numbers[holder2] > 9 || twoplayer[1].numbers[holder2] <= 0)
															{
																indicator=0;	
															}
													}
												
											}while(indicator==0);
										indicator = 1;
										turns++;
										usednumbers[usednumbercounter] = twoplayer[1].numbers[holder2];
										holder2++;
										usednumbercounter++;
									}
								else
									{
										printf("Player 1, choose a square:");
										scanf(" %d",&twoplayer[0].numbers[holder1]);
										do
											{					
												for(x=0;x<9;x++)
													{
														if(twoplayer[0].numbers[holder1]==usednumbers[x]&&usednumbers[x]!= 0|| twoplayer[0].numbers[holder1] > 9 || twoplayer[0].numbers[holder1] <= 0)
															{
																printf("Number already chosen or invalid, choose another:");
																scanf(" %d",&twoplayer[0].numbers[holder1]);	
																indicator = 1;
															}
													}
												
												for(x=0;x<9;x++)
													{
														if(twoplayer[0].numbers[holder1]==usednumbers[x]&&usednumbers[x]!= 0|| twoplayer[0].numbers[holder1] > 9 || twoplayer[0].numbers[holder1] <= 0)
															{
																indicator=0;	
															}
													}
												
											}while(indicator==0);
										indicator = 1;
										usednumbers[usednumbercounter] = twoplayer[0].numbers[holder1];
										usednumbercounter++;
										turns++;
										holder1++;
									
									}
								if(turns== 10)
									{
										grid1 = gridstructure1(twoplayer);
										grid2 = gridstructure2(twoplayer);
										grid3 =gridstructure3(twoplayer);
										printf("____|____|____\n");
										grid4 = gridstructure4(twoplayer);
										grid5 = gridstructure5(twoplayer);
										grid6 =gridstructure6(twoplayer);
										printf("____|____|____\n");
										grid7 =gridstructure7(twoplayer);
										grid8 =gridstructure8(twoplayer);
										grid9 =gridstructure9(twoplayer);
										
										if((grid1==1 && grid2 == 1 && grid3==1)||(grid4==1 && grid5 == 1 && grid6==1)
										||(grid7==1 && grid8 == 1 && grid9==1)||(grid1==1 && grid4 == 1 && grid7==1)
										||(grid2==1 && grid5 == 1 && grid8==1)||(grid3==1 && grid6 == 1 && grid9==1)
										||(grid1==1 && grid5 == 1 && grid9==1)||(grid3==1 && grid5 == 1 && grid7==1))
											{
												printf("Player 1 wins!\n");
												printf("Leaving\n");
												getchar();
												return 0;
											}
										
										if((grid1==2 && grid2 == 2 && grid3==2)||(grid4==2 && grid5 == 2 && grid6==2)
										||(grid7==2 && grid8 == 2 && grid9==2)||(grid1==2 && grid4 == 2 && grid7==2)
										||(grid2==2 && grid5 == 2 && grid8==2)||(grid3==2 && grid6 == 2 && grid9==2)
										||(grid1==2 && grid5 == 2 && grid9==2)||(grid3==2 && grid5 == 2 && grid7==2))
											{
												printf("Player 2 wins!\n");
												printf("Leaving\n");
												getchar();
												return 0;
											}
									}
							}while(turns<10);
						printf("It was a well fought draw!\n\n");
					}	
			
	}

int computer(struct players twoplayer[])
	{
		int cointoss;
		int playsfirst;
		int x;
		int indicator = 1;
		int usednumbers[9] = {0};
		int usednumbercounter=0;
		int holder1 = 0; //holds the array locations used for player 1
		int holder2 = 0; //holds the array locations used for player 2
		int turns = 1;
		int coindecider;
		int botchoice;
		int grid1,grid2,grid3,grid4,grid5,grid6,grid7,grid8,grid9;

		srand(time(NULL));
		printf("Alright to decide who goes first, a coin toss will be used. If you win, you play first.\n\nPlayer... Do you want\n1)Heads or\n2)Tails?\n>");
		scanf(" %d",&cointoss);
		
		coindecider = (rand()%2) +1;
		
		if(cointoss==coindecider)
			{
				printf("Player will go first\n");
				coindecider = 1;
			}
		else
			{
				printf("Bot goes first.\n");
					coindecider = 2;
			}
		
		if(coindecider == 1)
			{
				do
					{
						grid1 = gridstructure1(twoplayer);
						grid2 = gridstructure2(twoplayer);
						grid3 =gridstructure3(twoplayer);
						printf("____|____|____\n");
						grid4 = gridstructure4(twoplayer);
						grid5 = gridstructure5(twoplayer);
						grid6 =gridstructure6(twoplayer);
						printf("____|____|____\n");
						grid7 =gridstructure7(twoplayer);
						grid8 =gridstructure8(twoplayer);
						grid9 =gridstructure9(twoplayer);
								
						if((grid1==1 && grid2 == 1 && grid3==1)||(grid4==1 && grid5 == 1 && grid6==1)
								||(grid7==1 && grid8 == 1 && grid9==1)||(grid1==1 && grid4 == 1 && grid7==1)
								||(grid2==1 && grid5 == 1 && grid8==1)||(grid3==1 && grid6 == 1 && grid9==1)
								||(grid1==1 && grid5 == 1 && grid9==1)||(grid3==1 && grid5 == 1 && grid7==1))
									{
										printf("\nPlayer wins!\n");
										printf("Leaving\n\n");
										getchar();
										return 0;
									}
								
						if((grid1==2 && grid2 == 2 && grid3==2)||(grid4==2 && grid5 == 2 && grid6==2)
						||(grid7==2 && grid8 == 2 && grid9==2)||(grid1==2 && grid4 == 2 && grid7==2)
						||(grid2==2 && grid5 == 2 && grid8==2)||(grid3==2 && grid6 == 2 && grid9==2)
						||(grid1==2 && grid5 == 2 && grid9==2)||(grid3==2 && grid5 == 2 && grid7==2))
							{
								printf("\nBot wins!\n");
								printf("Leaving\n\n");
								getchar();
								return 0;
							}
						if(turns%2==1)
							{
								printf("Player, choose a square:");
								scanf(" %d",&twoplayer[0].numbers[holder1]);
								do
									{										
										for(x=0;x<9;x++)
											{
												if(twoplayer[0].numbers[holder1]==usednumbers[x]&&usednumbers[x]!= 0 || twoplayer[0].numbers[holder1] > 9 || twoplayer[0].numbers[holder1] <= 0)
													{
														printf("Number already chosen or invalid, choose another:");
														scanf(" %d",&twoplayer[0].numbers[holder1]);	
														indicator = 1;
													}
											}
												
										for(x=0;x<9;x++)
											{
												if(twoplayer[0].numbers[holder1]==usednumbers[x]&&usednumbers[x]!= 0 || twoplayer[0].numbers[holder1] > 9 || twoplayer[0].numbers[holder1] <= 0)
													{
														indicator=0;	
													}
											}
												
									}while(indicator==0);
										usednumbers[usednumbercounter] = twoplayer[0].numbers[holder1];
										usednumbercounter++;
										indicator = 1;
										turns++;
										holder1++;
									}
								else
									{
										printf("Bot plays:\n");
										twoplayer[1].numbers[holder2]= (rand()%9)+1;
										do
											{							
												for(x=0;x<9;x++)
													{
														if(twoplayer[1].numbers[holder2]==usednumbers[x]&&usednumbers[x]!= 0 ||twoplayer[1].numbers[holder2] > 9 || twoplayer[1].numbers[holder2] <= 0)
															{
																twoplayer[1].numbers[holder2]= (rand()%9)+1;
																indicator = 1;
																break;
															}
													}
												
												for(x=0;x<9;x++)
													{
														if(twoplayer[1].numbers[holder2]==usednumbers[x]&&usednumbers[x]!= 0||twoplayer[1].numbers[holder2] > 9 || twoplayer[1].numbers[holder2] <= 0)
															{
																indicator=0;	
															}
													}
												
											}while(indicator==0);
										indicator = 1;
										usednumbers[usednumbercounter] = twoplayer[1].numbers[holder2];
										usednumbercounter++;
										turns++;
										holder2++;
									}
								if(turns== 10)
									{
										grid1 = gridstructure1(twoplayer);
										grid2 = gridstructure2(twoplayer);
										grid3 =gridstructure3(twoplayer);
										printf("____|____|____\n");
										grid4 = gridstructure4(twoplayer);
										grid5 = gridstructure5(twoplayer);
										grid6 =gridstructure6(twoplayer);
										printf("____|____|____\n");
										grid7 =gridstructure7(twoplayer);
										grid8 =gridstructure8(twoplayer);
										grid9 =gridstructure9(twoplayer);
										
										if((grid1==1 && grid2 == 1 && grid3==1)||(grid4==1 && grid5 == 1 && grid6==1)
										||(grid7==1 && grid8 == 1 && grid9==1)||(grid1==1 && grid4 == 1 && grid7==1)
										||(grid2==1 && grid5 == 1 && grid8==1)||(grid3==1 && grid6 == 1 && grid9==1)
										||(grid1==1 && grid5 == 1 && grid9==1)||(grid3==1 && grid5 == 1 && grid7==1))
											{
												printf("\nPlayer wins!\n");
												printf("Leaving\n\n");
												getchar();
												return 0;
											}
										
										if((grid1==2 && grid2 == 2 && grid3==2)||(grid4==2 && grid5 == 2 && grid6==2)
										||(grid7==2 && grid8 == 2 && grid9==2)||(grid1==2 && grid4 == 2 && grid7==2)
										||(grid2==2 && grid5 == 2 && grid8==2)||(grid3==2 && grid6 == 2 && grid9==2)
										||(grid1==2 && grid5 == 2 && grid9==2)||(grid3==2 && grid5 == 2 && grid7==2))
											{
												printf("\nBot wins!\n");
												printf("Leaving\n\n");
												getchar();
												return 0;
											}
									}
							}while(turns<10);
						printf("It was a draw! Not too impressive since you're facing an easy bot...\n\n");
					}
				else
					{
						do
							{									
								if(turns%2==1)
									{
										printf("Bot plays:\n");
										twoplayer[1].numbers[holder2]= (rand()%9)+1;
										do
											{
												for(x=0;x<9;x++)
													{
														if(twoplayer[1].numbers[holder2]==usednumbers[x]&&usednumbers[x]!= 0 ||twoplayer[1].numbers[holder2] > 9 || twoplayer[1].numbers[holder2] <= 0)
															{
																twoplayer[1].numbers[holder2]= (rand()%9)+1;
															}
													}
												
												for(x=0;x<9;x++)
													{ 	
														if(twoplayer[1].numbers[holder2]==usednumbers[x]&&usednumbers[x]!= 0||twoplayer[1].numbers[holder2] > 9 || twoplayer[1].numbers[holder2] <= 0)
															{
																indicator=0;	
															}
													}			
											}while(indicator==0);
										indicator = 1;
										turns++;
										usednumbers[usednumbercounter] = twoplayer[1].numbers[holder2];
										holder2++;
										usednumbercounter++;
										if(turns== 10)
											{
												grid1 = gridstructure1(twoplayer);
												grid2 = gridstructure2(twoplayer);
												grid3 =gridstructure3(twoplayer);
												printf("____|____|____\n");
												grid4 = gridstructure4(twoplayer);
												grid5 = gridstructure5(twoplayer);
												grid6 =gridstructure6(twoplayer);
												printf("____|____|____\n");
												grid7 =gridstructure7(twoplayer);
												grid8 =gridstructure8(twoplayer);
												grid9 =gridstructure9(twoplayer);
											}
									}
								else
									{
										printf("Player, choose a square:");
										scanf(" %d",&twoplayer[0].numbers[holder1]);
										do
											{
												for(x=0;x<9;x++)
													{
														if(twoplayer[0].numbers[holder1]==usednumbers[x]&&usednumbers[x]!= 0|| twoplayer[0].numbers[holder1] > 9 || twoplayer[0].numbers[holder1] <= 0)
															{
																printf("Number already chosen or invalid, choose another:");
																scanf(" %d",&twoplayer[0].numbers[holder1]);	
																indicator = 1;
															}
													}
												
												for(x=0;x<9;x++)
													{
														if(twoplayer[0].numbers[holder1]==usednumbers[x]&&usednumbers[x]!= 0|| twoplayer[0].numbers[holder1] > 9 || twoplayer[0].numbers[holder1] <= 0)
															{
																indicator=0;	
															}
													}
												
											}while(indicator==0);
										indicator = 1;
										usednumbers[usednumbercounter] = twoplayer[0].numbers[holder1];
										usednumbercounter++;
										turns++;
										holder1++;
									}
								grid1 = gridstructure1(twoplayer);
								grid2 = gridstructure2(twoplayer);
								grid3 =gridstructure3(twoplayer);
								printf("____|____|____\n");
								grid4 = gridstructure4(twoplayer);
								grid5 = gridstructure5(twoplayer);
								grid6 =gridstructure6(twoplayer);
								printf("____|____|____\n");
								grid7 =gridstructure7(twoplayer);
								grid8 =gridstructure8(twoplayer);
								grid9 =gridstructure9(twoplayer);
								if((grid1==1 && grid2 == 1 && grid3==1)||(grid4==1 && grid5 == 1 && grid6==1)
								||(grid7==1 && grid8 == 1 && grid9==1)||(grid1==1 && grid4 == 1 && grid7==1)
								||(grid2==1 && grid5 == 1 && grid8==1)||(grid3==1 && grid6 == 1 && grid9==1)
								||(grid1==1 && grid5 == 1 && grid9==1)||(grid3==1 && grid5 == 1 && grid7==1))
									{
										printf("Player wins!\n");
										printf("Leaving\n");
										getchar();
										return 0;
									}
								
								if((grid1==2 && grid2 == 2 && grid3==2)||(grid4==2 && grid5 == 2 && grid6==2)
								||(grid7==2 && grid8 == 2 && grid9==2)||(grid1==2 && grid4 == 2 && grid7==2)
								||(grid2==2 && grid5 == 2 && grid8==2)||(grid3==2 && grid6 == 2 && grid9==2)
								||(grid1==2 && grid5 == 2 && grid9==2)||(grid3==2 && grid5 == 2 && grid7==2))
									{
										printf("\nBot wins!\n");
										printf("Leaving\n\n");
										getchar();
										return 0;
									}
							}while(turns<10);
						printf("It was a draw! Not too impressive since you're facing an easy bot...\n\n");
					}	
	}

//-------------------------------------------------------------------------------------------------------------------------------------------
main()
	{
		int decision;
		int x;
		system("Pause");
		do
			{
				for(x=0;x<5;x++)
					{
						online[0].numbers[x]=0;
						online[1].numbers[x]=0;
						single[0].numbers[x]=0;
						single[1].numbers[x]=0;
					}
				menu();
				scanf("%d",&decision);
				
				switch(decision)
					{
						case 1:
							{
								printf("Redirecting..\n");
								offlineplay(online);
								break;
							}
							
						case 2:
							{
								printf("Redirecting..\n");
								computer(single);
								break;
							}
						
						case 3:
							{
								printf("Exiting\n");
								exit(0);
								break;
							}
						default: 
							{
								printf("That isn't one of the two options");
								break;
							}
					}
			}while(decision!=3);
	}
