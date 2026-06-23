#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 8 - Diminuir valores

    Enunciado:
    Leia 5 números e diminua cada valor em 5 unidades.

    Conceito:
    Operador -=.
    */

    int v[5], i;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-08 - Diminuir Valores\n\n");

    for(i=0;i<5;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);

        v[i] -= 5;
    }

    printf("\nValores alterados:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",v[i]);
    }

    return 0;
}
