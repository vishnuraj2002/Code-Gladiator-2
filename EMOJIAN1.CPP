#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
  int emoji1=1,emoji2=2, emoji;
  int row,col;
  clrscr();
  char ch='!';

  row= 11;
  col=40;
  gotoxy(col,row);
  printf("-->%c",emoji1);

  row= 12;
  col=40;
  gotoxy(col,row);
  printf("   %c",emoji2);
  emoji=emoji1;
  while ((ch!=13) && (ch!=27))
  {
    ch=getch();
    if (ch==0)
    {
       ch=getch();
    }
    if (ch==80)
    {
       row=12;
       emoji= emoji2;
       row= 11;
       col=40;
       gotoxy(col,row);
       printf("   %c",emoji1);

       row= 12;
       col=40;
       emoji= 2;
       gotoxy(col,row);
       printf("-->%c",emoji2);


    }
    else
    if (ch==72)
    {
      row=11;
      emoji= emoji1;
      row= 11;
      col=40;
      gotoxy(col,row);
      printf("-->%c",emoji1);

      row= 12;
      col=40;
      gotoxy(col,row);
       printf("   %c",emoji2);

    }
/*    clrscr();
    if (row==12)
    {
      gotoxy(col,11);
      printf("   %c",1);

      gotoxy(col,12);
      printf("-->%c",2);
    }
    else
    {
      gotoxy(col,11);
      printf("-->%c",1);
      gotoxy(col,12);
      printf("   %c",2);

    }
  */
  }
  clrscr();
  row= 12;
  col=40;
  gotoxy(col,row);
  printf("%c",emoji);


  while (ch != 27)//Loop Execute till ESC key Press
  {

    ch=getch();
    if (ch==0)
    {
       ch=getch();
       gotoxy(col,row);
       printf(" ");
    }
    if (ch==80)
    {
	row=row+1;
	if (row>24)
	   row=1;
    }
    else
    {
      if (ch==72)
      {
	row=row-1;
	if (row<=0)
	   row=24;
      }
      else
      {
	if (ch==75)
	{
	  col=col-1;
	  if (col<=0)
	     col=80;
	}
	else
	if (ch==77)
	{
	  col=col+1;
	  if (col>80)
	     col=1;
	}

      }
    }
    gotoxy(col,row);
    printf("%c",emoji);
  }
}