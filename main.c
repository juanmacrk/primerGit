#include <stdio.h>
#include <stdlib.h>
#include "conio.h"


#define DIM 30
void cargaMatrizR (int fil,int col, int m [fil][col],int dato; );
void muestraMatriz (int dim, int m [dim][30]);

int main()
{
    int dato;
    int matriz  [DIM][DIM];

    printf("ingrese un numero \n");
    scanf ("%d",&dato);

cargaMatrizR (DIM,DIM,matriz,dato);
muestraMatriz (DIM,matriz);
system("pause");

    printf("Hello world!\n");
    return 0;
}


void cargaMatrizR (int fil,int col, int m [fil][col],int dato )
{
    for (int i=0;i<fil;i++)
    {
        for (int j=0;j<col;j++)
        {

            m[i][j]=i-j;
        }

    }
}
void muestraMatriz (int dim, int m [dim][30])
{
    for (int i=0; i<dim; i++)
    {
        for (int j=0;j<dim;j++)
        {

            printf ("%2d-",m[i][j]);
        }
  printf ("\n");
    }
}
