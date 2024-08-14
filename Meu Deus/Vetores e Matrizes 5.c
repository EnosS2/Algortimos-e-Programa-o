#include <stdio.h>
#include <stdlib.h>

main()
{
int vetor[15];
int i;

for(i = 0; i < 15; i++){
    printf("Informe um valor pro vetor na posicao %d: ", i);
        scanf("%d", &vetor[i]);
}

printf("Os valores positivos do vetor sao: ");
for(int j= 0; j < 15; j++){
    if(vetor[j] > 0){
        printf("%d ", vetor[j]);
    }
}
return 0;
}
