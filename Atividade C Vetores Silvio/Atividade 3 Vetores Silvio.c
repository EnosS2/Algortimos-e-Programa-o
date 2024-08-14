#include <stdio.h>
#include <stdlib.h>

main()
{
    int i;
    int vet[5];

    for (i = 0; i < 5; i++){
    printf("Informe um numero inteiro: ");
    scanf("%d", &vet[i]);
    }
    for (i = 4; i >= 0; i--){
        printf("%d", vet[i]);
    }
}
//dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
