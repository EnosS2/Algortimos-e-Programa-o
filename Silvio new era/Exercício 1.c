#include <stdio.h>

main ()
{
float temp;

printf("Informe a sua temperatura: ");
    scanf("%f", &temp);

    if (temp == 42){
        printf("A essa temperatura, nao ha mais garantias de que a vida possa ser salva");
    }
    else if (temp >= 40 && temp <= 41){
        printf("Nesse ponto, a pessoa pode ate parar de suar, sinal de que esta desidratada");
    }
    else if (temp >= 38 && temp <= 39){
        printf("A recomendacao e evitar o sol, jogar agua fria no corpo e tomar bebida gelada nao alcoolica");
    }
    else if (temp >= 36 && temp <= 37){
        printf("Temperatura normal do corpo");
    }
    else if (temp <= 35 && temp >= 31){
        printf("Aqui comeca a hipotermia, ou perda excessiva de calor");
    }
    else if (temp <= 30 && temp >= 21){
        printf("Neste patamar, o fluxo sanguineo no cerebro diminui, causando confusao mental e problemas de raciocinio");
    }
    else if (temp <=20) {
        printf("Conforme a temperatura corporal abaixa, o metabolismo diminui cada vez mais, ate que o coracao para e a atividade cerebral cessa completamente");
    }
}
