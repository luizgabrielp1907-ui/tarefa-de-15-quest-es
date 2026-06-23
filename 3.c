#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 3 - Contar pares

    Enunciado:
    Leia 10 números e conte quantos são pares.

    Conceito:
    IF, FOR e operador ++.
    */

    int v[10], i, cont=0;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-03 - Contar Pares\n\n");

    for(i=0;i<10;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);

        if(v[i]%2==0)
        {
            cont++;
        }
    }

    printf("\nQuantidade de pares = %d\n",cont);

    return 0;
}
