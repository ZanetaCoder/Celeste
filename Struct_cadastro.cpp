#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <conio.c>
//#include<graphics.h>

struct estrutura
{
	int codigo;
	char nome[30];
	char tipo[20];
	float distancia;
	float temperatura;
	char cor[20];
	float massa;
	int galaxia[30];	
}dados;
FILE *fp;

void abrir_lista(const char modo[])
{
	if ((fp = fopen("celestelista.bin", modo)) == NULL )
	{
		gotoxy(30,25);printf("Erro na abertura do arquivo!!!");
		exit(1);
	}
	
}

void tela_inicial(const char *telainicial)
{
	
	
	
	
	
}


