#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 4 - Contar ímpares

    Enunciado:
    Leia 10 números e conte quantos são ímpares.

    Conceito:
    IF, FOR e ++.
    */

    int v[10], i, cont=0;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-04 - Contar Impares\n\n");

    for(i=0;i<10;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);

        if(v[i]%2!=0)
        {
            cont++;
        }
    }

    printf("\nQuantidade de impares = %d\n",cont);

    return 0;
}
