#include <stdio.h>

int main() {
    int matriz[3][3] = {{3,1,2},{0,4,5},{0,0,2}};
    int i, j;
    int mts = 1;

    printf("\nMatriz: \n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    for (i = 1; i < 3; i++){
        for (j = 0; j < i; j++){
            if (matriz[i][j] != 0){
                mts = 0;
            }
        }
    }
    if(mts == 1){
        printf("\nA matriz e triangular superior");
    } else {
        printf("\nA matriz nao e triangular superior");
    }

    return 0;
}

//Nomes: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
