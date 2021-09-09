#include <stdlib.h>
#include <stdio.h>


void cicloFor(int inicio, int fin);
void cicloWhile(int in, int f);
void cicloDoWhile(int in, int final);


int main()
{
    int n1, n2;
    printf("\nPrograma para pedir 2 numeros e imprimir todos los numeros entre ellos \n\n");
    printf("Ingresa el inicio de la impresión \n");
    scanf("%d", &n1);
    printf("Ingresa el fin de la impresión \n");
    scanf("%d", &n2);

    printf("\n---Ciclo for---\n\n");
    cicloFor(n1, n2);
    printf("\n---Ciclo while---\n\n");
    cicloWhile(n1, n2);
    printf("\n---Ciclo do while---\n\n");
    cicloDoWhile(n1, n2);
    return 0;
}

void cicloFor(int inicio, int fin)
{
    int i;
    for(i = inicio; i <= fin ; i++ )
    {
        printf("%d ", i);
    }
}

void cicloWhile(int in, int f)
{
    int i = in;
    while(i <= f )
    {
        printf("%d ", i);
        i++;
    }
}

void cicloDoWhile(int ini, int fin)
{
    int i = ini;
    do{
            printf("%d ", i);
            i++;

    }while(i <= fin );
}
