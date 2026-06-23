#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 11 - Mostrar vetor invertido

    Enunciado:
    Leia 5 números e mostre-os na ordem inversa.

    Conceito:
    FOR decrescente e operador --.
    */

    int v[5], i;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-11 - Vetor Invertido\n\n");

    for(i=0;i<5;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
    }

    printf("\nVetor invertido:\n");

    for(i=4;i>=0;i--)
    {
        printf("%d\n",v[i]);
    }

    return 0;
}
