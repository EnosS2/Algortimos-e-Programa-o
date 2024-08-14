#include <stdio.h>
//8) Declare uma matriz M(4,4) de tipo inteiro, e sobre essa matriz
//efetue as seguintes operações:
//• Preencha por leitura;
//• Imprima o conteúdo na forma de uma matriz;
//• Imprima os elementos da diagonal principal em uma linha e
//depois os da diagonal secundária em outra linha;
//• Zere a segunda coluna da matriz e depois a imprima
//novamente;
//• Preencha um vetor com o produto dos elementos de cada
//coluna e imprima esse valor
main ()
{
    int M[4][4];
    int i,j;

    printf("Informe os elementos da matriz.\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Elemento[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    printf("\nMatriz %dx%d:\n", 4, 4);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
    printf("\nDiagonal Principal:\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d ", M[i][i]);
    }
    printf("\n");

    // diagonal secundária
    printf("\nDiagonal Secundaria:\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d ", M[i][4 - 1 - i]);
    }
    printf("\n");

    // zerando a segunda coluna da matriz
    for (i = 0; i < 4; i++)
    {
        M[i][1] = 0;
    }

    //  zerando a segunda coluna
    printf("\nMatriz depois de zerar a segunda coluna:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

    // produto dos elementos de cada coluna
    printf("\nProduto dos elementos de cada coluna:\n");
    for (j = 0; j < 4; j++)
    {
        int produto = 1;
        for (i = 0; i < 4; i++)
        {
            produto *= M[i][j];
        }
        printf("Coluna %d: %d\n", j+1, produto);
    }
}
//Dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis

