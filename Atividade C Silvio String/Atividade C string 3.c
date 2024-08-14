#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char nome[20];
    int i, cont = 0;

    printf("Escreva uma palavra: ");
    gets(nome);

    for(i = 0; i < strlen(nome); i++)
    {
        if(nome[i] == 'a' || nome[i] == 'A')
        {
            cont++;
            nome[i] = 'b';
        }
    }

    printf("String modificada: %s", nome);
    printf("\nQuantidade de caracteres modificados: %d", cont);
}

//Nomes: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
