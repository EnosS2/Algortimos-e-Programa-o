#include <stdio.h>
#include <stdlib.h>

int main()
{
int vetor[10];
int i;

for (i = 0; i < 10; i++){
    printf("Informe o valor do vetor na posicao %d: ", i);
    scanf("%d", &vetor[i]);
}
    printf("Ordem inversa: ");

    for (i = 9; i >= 0; i--){
        printf("%d ", vetor[i]);
    }
}
