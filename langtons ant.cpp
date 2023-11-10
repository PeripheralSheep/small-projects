#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

int antgrid = 0;

struct grid{
	char colours;
	int row;
	int column;
};
struct grid ant[10000];

void gridcreation(int num,int antposition,char direction,int steps)
	{
		int x,y;	
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	
		for(x=0;x<num;x++)
			{
				for(y=0;y<num;y++)
					{
						antgrid++;
						if(ant[antgrid].colours=='r')
							{
								SetConsoleTextAttribute(color,12);
  								if(antgrid == antposition)
  									{
  										SetConsoleTextAttribute(color,12);
  										if(direction== 'u')
  											printf("^ ");
  										else if(direction == 'd')
  											printf("v ");
										else if(direction=='l')
											printf("< ");
										else
											printf("> ");
									}							
								else 
									printf("x ");
							}
						else
							{
								SetConsoleTextAttribute(color,15);
  								if(antgrid == antposition)
  									{
  										SetConsoleTextAttribute(color,15);
  										if(direction== 'u')
  											printf("^ ");
  										else if(direction == 'd')
  											printf("v ");
										else if(direction=='l')
											printf("< ");
										else
											printf("> ");
									}
								else 
									printf("x ");
							}
							
											
					}
				printf("\n");
			}
}

main()
	{
		int num;
		int antposition;
		int x;
		char direction;
		int steps = 0;
		
		printf("How many rows and columns do you want?[Odd numbers]\n");
		scanf(" %d",&num);
		
		antposition = ((num*num)/2) + 1;
		gridcreation(num,antposition,direction,steps);
		antposition = ((num*num)/2) + 1;
		direction = 'u';
		for(x=0;x<antgrid;x++)
			{
				ant[x].colours = 'w';
			}
		
		do
			{
				if(direction == 'l' && ant[antposition].colours == 'w')
					{
						ant[antposition].colours = 'r';
						direction = 'u';
						antposition -= num;
					}
				else if(direction == 'l' && ant[antposition].colours == 'r')
					{
						ant[antposition].colours = 'w';
						direction = 'd';
						antposition += num;
					}
				else if(direction == 'u' && ant[antposition].colours == 'w')
					{
						ant[antposition].colours = 'r';
						direction = 'r';
						antposition++;
					}
				else if(direction == 'u' && ant[antposition].colours == 'r')
					{
						ant[antposition].colours = 'w';
						direction = 'l';
						antposition--;
					}
				else if(direction == 'd' && ant[antposition].colours == 'w')
					{
						ant[antposition].colours = 'r';
						direction = 'l';
						antposition--;
					}
				else if(direction == 'd' && ant[antposition].colours == 'r')
					{
						ant[antposition].colours = 'w';
						direction = 'r';
						antposition++;
					}
				else if(direction == 'r' && ant[antposition].colours == 'w')
					{
						ant[antposition].colours = 'r';
						direction = 'd';
						antposition+=num;
					}
				else if(direction == 'r' && ant[antposition].colours == 'r')
					{
						ant[antposition].colours = 'w';
						direction = 'u';
						antposition-=num;
					}
				steps++;
				antgrid = 0;
				system("CLS");
				gridcreation(num,antposition,direction,steps);
			//	printf("----------\n");
				Sleep(1);
			//	system("Pause");
			}while(!kbhit());
		
		
		
		
	}
