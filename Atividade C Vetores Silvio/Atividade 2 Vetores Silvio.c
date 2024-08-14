#include <stdio.h>
#include <stdlib.h>
//2)Ler um vetor “vet” de 10 posições (aceitar somente números
//positivos ). Escrever a seguir o valor do maior elemento de Q e a
//respectiva posição que ele ocupa no vetor
main()
{
    int vet[10];
    int i;
    int maior, pos;

    for (i = 0; i < 10; i++){
        printf("Informe um valor da posicao do vetor: ");
        scanf("%d", &vet[i]);
        while (vet[i] < 0){
         printf("Informe somente numeros inteiros positivos [posicao %d]:", i+1);
         scanf("%d", &vet[i]);
        }
    }

    maior = vet[0];
    for (i = 1; i < 10; i++){
       if (vet[i] > maior){
        maior = vet[i];
        pos = i+1;
       }
    }
    printf("\nMaior valor [posicao: %d]: %d", pos, maior);
}
//dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis

