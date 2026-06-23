#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 2 - Somar elementos

    Enunciado:
    Leia 5 números e mostre a soma de todos.

    Conceito:
    Vetor, FOR e operador +=.
    */

    int v[5], i, soma=0;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-02 - Soma dos Elementos\n\n");

    for(i=0;i<5;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);

        soma += v[i];
    }

    printf("\nSoma = %d\n",soma);

    return 0;
}
