#include <stdio.h>
#include <stdlib.h>

main()
{
float precos[30];
float somaprecos = 0;
float mediaprecos = 0;
int codigos[30];
int acimam = 0;
int i;

    for(i = 0; i < 30; i++){
        printf("Informe o preco do artigo %d: ", i+1);
        scanf("%f", &precos[i]);
        somaprecos += precos[i];

        printf("Informe o codigo do artigo %d: ", i+1);
        scanf("%d", &codigos[i]);
    }

    mediaprecos = somaprecos/30;

    for (i = 0; i < 30; i++){
        if (precos[i] > mediaprecos){
            printf("Codigo: %d, preco: %f", codigos[i], precos[i]);
            acimam++;
        }
    }
    if (acimam == 0){
        printf("Nenhum artigo tem preco superior a media.");
    }
}
//Dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
