#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[10], sexo, alumnoMayorNota[10];
    int nota, i=0, mayorNota, acumMujeres=0, sexoMayorNota, acumNotas, entrar, contMujeres=0;
    float promedio, promedioMujeres;

    do
    {
        printf("Ingrese nombre");
        gets(nombre);
        fflush(stdin);
        printf("Ingrese sexo");
        scanf("%s",&sexo);
        while (sexo!="f" && sexo!="m")
        {
            printf("ERROR\nIngrese sexo");
            scanf("%s",&sexo);
        }
        printf("Ingrese nota de %s",nombre);
        scanf("%d",&nota);

        if (i==0 || nota>mayorNota)
        {
            strcpy(alumnoMayorNota,nombre);
            mayorNota = nota;
            sexoMayorNota = sexo;
        }

        if (sexo == "f")
        {
            acumMujeres += nota;
            contMujeres++;
        }

        acumNotas += nota;
        i++;
        printf("Presione 0 para salir\n");
        scanf("%d",&entrar);
    }
    while (entrar !=0);

    promedio =(float) acumNotas/i;
    promedioMujeres = (float) acumMujeres/contMujeres;

    printf("Alumno de mayor nota: %s\nSexo: %s\nNota: %d\nPromedio general: %.2f")
     return 0;
}
