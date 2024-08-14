#include <stdlib.h>
#include <stdio.h>

int main()
{
int vetor[10];

    for(int i = 0; i < 10; i++){
    printf("Informe o valor do vetor na posicacao %d: ", i);
    scanf("%d", &vetor[i]);
}
    printf("Numeros na ordem correta: ");
    for(int j = 0; j < 10; j++){
      printf("%d ", vetor[j]);
    }

return 0;
}
