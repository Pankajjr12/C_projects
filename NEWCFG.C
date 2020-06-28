#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
void main()
{
char string[20];
int state=0,count=0;
char option;
 int gdriver = DETECT, gmode;
   initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
   textcolor(RED);
printf("\n\n\n\n\n");
printf("T"); delay(50);
printf("H"); delay(50);
printf("I"); delay(50);
printf("S"); delay(50);

printf(" P"); delay(50);
printf("R"); delay(50);
printf("O"); delay(50);
printf("J"); delay(50);
printf("E"); delay(50);
printf("C"); delay(50);
printf("T"); delay(50);

printf(" I"); delay(50);
printf("S"); delay(50);
   printf(" B"); delay(50);
   printf("A"); delay(50);
   printf("S"); delay(50);
   printf("E"); delay(50);
   printf("D"); delay(50);

   printf(" O"); delay(50);
   printf("N"); delay(50);
   printf(" C"); delay(50);
   printf("O"); delay(50);
   printf("N"); delay(50);
   printf("T"); delay(50);
   printf("E"); delay(50);
   printf("X"); delay(50);
   printf("T"); delay(50);
   printf(" F"); delay(50);
   printf("R"); delay(50);
   printf("E"); delay(50);
   printf("E"); delay(50);

   printf(" G"); delay(50);
   printf("R"); delay(50);
   printf("A"); delay(50);
   printf("M"); delay(50);
   printf("M"); delay(50);
   printf("E"); delay(50);
   printf("R"); delay(50);
   printf("."); delay(50);
   printf("\n\n");

   delay(2000);

   printf("C"); delay(50);
   printf("R"); delay(50);
   printf("E"); delay(50);
   printf("A"); delay(50);
   printf("T"); delay(50);
   printf("E"); delay(50);
   printf("D"); delay(50);

   printf(" B"); delay(50);
   printf("Y:-"); delay(50);

   printf(" P"); delay(50);
   printf("A"); delay(50);
   printf("N"); delay(50);
   printf("K"); delay(50);
   printf("A"); delay(50);
   printf("J"); delay(50);
   printf(" K"); delay(50);

   printf("U"); delay(50);
   printf("M"); delay(50);
   printf("A"); delay(50);
   printf("R"); delay(50);
   printf("."); delay(50);
   printf("\n\n");

   delay(2000);

   printf(" P"); delay(50);
   printf("R"); delay(50);
   printf("O"); delay(50);
   printf("J"); delay(50);

   printf("E"); delay(50);
   printf("C"); delay(50);
   printf("T"); delay(50);
   printf(" I"); delay(50);
   printf("S"); delay(50);
   printf(" R"); delay(50);
   printf("E"); delay(50);

   printf("A"); delay(50);
   printf("D"); delay(50);

   printf("Y"); delay(50);
   printf(" T"); delay(50);
   printf("O"); delay(50);
   printf(" L"); delay(50);
   printf("A"); delay(50);
   printf("U"); delay(50);
   printf("N"); delay(50);

   printf("C"); delay(50);
   printf("H"); delay(50);
   printf("."); delay(50);

   printf("\n\n");

   delay(2000);

   printf("L"); delay(50);
   printf("A"); delay(50);
   printf("U"); delay(50);
   printf("N"); delay(50);
   printf("C"); delay(50);
   printf("H"); delay(50);
   printf("I"); delay(50);
   printf("N"); delay(50);
   printf("G"); delay(50);
   printf("."); delay(50);
   printf("."); delay(50);
   printf("."); delay(50);
   delay(1000);

   printf("  [3]  "); delay(1000);
   printf("  [2]  "); delay(1000);
   printf("  [1]  "); delay(1000);

   cleardevice();
 clrscr();
printf("\n \t Let G = ( V, T , P , S ) be a context free grammer");
printf("\n\n V = { S } ____________set of variables");
printf("\n\n T = { a,b } ___________set of terminals");
printf("\n S is a starting symbol");
printf("\nThe grammar production rules is: S->aS, S->Sb, S->ab \n");
 printf("\nEnter the string to be checked:-");
 gets(string);
 while(string[count]!='\0')
  {
    switch(state)
    {
    case 0: if (string[count]=='a')
  state=1;
  else
  state=3;
  break;
   case 1: if (string[count]=='a')
  state=1;
  else if(string[count]=='b')
  state=2;
  else
  state=3;
  break;
   case 2: if (string[count]=='b')
  state=2;
  else
  state=3;
  break;
   default: break;
  }
  count++;
  if(state==3)
  break;
 }
 if(state==2)
  printf("\n string is accepted");
  else
  printf("\n string is not accepted");
 // printf("\n\nDo you want to continue(Y or N): ");
//  scanf("%c",&option);
  getch();

 closegraph();
 }
