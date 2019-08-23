#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <windows.h>

//programa com 120 colunas por 35 linha

main()
{
	system("mode con:cols=120 lines=35"); 
	system("color 07");
	
	//Desenho da barra de carregamento
	int y = 20;
	int x = 45;
	do
	{
		textbackground(WHITE);
		gotoxy(x,y);printf(" ");
		x++;
	}while(x<80);
	textbackground(WHITE);
	gotoxy(45,19);printf(" ");gotoxy(79,19);printf(" ");gotoxy(45,18);printf(" ");gotoxy(79,18);printf(" ");gotoxy(45,17);printf(" ");gotoxy(79,17);printf(" ");
	
	y=17;
	x=45;
	do
	{
		gotoxy(x,y);printf(" ");
		x++;
	}while(x<80);
	
	for(y = 18; y<20; y++)
	{
		for(x = 46; x<80; x++)
		{
			do
			{
			textbackground(GREEN);
			gotoxy(x,y);printf(" ");			
			}
		}
		
		
		
		
		
			textbackground(BLACK);
			printf("\n \n \n \n \n \n \n \n \n");
	}
}
