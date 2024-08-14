#include <stdlib.h>
#include <stdio.h>

main()
{
int vetor[10];
int i, procurar;
int confirma = 0;

for(i = 0; i < 10; i++){
    printf("Informe um valor pro vetor na posicao %d: ", i);
    scanf("%d", &vetor[i]);
}
    printf("\nInforme um valor para procurar: ");
    scanf("%d", &procurar);

    for(i = 0; i < 10; i++){
        if(vetor[i] == procurar){
            confirma = 1;
        }
    }
    if (confirma == 1){
        printf("O valor existe dentro do vetor");
    }
    else{
        printf("O valor nao esta dentro do vetor");
    }
}
