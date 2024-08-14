#include <stdio.h>
#include <stdlib.h>

main ()
{
    float x,y;
    float z;

    printf("Informe o primeiro valor: ");
        scanf("%f", &x);
    printf("Informe o segundo valor: ");
        scanf("%f", &y);
    if (y == 0)
    {
        printf("Valor nao aceito, informe outro: ");
            scanf("%f", &y);
    }

    z = x/y;

    printf("Valor da divisao do primeiro valor pelo segundo: %f", z);
}//Dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
