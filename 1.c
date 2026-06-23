#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 1 - Ler e exibir um vetor

    Enunciado:
    Leia 5 números inteiros e armazene-os em um vetor.
    Depois exiba todos os valores.

    Conceito:
    Vetor (Array) e estrutura FOR.
    */

    int v[5], i;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-01 - Ler e Exibir Vetor\n\n");

    for(i=0;i<5;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
    }

    printf("\nValores armazenados:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",v[i]);
    }

    return 0;
}
