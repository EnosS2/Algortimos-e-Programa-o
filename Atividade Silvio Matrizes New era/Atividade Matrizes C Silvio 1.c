#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    srand(time(NULL));
    int matriz[5][5];
    int i, j, acu;

    for(i = 0; i < 5; i++){

        printf("\n");

        for (j = 0; j < 5; j++){
            matriz[i][j] = rand() % 11;
            printf("%d\t", matriz[i][j]);

            if (i == j){
                acu += matriz[i][j];
            }
        }
    }
    printf("\nA soma e: %d\n", acu);
}
//Nome: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
