#include <stdio.h>
#include <stdlib.h>

main ()
{
    float N1,N2, media;
    char vontade;
    int quantial, aprovadosal, reprovadosal;

    vontade = 's';
    N1 = 0;
    N2 = 0;
    media = 0;
    quantial = 0;
    aprovadosal = 0;
    reprovadosal = 0;


    do
    {
        printf("Informe a primeira nota: ");
        scanf("%f", &N1);
        printf("Informe a segunda nota: ");
        scanf("%f", &N2);

        media = (N1+N2)/2;

        if (media == 7)
        {
            printf("Aprovado.");
            aprovadosal++;
        }
        else
        {
            printf("Reprovado.");
            reprovadosal++;
        }
        quantial++;

        printf("\nDeseja informar outras notas? [s/n] ");
        scanf("%s", &vontade);
    }
    while (vontade == 's');

    printf("\nQuantidade de alunos analisados: %d", quantial);
    printf("\nQuantidade de alunos aprovados: %d", aprovadosal);
    printf("\nQuantidade de alunos reprovados: %d", reprovadosal);

//Dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
}

