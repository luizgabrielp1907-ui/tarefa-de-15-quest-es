#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 9 - Dobrar valores

    Enunciado:
    Leia 5 números e multiplique cada elemento por 2.

    Conceito:
    Operador *=.
    */

    int v[5], i;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-09 - Dobrar Valores\n\n");

    for(i=0;i<5;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);

        v[i] *= 2;
    }

    printf("\nValores alterados:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",v[i]);
    }

    return 0;
}
