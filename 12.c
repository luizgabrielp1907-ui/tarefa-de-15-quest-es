#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    Exercício 12 - Média dos elementos

    Enunciado:
    Leia 5 notas e calcule a média.

    Conceito:
    FOR e operador +=.
    */

    float v[5], soma=0, media;
    int i;

    printf("\nAluno: LUIZ GABRIEL PEREIRA");
    printf("\nPrograma VETOR-12 - Media dos Elementos\n\n");

    for(i=0;i<5;i++)
    {
        printf("Digite a nota: ");
        scanf("%f",&v[i]);

        soma += v[i];
    }

    media = soma / 5;

    printf("\nMedia = %.2f\n",media);

    return 0;
}
