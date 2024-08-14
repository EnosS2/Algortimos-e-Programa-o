#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, matriz[5][2], matriz2[5][2], matrizsoma[5][2];

    printf("Primeira matriz:\n");
    for (i = 0; i < 5; i++){
        printf("\n");
        for (j = 0; j < 2; j++){
            matriz[i][j] = rand() % 100;
            printf("%d\t", matriz[i][j]);
        }
    }
    printf("\n");
    printf("\nSegunda matriz:\n");
    for (i = 0; i < 5; i++){
        printf("\n");
        for (j = 0; j < 2; j++){
            matriz2[i][j] = rand() % 100;
            printf("%d\t", matriz2[i][j]);
        }
    }
    printf("\n");
    printf("\nMatriz com a soma das duas:\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 2; j++){
        matrizsoma[i][j] = matriz[i][j] + matriz2[i][j];
        printf("%d\t", matrizsoma[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//Nomes: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
