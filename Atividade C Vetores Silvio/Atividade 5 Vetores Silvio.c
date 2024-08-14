#include <stdio.h>
#include <stdlib.h>
//5) Um programa que preencha, por leitura, com valores reais, dois
//arranjos unidimensionais a e b, ambos de oito elementos, e realize a
//troca dos elementos desses vetores. Após a execução do programa,
//o vetor b deverá conter os valores do vetor a e vice-versa.
main()
{
    int temp;
    int i;
    int veta[8];
    int vetb[8];

    printf("Valores de A \n");
    for (i = 0; i < 8; i++){
        printf("Informe os numeros do vetor a: ");
        scanf("%d", &veta[i]);
    }

    printf("Valores de B \n");

    for (i = 0; i < 8; i++){
        printf("Informe os numeros do vetor b: ");
        scanf("%d", &vetb[i]);
    }
    // invertendo
    for (i = 0; i < 8; i++){
        temp = veta[i];
        veta[i] = vetb[i];
        vetb[i] = temp;
    }
    // mostrando eles inversos
    printf("\nVetor a depois da troca:\n");
    for (i = 0; i < 8; i++) {
        printf("%d", veta[i]);
    }

    printf("\n\nVetor b depois da troca:\n");
    for (i = 0; i < 8; i++) {
        printf("%d", vetb[i]);
    }

}
//dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
