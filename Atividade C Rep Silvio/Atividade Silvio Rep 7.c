#include <stdio.h>
#include <stdlib.h>

main()
{
    float N1,N2,N3;
    float mediaf;
    int alaprovados, alreprovados;
    float mediafturma;
    int i;
    float totalt;

    mediafturma = 0;
    totalt = 0;
    mediaf = 0;
    alaprovados = 0;
    alreprovados = 0;

    for ( i = 0; i <= 1; i++)
    {
     printf("\nInforme a sua primeira nota: ");
     scanf("%f", &N1);
     printf("Informe a sua segunda nota: ");
     scanf("%f", &N2);
     printf("Informe a sua terceira nota: ");
     scanf("%f", &N3);

    mediaf = (N1+N2+N3)/3;

if (mediaf >= 7)
{
    printf("\nAprovado.");
    alaprovados++;
    totalt += mediaf;
}
else
{
    printf("\nReprovado.");
    alreprovados++;
    totalt += mediaf;
}
    }

    mediafturma = totalt/i;

    printf("\nAlunos aprovados por media: %d", alaprovados);
    printf("\nAlunos reprovados/media inferior a sete: %d", alreprovados);
    printf("\nMedia da turma: %f", mediafturma);
}//Dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
