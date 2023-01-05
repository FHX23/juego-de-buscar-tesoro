#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
void llenar_espacios(char matriz[10][10]);
void mostrar(char matriz[10][10]);
void llenar_o(char matriz[10][10]);
void llenar_asterico(char matriz[10][10]);
void mover_matriz(char matriz[10][10]);
int main(int argc, char const *argv[])
{

    char matriz[10][10];
    llenar_espacios(matriz);
    llenar_o(matriz);
    llenar_asterico(matriz);
    mostrar(matriz);
    mover_matriz(matriz);
    system("pause");
    return 0;
}

void llenar_espacios(char matriz[10][10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matriz[i][j] = ' ';
        }
    }
}
void mostrar(char matriz[10][10])
{

    int i, j;
    system("cls");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("[%c]", matriz[i][j]);
        }
        printf("\n");
    }
}
void llenar_o(char matriz[10][10])
{
    int i, j, z;

    for (z = 0; z < 5; z++)
    {
        srand(time(NULL));
        i = rand() % (11); // Este está entre M y N
        // numero = rand () % (N-M+1) + M;   // Este está entre M y N
        j = rand() % (11);
        if (i == 0 && j == 0)
        {
            z = z - 1;
        }
        else if (matriz[i][j] == 32)
        {
            matriz[i][j] = 79;
        }
        else
        {
            z = z - 1;
        }
    }   
}
void llenar_asterico(char matriz[10][10]){
	matriz[0][0]=42;//es el astericos 
}

void mover_matriz(char matriz[10][10]){
	char op;
	int i=0,j=0;
	int salida=1,opp;
	do{
		op=_getch();
		if(op=='a' || op== 'A'){
			
			
		}else if(op=='s' || op== 'S'){
			
			
		}else if(op=='d' || op== 'D'){
			
			if(j!=10){
				
				matriz[i][j]=' ';
				matriz[i][j+1]=42;
			}
			mostrar(matriz);
			j=j+1;	
		}else if(op=='w' || op== 'W'){
			
				
		}
	}while(salida==1);
}