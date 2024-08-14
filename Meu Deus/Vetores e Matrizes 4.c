#include <stdio.h>
#include <stdlib.h>

int main()
{
int vetor[10];
int i, soma = 0;

for(i = 0; i < 10; i++){
    printf("Informe um valor inteiro pro vetor na posicao %d: ", i);
    scanf("%d", &vetor[i]);
}
for (i = 0; i < 10; i++){
    soma += vetor[i];
}
printf("A soma dos valores e: %d", soma);

return 0;
}
