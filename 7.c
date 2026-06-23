#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 7 - Aumentar valores

    Enunciado:
    Leia 5 números e aumente cada um em 10 unidades.

    Conceito:
    Operador +=.
    */

    int v[5], i;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-07 - Aumentar Valores\n\n");

    for(i=0;i<5;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);

        v[i] += 10;
    }

    printf("\nValores alterados:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",v[i]);
    }

    return 0;
}
