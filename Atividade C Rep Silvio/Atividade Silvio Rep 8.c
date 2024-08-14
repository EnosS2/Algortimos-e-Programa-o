#include <stdio.h>
#include <stdlib.h>

main()
{
    int especialidade;

    do
    {
        printf("\nInforme que especilidade deseja: ");
        printf("\n Cardiologista [1]");
        printf("\n Epidemiologista [2]");
        printf("\n Dermatologia [3]");
        printf("\n Endocrinologista [4]");
        printf("\n Geriatria [5]");
        printf("\n Outra [6]");
        printf("\n");

        scanf("%d", &especialidade);

        switch (especialidade)
        {
        case 1:
            printf("\nCardiologista");
            break;
        case 2:
            printf ("\nEpidemiologista");
            break;
        case 3:
            printf ("\nDermatologia");
            break;
        case 4:
            printf ("\nEndocrinologista");
            break;
        case 5:
            printf ("\nGeriatria");
            break;
        case 6:
            printf ("\nOutra");
            break;
        default:
            printf("\nEspecialidade invalida, caso queria sair digite 0.");
            break;
        }
    }
    while (especialidade != 0);
}//Dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
