#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int i, idade, contadorAlturaMenor, acumuladorIdade, contadorIdadeMaior;
    float altura, acumuladorAltura, mediaIdadeAlunosMenor, mediaAlturaAlunosIdadeMaior;

    contadorAlturaMenor = 0;
    acumuladorIdade = 0;
    contadorIdadeMaior = 0;
    acumuladorAltura = 0;
    mediaIdadeAlunosMenor = 0;
    mediaAlturaAlunosIdadeMaior = 0;

    for(i = 0; i < 2; i++) {
        printf("Insira sua idade: ");
        scanf("%d", &idade);
        printf("Insira sua altura: ");
        scanf("%f", &altura);

        if(altura < 1.7) {
            acumuladorIdade += idade;
            contadorAlturaMenor++;
        } else if (idade > 20) {
            acumuladorAltura += altura;
            contadorIdadeMaior++;
        }
    }

    mediaIdadeAlunosMenor = acumuladorIdade / contadorAlturaMenor;
    mediaAlturaAlunosIdadeMaior = acumuladorAltura / contadorIdadeMaior;

    printf("A idade media dos alunos com menos de 1.7 eh: %.2f", mediaIdadeAlunosMenor);
    printf("\nA altura media dos alunos com idade maior que 20 eh: %.2f", mediaAlturaAlunosIdadeMaior);

    return 0;
}//Dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
