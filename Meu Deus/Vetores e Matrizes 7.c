#include <stdlib.h>
#include <stdio.h>

main()
{
int matriz[2][3];

for (int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Informe um valor para a matriz na posicao [%d][%d]: ", i+1, j+1);
                scanf("%d", &matriz[i][j]);
        }
}
printf("\nMatriz: \n");

for (int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
        }
    printf("\n");
}
return 0;
}
