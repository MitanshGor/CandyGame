/*
		#     #  ---> box  ,, # ---> candy.
		## # ##      ------->#-->(x,y)
		21012
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{

	int box_x,box_y;
	int candy_x,candy_y,score,lives;
	char ch;
	restart:
	box_x=20;
	lives=3;
	score=0;
	candy_y=1;
	candy_x=15;
	box_y=25;
      start:
	clrscr();
	gotoxy(35,1);
	printf("score =%d",score);
	gotoxy(35,2);
	printf("lives =%d",lives);
	// for box
	textcolor(RED);
	gotoxy(box_x,box_y);
	printf("#");
	gotoxy(box_x-1,box_y);
	printf("#");
	gotoxy(box_x-2,box_y);
	printf("#");
	gotoxy(box_x+1,box_y);
	printf("#");
	gotoxy(box_x+2,box_y);
	printf("#");
	gotoxy(box_x+2,box_y-1);
	printf("#");
	gotoxy(box_x-2,box_y-1);
	printf("#");
	// for candy
	textcolor(YELLOW);
	gotoxy(candy_x,candy_y);
	printf("#");
	if(kbhit())
	{
		ch=getch();
		switch(ch)
		{
			case 'a': box_x--;
			break;
			case 'd': box_x++;
			break;
			case 'p':getch();
				break;
			case 'r':goto restart;
				break;
			case 'x': exit(0);
			break;

		}

	}
	candy_y++;
	if(candy_y==25)
	{
		if(candy_x+1==box_x || candy_x-1==box_x || candy_x==box_x)
		{
			score++;
		}
		else
		{
			lives--;
			if(lives==0)
			{
				clrscr();
				gotoxy(35,13);
				printf("game is over");
				gotoxy(35,15);
				printf("final score is %d",score);
				getch();
				exit(0);
			}
		}
	candy_y=1;
	candy_x=rand()%30+1;

	}
	delay(100);
	goto start;

}