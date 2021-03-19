#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<string>
#include<windows.h>
void gotoxy(short int x,short int y)
{
	static HANDLE h = NULL;
	if(!h)
	{
		h = GetStdHandle(STD_OUTPUT_HANDLE);
	}
	COORD c = {x,y};
	SetConsoleCursorPosition(h,c);
}

void clearPartOfScreen(int x,int y,int endX,int endY){
      for(int i=x;i<=endX;i++)
              for(int j=y;j<=endY;j++){gotoxy(i,j);printf("%s"," ");}
     
     }
     
//	clearPartOfScreen(start.x+(rong-col_right)+1,start.y+1,start.x+rong-1,start.y+dai-1);  //col_right
//	clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+dai-1);  //row_bottom
//	clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+1,start.x+(rong-col_right)-1,start.y+(dai-row_bottom)+2); //row_on
//	clearPartOfScreen(start.x+1,start.y+(dai-row_bottom)+3,start.x+(rong-col_right)-1,start.y+dai-1);  //row_under
