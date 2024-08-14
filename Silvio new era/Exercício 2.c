#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor = 300;
    int especialidade, tempo;

    printf("Especialidades: Oftalmologista, otorrinolaringologista e dermatologista");
    printf("\nInforme a especialidade que deseja:");
    printf("\nOftalmologista [1]\n");
    printf("Otorrinolaringologista [2]\n");
    printf("Dermatologista [3]\n");
    printf("\n");
    scanf("%d", &especialidade);

    system("cls");

    printf("Informe o periodo do dia desejado:\n");
    printf("\nManha [1]\n");
    printf("Tarde [2]\n");
    printf("Noite [3]\n");
    printf("Madrugada [4]\n");
    printf("\n");
    scanf("%d",&tempo);

    switch (tempo)
    {
    case 1:
        valor *= 1.1;
        break;
    case 2:
        valor *= 1;
        break;
    case 3:
        valor *= 1.2;
        break;
    case 4:
        valor *= 1.3;
        break;
    default:
        printf("Periodo invalido.");

    }

    printf("\nEspecialidade: %d\n",especialidade);
    printf("Valor: %d\n",valor);
    printf("Turno: %d\n", tempo);

    return 0;
}
