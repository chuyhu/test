#include"stdio.h"
#include"windows.h"
#include"stdlib.h"
#include"conio.h"
void youxi()
{
int i,j;
	int x=5;
	int y=10;
	char input;
	while(1)
	{
		system("cls");
			for(i=0;i<x;i++)
				printf("\n ");
			for(j=0;j<y;j++)
				printf(" ");
			printf("  *\n");
			for(j=0;j<y;j++)
				printf(" ");
			printf("  ***\n");
			for(j=0;j<y;j++)
				printf(" ");
			printf(" *****\n");
			for(j=0;j<y;j++)
				printf(" ");
			printf("*     *\n");
			printf("\n");  
			if(kbhit())
			{
				input=getch();
			if(input=='a')
				y--;
			if(input=='d')
				y++;
			if(input=='w')
				x--;
			if(input=='s')
				x++;
			}
	}
	return ;
}
void sg()
{
	system("color 27");
	int i,j;
	while(1)
	{
		i=1;
		while(i<=30)
		{
			i=i+1;
			if(kbhit())
				return;
			printf("*************************************************************\n");
			printf(" ");
			for(j=2;j<=i;j++)
			{
				printf(" ");
			}
			printf(" ***\n");
			for(j=2;j<=i;j++)
			{
				printf(" ");
			}
			printf(" *****\n");
			for(j=2;j<=i;j++)
			{
				printf(" ");
			}
			printf("*******\n");
			for(j=2;j<=i;j++)
			{
				printf(" ");
			}
			printf(" *****\n");
			for(j=2;j<=i;j++)
			{
				printf(" ");
			}
			printf("  ***\n");
			printf("************************************************************");
			Sleep(100);
			system("cls");
		}
		for(i=30;i>=1;i--)
		{
			if(kbhit())
				return;
			printf("*************************************************************\n");
			printf(" ");
			j=1;
			while(j<=i)
			{
				j++;
				printf(" ");
			}
			printf("***\n");
			for(j=2;j<=i;j++)
			{
				printf(" ");
			}
			printf(" *****\n");
			for(j=2;j<=i;j++)
			{
				printf(" ");
			}
			printf("*******\n");
			for(j=2;j<=i;j++)
			{
				printf(" ");
			}
			printf(" *****\n");
			for(j=2;j<=i;j++)
			{
				printf(" ");
			}
			printf("  ***\n");
			printf("************************************************************");
			Sleep(100);
			system("cls");
		}
	}printf("asdfsdafs");
}
void control()
{
	printf("***************************\n");
	printf("*        1. \"A\"=left      *\n");
	printf("*        2. \"D\"=right     *\n");
	printf("*        3. \"W\"=UP        *\n");
	printf("*        3. \"S\"=down      *\n");
	printf("***************************\n");
}
void exit()
{
	printf("Ð»Ð»ÌåÑé\n");
}
void level()
	{
	printf("***************************\n");
	printf("*        1. Easy          *\n");
	printf("*        2. Just so so    *\n");
	printf("*        3. Hard          *\n");
	printf("***************************\n");
	}
void donghua()
{
	int i,j;
int x=0;
int y=5;
int velocity_x=1;
int velocity_y=1;
int left=0;
int right=20;
int top=0;
int bottom=10;
while(1)
{
	x=x+velocity_x;
	y=y+velocity_y;
	system("cls");
	Sleep(100);
	for(i=0;i<x;i++)
		printf("\n");
	for(j=0;j<y;j++)
		printf(" ");
		printf("O(¡É_¡É)O");
	printf("\n");
	if((x==top)||(x==bottom))
		velocity_x=-velocity_x;
		if((y==left)||(y==right))
			velocity_y=-velocity_y;
} 
return ;
}
void menu()
{
	printf("***************************\n");
	printf("*        1. Start         *\n");
	printf("*        2. Select Level  *\n");
	printf("*        3. Control       *\n");
	printf("*        4. Exit          *\n");
	printf("***************************\n");
	int code;
	scanf("%d",&code);
	if(code==1)
		youxi() ;
	else
		if(code==2)
			level();
		else
			if(code==3)
				control();
			else
				if(code==4)
					exit();
				else
					donghua();
}
int main()
{
	sg();
	
	menu();
}
