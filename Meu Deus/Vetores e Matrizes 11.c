#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz [4][3];
    int valor;
    int procurar = 0;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Informe um valor para a matriz na posicao [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Informe um valor para procurar dentro da matriz: ");
    scanf("%d", &valor);

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(valor == matriz[i][j])
            {
                procurar = 1;
            }
        }
    }
    if (procurar)
        {
            printf("\nO valor se encontra na matriz");
        }
        else
        {
            printf("\nO valor nao se encontra na matriz");
        }
return 0;
}
