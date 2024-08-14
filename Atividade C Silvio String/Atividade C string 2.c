#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char gato[10], sapato[10];

    printf("Informe a primeira string:");
    gets(gato);
    printf("Informe a segunda string:");
    gets(sapato);

    system("cls");

    printf("\nConteudo da primeira string: %s\n", gato);
    printf("\nConteudo da segunda string: %s\n", sapato);

    printf("\nSegunda letra da primeira string: %c\n", gato[1]);
    printf("\nSegunda letra da segunda string: %c\n", sapato[1]);
}

// Nomes: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
