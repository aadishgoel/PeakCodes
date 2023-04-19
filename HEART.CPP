#include<stdio.h>
#include"aaag.h"
#include<dos.h>


void main()
{
  for(int i=0;i<14;i++)
  { textcolor(i);
    clrscr();
  disk(5,10,6,3);
  disk(5,19,6,3);
  t3(17,12,6,3);
  t4(17,29,6,3);
  block(15,1,23,12,' ');
  gotoxy(27,12);
  printf("Message");
  delay(300);
  }
getch();
}

