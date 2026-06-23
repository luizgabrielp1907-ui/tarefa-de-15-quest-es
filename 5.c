#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 5 - Maior valor

    Enunciado:
    Leia 5 números e mostre o maior deles.

    Conceito:
    Vetor e IF.
    */

    int v[5], i, maior;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-05 - Maior Valor\n\n");

    for(i=0;i<5;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
    }

    maior = v[0];

    for(i=1;i<5;i++)
    {
        if(v[i] > maior)
        {
            maior = v[i];
        }
    }

    printf("\nMaior valor = %d\n",maior);

    return 0;
}
