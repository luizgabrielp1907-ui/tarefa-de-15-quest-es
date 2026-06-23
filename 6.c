#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 6 - Menor valor

    Enunciado:
    Leia 5 números e mostre o menor deles.

    Conceito:
    Vetor e IF.
    */

    int v[5], i, menor;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-06 - Menor Valor\n\n");

    for(i=0;i<5;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
    }

    menor = v[0];

    for(i=1;i<5;i++)
    {
        if(v[i] < menor)
        {
            menor = v[i];
        }
    }

    printf("\nMenor valor = %d\n",menor);

    return 0;
}
