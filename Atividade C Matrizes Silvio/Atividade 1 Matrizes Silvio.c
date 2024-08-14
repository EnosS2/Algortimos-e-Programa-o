#include <stdio.h>
// 7) Dada uma matriz de inteiros M (5,10), escreva um programa que
//realize a sequência de operações:
//• Preencha a matriz por leitura;
//• Procure e imprima o maior elemento de cada linha da matriz;
// Calcule e imprima a média dos elementos de cada coluna.

main()
{
    int M[5][10];
    int i, j;
    int maior;
    float media = 0;
    int soma = 0;

    // i = linha // j = coluna

    printf("Informe os elementos da matriz.\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            printf("Elemento[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    //
    printf("\nMaior elemento de cada linha:\n");
    for(i = 0; i < 5; i++){
        maior = M[i][0];
        for (j = 0; j < 10; j++){
            if (M[i][j] > maior){
                maior = M[i][j];
            }
        }
        printf("Linha %d: %d\n", i+1, maior);
    }
    //
    printf("\nMedia dos elementos de cada  coluna:\n");
    for (j = 0; j < 10; j++){
        for (i = 0; i < 5; i++){
            soma += M[i][j];
        }
        media = soma/10;
        printf("Coluna %d: %f\n", j+1, media);
    }
}
//Dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
