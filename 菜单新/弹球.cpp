#include"stdio.h"
#include"windows.h"
#include"stdlib.h"
int i,j;
int x,y;
int blockx;
int blocky;
int weight=40;
int height=20;
int ballvx=1;
int ballvy=1;
int ballx=1;
int bally=1;
void ma()
{
	for(i=0;i<height;i++)
	{
		for(j=0;j<weight;j++)
			printf(" ");
		printf("|\n");
	}
	for(j=0;j<weight;j++)
		printf("-");
}
void gotoxy(int x,int y)
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(handle,pos);
}
void block()
{
	while(1)
	{
		
	}
}
void ball()
{
	while(1)
	{
		gotoxy(blockx,blocky);
        printf("----");
		Sleep(100);
		gotoxy(blockx,blocky);
		printf("    ");
		blocky=rand()%height;
		blockx=rand()%weight;
	gotoxy(ballx,bally);
	printf("o");
	Sleep(100);
	gotoxy(ballx,bally);
	printf(" ");
	if(ballx==weight-1 || ballx==0)
		ballvx=-ballvx;
	if(bally==height-1 || bally==0)
		ballvy=-ballvy;
	bally=bally+ballvy;
	ballx=ballx+ballvx;
	}
}
int main()
{
	ma();
	ball();
}