#include <stdio.h>
//1)Um programa que encontre o menor e o maior elemento de um
//vetor com 20 elementos inicializados.

main()
{
    int vet[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int i, maior, menor;

    menor = vet[0];
    maior = vet[0];

    for (i = 1; i < 20; i++){
        if (vet[i] < menor){
            menor = vet[i];
        }
        if (vet[i] > maior){
            maior = vet[i];
        }
    }


printf("\nMaior valor: %d", maior);
printf("\nMenor valor: %d", menor);
}
//dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
