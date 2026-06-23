#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 14 - Procurar número

    Enunciado:
    Leia 5 números e informe se existe o número 20 no vetor.

    Conceito:
    Vetor e IF.
    */

    int v[5], i, encontrou=0;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-14 - Procurar Numero\n\n");

    for(i=0;i<5;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
    }

    for(i=0;i<5;i++)
    {
        if(v[i] == 20)
        {
            encontrou = 1;
        }
    }

    if(encontrou == 1)
    {
        printf("\nO numero 20 foi encontrado.\n");
    }
    else
    {
        printf("\nO numero 20 nao foi encontrado.\n");
    }

    return 0;
}
