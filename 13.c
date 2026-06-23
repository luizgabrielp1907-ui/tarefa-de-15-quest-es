#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 13 - Quantos são maiores que 10

    Enunciado:
    Leia 10 números e conte quantos são maiores que 10.

    Conceito:
    IF e operador ++.
    */

    int v[10], i, cont=0;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-13 - Maiores que 10\n\n");

    for(i=0;i<10;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);

        if(v[i] > 10)
        {
            cont++;
        }
    }

    printf("\nQuantidade = %d\n",cont);

    return 0;
}
