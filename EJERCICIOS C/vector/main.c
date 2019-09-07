#include <stdio.h>
#include <stdlib.h>

void mostrarVectInt (int vector[], int tam);
int obtenerMayor (int vec[], int tam);
int main()
{
    //int maximo, posicion, i=0;
    int numeros [4];

    mostrarVectInt(numeros,4);

 /*   for ( i=0; i<numeros[i]; i++)
    {
        printf("Ingrese numero en posicion %d:",i);
        scanf("%d",&numeros[i]);
    }


     for ( i=0; i<numeros[i]; i++)
    {

        if (i==0 || numeros[i]>maximo)
        {
            maximo = numeros[i];
            posicion = i;
        }

    }

    printf("El maximo es: %d en la posicion: %d",maximo,posicion);*/
    return 0;
}

void mostrarVectInt(int vector[], int tam)
{
    for (int i=0; i < tam; i++)
    {
        printf("Ingrese numero para la posicion %d:\n",i);
        scanf("%d",&vector[i]);
    }


    printf("Los numeros ingresados:");

    for (int i=0; i<tam; i++)
    {
        printf("|%d|",vector[i]);
    }
}

int obtenerMayor(int vector[], int tam)
{
    int mayor, flag=0;

    printf("El mayor es: %d y su posicion: %d",)
    for (int i=0; i<tam; i++)
    {
        if (flag==0 || vector[i]>mayor)
        {
            mayor = vector[i];
            flag=1;
        }
    }
}
