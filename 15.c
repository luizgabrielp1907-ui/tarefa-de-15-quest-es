#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 15 - Soma dos positivos

    Enunciado:
    Leia 10 números e some apenas os positivos.

    Conceito:
    Vetor, IF e operador +=.
    */

    int v[10], i, soma=0;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-15 - Soma dos Positivos\n\n");

    for(i=0;i<10;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);

        if(v[i] > 0)
        {
            soma += v[i];
        }
    }

    printf("\nSoma dos positivos = %d\n",soma);

    return 0;
}
