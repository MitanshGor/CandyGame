#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<string.h>
#include<math.h>
	char ch,b[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	int arr[20]={'\0'},j=0;
void board()
{
	cout<<"\n";
	cout<<"\n\t\t\t     |     |     ";
	cout<<"\n\t\t\t  "<<b[0][0]<<"  |  "<<b[0][1]<<"  |  "<<b[0][2];
	cout<<"\n\t\t\t     |     |     ";
	cout<<"\n\t\t\t-----+-----+-----";
	cout<<"\n\t\t\t     |     |     ";
	cout<<"\n\t\t\t  "<<b[1][0]<<"  |  "<<b[1][1]<<"  |  "<<b[1][2];
	cout<<"\n\t\t\t     |     |     ";
	cout<<"\n\t\t\t-----+-----+-----";
	cout<<"\n\t\t\t     |     |     ";
	cout<<"\n\t\t\t  "<<b[2][0]<<"  |  "<<b[2][1]<<"  |  "<<b[2][2];
	cout<<"\n\t\t\t     |     |     ";

}
void  player1()
{
	int choice;
	cout<<"\nplayer [x] turn:";
	cin>>choice;
	arr[j]=choice;
	j++;
	ch='x';
	switch(choice)
	{
		case 0:   exit(0);
		break;
		case 1:
			b[0][0] =ch;
		break;
		case 2:
			b[0][1]=ch;
		break;
		case 3:
			b[0][2]=ch;
		break;
		case 4:
			b[1][0]=ch;
		break;
		case 5:
			b[1][1]=ch;
		break;
		case 6:
			b[1][2]=ch;
		break;
		case 7:
			b[2][0]=ch;
		break;
		case 8:
			b[2][1]=ch;
		break;
		case 9:
			b[2][2]=ch;
		break;
	}
	board();


}

void  player2()
{
	int choice;
	cout<<"\nplayer [0] turn:";
	cin>>choice;
	arr[j]=choice;
	j++;
	ch='0';
	switch(choice)
	{
		case 0:   exit(0);
		break;
		case 1:
			b[0][0] =ch;
		break;
		case 2:
			b[0][1]=ch;
		break;
		case 3:
			b[0][2]=ch;
		break;
		case 4:
			b[1][0]=ch;
		break;
		case 5:
			b[1][1]=ch;
		break;
		case 6:
			b[1][2]=ch;
		break;
		case 7:
			b[2][0]=ch;
		break;
		case 8:
			b[2][1]=ch;
		break;
		case 9:
			b[2][2]=ch;
		break;
	}
		board();


}
void answer()
{
	if(b[0][0]=='x' && b[1][1]=='x' && b[2][2]=='x')
	{
		cout<<"[x] player wins";
		getch();
		exit(0);
	}
	else if(b[0][2]=='x' && b[1][1]=='x' && b[2][0]=='x')
	{
		cout<<"[x] player wins";
		getch();
		exit(0);
	}
	 else if(b[0][0]=='x' && b[1][0]=='x' && b[2][0]=='x')
	{
		cout<<"[x] player wins";
		getch();
		exit(0);
	}
	else if(b[0][1]=='x' && b[1][1]=='x' && b[2][1]=='x')
	{
		cout<<"[x] player wins";
		getch();
		exit(0);
	}
	else if(b[0][2]=='x' && b[1][2]=='x' && b[2][2]=='x')
	{
		cout<<"[x] player wins";
		getch();
		exit(0);
	}
	else if(b[0][0]=='x' && b[0][1]=='x' && b[0][2]=='x')
	{
		cout<<"[x] player wins";
		getch();
		exit(0);
	}
	else if(b[1][0]=='x' && b[1][1]=='x' && b[1][2]=='x')
	{
		cout<<"[x] player wins";
		getch();
		exit(0);
	}
	else if(b[2][0]=='x' && b[2][1]=='x' && b[2][2]=='x')
	{
		cout<<"[x] player wins";
		getch();
		exit(0);
	}
		if(b[0][0]=='0' && b[1][1]=='0' && b[2][2]=='0')
	{
		cout<<"[0] player wins";
		getch();
		exit(0);
	}
	else if(b[0][2]=='0' && b[1][1]=='0' && b[2][0]=='0')
	{
		cout<<"[0] player wins";
		getch();
		exit(0);
	}
	 else if(b[0][0]=='0' && b[1][0]=='0' && b[2][0]=='0')
	{
		cout<<"[0] player wins";
		getch();
		exit(0);
	}
	else if(b[0][1]=='0' && b[1][1]=='0' && b[2][1]=='0')
	{
		cout<<"[0] player wins";
		getch();
		exit(0);
	}
	else if(b[0][2]=='0' && b[1][2]=='0' && b[2][2]=='0')
	{
		cout<<"[0] player wins";
		getch();
		exit(0);
	}
	else if(b[0][0]=='0' && b[0][1]=='0' && b[0][2]=='0')
	{
		cout<<"[0] player wins";
		getch();
		exit(0);
	}
	else if(b[1][0]=='0' && b[1][1]=='0' && b[1][2]=='0')
	{
		cout<<"[0] player wins";
		getch();
		exit(0);
	}
	else if(b[2][0]=='0' && b[2][1]=='0' && b[2][2]=='0')
	{
		cout<<"[0] player wins";
		getch();
		exit(0);
	}




}
void main()
{
	int choice,i,count=0;
	do
	{
	clrscr();
	cout<<"***********welcome to tic tac toe ********************";
	cout<<"\n\tplayer 1 (x)\n\tplayer 2 (0)";
	cout<<"\n\tpress 0 to exit:";

	for(i=0;i<9;i++)
	{
			if(i%2==0)
			{
				board();
				player1();
				answer();
				clrscr();
			}
			else
			{
				board();
				player2();
				answer();
				clrscr();

			}
	count++;
	}

	}
	while(count<=4);
	cout<<"\n\n\t\t\t.........match tie!.......... ";

	getch();

}