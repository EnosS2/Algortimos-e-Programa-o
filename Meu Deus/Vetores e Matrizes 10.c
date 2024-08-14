#include <stdio.h>
#include <stdlib.h>

main()
{
int matriz[3][3];
int soma1 = 0,soma2 = 0,soma3 = 0;

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        printf("Informe o valor na posicao [%d][%d]: ", i+1, j+1);
        scanf("%d", &matriz[i][j]);
    }
}
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        if(j == 0){
            soma1 += matriz[i][j];
        }
        else if(j == 1){
            soma2 += matriz[i][j];
        }
        else if(j == 2){
            soma3 += matriz[i][j];
        }
    }
}
printf("\nMatriz: \n");
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        printf("%d\t", matriz[i][j]);
    }
printf("\n");
}
printf("\nSoma da primeira coluna: %d", soma1);
printf("\nSoma da segunda coluna: %d", soma2);
printf("\nSoma da terceira coluna: %d", soma3);

return 0;
}
