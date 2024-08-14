#include <stdio.h>
#include <stdlib.h>

int main()
{
int vetor[3];
int valor;
int encontrado = 0;

for(int i = 0; i < 3; i++){
    printf("Informe o valor do vetor na posicao %d: ", i);
    scanf("%d", &vetor[i]);
}
printf("Informe um valor para procurar no vetor: ");
scanf("%d", &valor);

for(int j = 0; j < 3; j++){
    if(valor == vetor[j]){
       printf("\nO valor %d se encontra na posicao %d", valor, j);
       encontrado = 1;
    }
}
if (!encontrado){
    printf("\nO numero nao se encontra no vetor");
}

return 0;
}
