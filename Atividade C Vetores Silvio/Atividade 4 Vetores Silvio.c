#include <stdio.h>
#include <stdlib.h>
// 4) Um programa para solicitar 10 n�meros inteiros, via teclado, e
// indicar qual deles � o maior.
main()
{
    int vet[10];
    int maior;
    int i;

    for (i = 0; i < 10; i++){
        printf("Informe o numero: ");
        scanf("%d", &vet[i]);
    }
    maior = vet[0];
    for (i = 0; i < 10; i++){
        if (vet[i] > maior){
            maior = vet[i];
        }
    }
    printf("Maior numero: %d", maior);
}
//dupla: Edgar N�colas de Oliveira Silva e Jean Lucas Maciel dos Reis
