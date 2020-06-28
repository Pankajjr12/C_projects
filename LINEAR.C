
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
int main()
{
int gd=DETECT,gm,x,y,item,i,ch,t;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\n\n\n\n\t Enter item to be searched(23,29,83,73,43,84,8,93,3,53) :- ");
scanf("%d",&item);
settextstyle(COMPLEX_FONT,0,5);
setcolor(9);
outtextxy(160,120,"LINEAR SEARCH");
settextstyle(EUROPEAN_FONT,0,1);
setbkcolor(18);
x=getmaxx()/2;
y=getmaxy()/2;
rectangle(x-300,y+30,x+300,y+70);
line(x-240,y+30,x-240,y+70); outtextxy(x-280,y+30,"23");
line(x-180,y+30,x-180,y+70);  outtextxy(x-220,y+30,"29");
line(x-120,y+30,x-120,y+70);    outtextxy(x-160,y+30,"83");
line(x-60,y+30,x-60,y+70);      outtextxy(x-100,y+30,"73");
line(x,y+30,x,y+70);             outtextxy(x-40,y+30,"43");
line(x+60,y+30,x+60,y+70);         outtextxy(x+20,y+30,"84");
line(x+120,y+30,x+120,y+70);         outtextxy(x+80,y+30,"8");
line(x+180,y+30,x+180,y+70);        outtextxy(x+140,y+30,"93");
outtextxy(x+200,y+30,"3");  outtextxy(x+260,y+30,"53");
line(x+240,y+30,x+240,y+70);
for(i=0;i<=540;i=i+60)
{
setcolor(RED);
line(x-300+i,y+30,x-240+i,y+30);
line(x-300+i,y+70,x-240+i,y+70);
line(x-240+i,y+70,x-240+i,y+30);
line(x-300+i,y+70,x-300+i,y+30);
if(item==23&&i==0)
{
 setcolor(GREEN);
 rectangle(x-300,y+30,x-240,y+70);
 settextstyle(3,0,0);
 outtextxy(x-30,y+70,"23 Element found");
  setcolor(YELLOW);
 line(460,240,460,269);
 line(460,269,456,265);
 line(460,269,464,265);

	     break;
}
if(item==29&&i==60)
{
 setcolor(GREEN);
 rectangle(x-240,y+30,x-180,y+70);
 settextstyle(3,0,0);
 outtextxy(x-30,y+70,"29 Element found");
 break;
}
if(item==83&&i==60)
{
 setcolor(GREEN);
 rectangle(x-180,y+30,x-120,y+70);
 settextstyle(3,0,0);
 outtextxy(x-30,y+70,"83 Element found");
 break;
}
if(item==73&&i==120)
{
 setcolor(GREEN);
 rectangle(x-120,y+30,x-60,y+70);
 settextstyle(3,0,0);
 outtextxy(x-30,y+70,"73 Element found");
 break;
}
if(item==43&&i==180)
{
 setcolor(GREEN);
 rectangle(x-60,y+30,x,y+70);
 settextstyle(3,0,0);
 outtextxy(x-30,y+70,"43 Element found");
  setcolor(YELLOW);
 line(280,240,280,269);
 line(280,269,276,265);
 line(280,269,284,265);

 break;
}
if(item==84&&i==240)
{
 setcolor(GREEN);
 rectangle(x,y+30,x+60,y+70);
 settextstyle(3,0,0);
 outtextxy(x-30,y+70,"84 Element found");
  setcolor(YELLOW);
 line(340,240,340,269);
 line(340,269,336,265);
 line(340,269,344,265);

 break;
}
 if(item==8&&i==300)
{
 setcolor(GREEN);
 rectangle(x+60,y+30,x+120,y+70);
 settextstyle(3,0,0);
 outtextxy(x-30,y+70,"8 Element found");
  setcolor(YELLOW);
 line(400,240,400,269);
 line(400,269,404,265);
 line(400,269,396,265);

 break;
}
 if(item==93&&i==360)
{
 setcolor(GREEN);
 rectangle(x+120,y+30,x+180,y+70);
 settextstyle(3,0,0);
 outtextxy(x-30,y+70,"93 Element found");
 setcolor(YELLOW);
 line(460,240,460,269);
 line(460,269,456,265);
 line(460,269,464,265);
 break;
}
if(item==3&&i==420)
{
 setcolor(GREEN);
 rectangle(x+180,y+30,x+240,y+70);
 settextstyle(3,0,0);
 outtextxy(x-30,y+70,"3 Element found");
  setcolor(RED);
 line(530,240,530,269);
 line(530,269,524,265);
 line(530,269,536,265);

 break;
}
if(item==53&&i==480)
{
 setcolor(GREEN);
 rectangle(x+240,y+30,x+300,y+70);
 settextstyle(3,0,0);
 outtextxy(x-30,y+70,"53 Element found");
 break;
}

delay(600);
}
 if(item!=23&&item!=29&&item!=83&&item!=73&&item!=43&&item!=84&&item!=8&&item!=93&&item!=3&&item!=53)
 {
 settextstyle(1,0,0);
 outtextxy(x-32,y+70,"Element NOT found");
 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t%d",item);
  }
getch();
closegraph();
}
