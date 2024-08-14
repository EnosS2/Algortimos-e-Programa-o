#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char cargo[10];
    float salarion = 0, salarioa = 0, diferenca = 0;

    printf("Informe o seu cargo: ");
        gets(cargo);

    printf("Informe o seu salario: ");
        scanf("%f", &salarioa);

    strlwr(cargo);

    if (strcmp(cargo, "gerente")== 0)
    {
        salarion = salarioa * 1.1;
    }
    else if (strcmp (cargo, "engenheiro")== 0)
    {
        salarion = salarioa * 1.2;
    }
    else if (strcmp (cargo, "tecnico")== 0)
    {
        salarion = salarioa * 1.3;
    }
    else
    {
        salarion = salarioa * 1.4;
    }

    printf("\nSalario antigo: %.2f\n", salarioa);
    printf("\nSalario novo: %.2f\n", salarion);
    printf("\nDiferenca salarial: %.2f\n", salarion-salarioa);

}

// Nomes: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
