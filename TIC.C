
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<string.h>
#include<time.h>
#include<dos.h>
#define d 35
#define s 30
#define f 200
#define mx getmaxx()
#define my getmaxy()

char grid[3][3];
int getkey();
void display(int,int);        
int checkWin(int,int,int);
int checkDraw(int,int);
void end(char *);
void main()
{
int gd,gm,sx=0,sy=0,i,j,k,count=2,player;
char str[25],ch;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(WHITE);
for(i=35;i<=555;i++)
{
line(25+i,170,25+i,200);
}
for(i=35;i<=555;i++)
{
setcolor(GREEN);
line(25+i,170,25+i,200);
delay(4);
setcolor(rand()%16);
settextstyle(3,0,6);
outtextxy(150,110,"TIC TAC TOE");
delay(4);
setcolor(WHITE);

settextstyle(DEFAULT_FONT,0,2);
outtextxy(200,220,"LOADING GAME");
delay(4);
setcolor(rand()%16);
settextstyle(SMALL_FONT,0,9);
outtextxy(398,207,"....");
delay(4);
}
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    grid[i][j]=' ';
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    while(1)
    {
    cleardevice();
    setcolor(BLUE);
    outtextxy(200,150,"TIC-TAC-TOE");
    player=count%2;
    sprintf(str,"Player : %d (%c)",player+1,player?'O':'X');
    setcolor(WHITE);
    outtextxy(350,250,str);
    display(sx,sy);
    ch=getkey();
    switch(ch)
	{
	    case 72:            //up arrow
		if(sy!=0)
		    sy--;
		break;
	    case 80:            //down arrow
		if(sy!=2)
		    sy++;
		break;
	    case 75:            //left arrow
		if(sx!=0)
		    sx--;
		break;
	    case 77:            //right arrow
		if(sx!=2)
		    sx++;
		break;
	    case ' ':           //Space key
		if(grid[sy][sx]==' ')
		{
		    if(player==0)
			grid[sy][sx]='X';
		    else
			grid[sy][sx]='O';
		    count++;
		}
		break;
	    case 'e':
	    case 'E':       //'e' or 'E' key
		cleardevice();
		closegraph();
		return;
	    default :
		break;
	}
	if(checkWin(sx,sy,player)==1||checkDraw(sx,sy)==1)
	    break;
    }
    return;
}
int getkey()
{
    int ch;
    ch=getch();
    if(ch==0)
    {
	ch=getch();
	return(ch);
    }
    return(ch);
}
void display(int sx,int sy)
{
    int i,j;
    char str[2];
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    if(j==sx&&i==sy)
		setcolor(RED);
	    else
		setcolor(WHITE);
	    rectangle(j*d+f,i*d+f,j*d+s+f,i*d+s+f);
	    sprintf(str,"%c",grid[i][j]);
	    outtextxy(j*d+8+f,i*d+8+f,str);
	}
    }
}

int checkWin(int sx,int sy,int player)
{
    char str[25];
    int i,j;
    for(i=0;i<3;i++)
    {
	if((grid[i][0]==grid[i][1]&&grid[i][0]==grid[i][2]&&grid[i][0]!=' ')||(grid[0][i]==grid[1][i]&&grid[0][i]==grid[2][i]&&grid[0][i]!=' '))
	{
	    display(sx,sy);
	    getch();
	    sprintf(str,"Player %d (%c) You Won!!!",player+1,player?'O':'X');
	    end(str);
	    return(1);
	}
	if((grid[0][0]==grid[1][1]&&grid[1][1]==grid[2][2]&&grid[2][2]!=' ')||(grid[0][2]==grid[1][1]&&grid[1][1]==grid[2][0]&&grid[2][0]!=' '))
	{
	    display(sx,sy);
	    getch();
	    sprintf(str,"Player %d (%c) You Won!!!",player+1,player?'O':'X');
	    end(str);
	    return(1);
	}
    }
    return(0);
}

int checkDraw(int sx,int sy)
{
    int i,j,k=0;
    char str[25];
    for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	    if(grid[i][j]!=' ')
		k++;
    if(k==9)
    {
	display(sx,sy);
	getch();
	sprintf(str,"The game is draw");
	end(str);
	return(1);
    }
    return(0);
}

void end(char *str)
{
    int i,j;
    delay(800);
    cleardevice();
    setcolor(GREEN);
    outtextxy(mx/2-150,my/2,str);

    for(i=0,j=0;i<14;i++)
    {
	    j=1;

	sound(200*j);

	delay(200);
    }
    outtextxy((mx/2)-150,my/2,str);

    getch();
    nosound();
    closegraph();
}