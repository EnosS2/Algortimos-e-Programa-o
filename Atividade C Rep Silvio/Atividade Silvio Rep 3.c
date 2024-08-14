#include <stdio.h>
int main ()
{
char continuarLoop = 's';
char estadoCivil;
int idade, contadorCasado, contadorSolteiro, contadorViuvo, contadorDivorciado;

int acumuladorC, acumuladorS, acumuladorV, acumuladorD;
float mediaC, mediaS, mediaV, mediaD;

contadorCasado = 0;
contadorSolteiro = 0;
contadorViuvo = 0;
contadorDivorciado = 0;

while (continuarLoop == 's')
{
printf("\nInsira seu estado civil - [s]olteiro, [c]asado, [v]iuvo, [d]ivorciado: ");
scanf(" %c", &estadoCivil);
printf("\nInsira sua idade: ");
scanf("%d", &idade);

if ((estadoCivil == 's' || estadoCivil == 'c' || estadoCivil == 'v' || estadoCivil == 'd') && idade > 0)
{
if (estadoCivil == 's')
{
acumuladorS += idade;
contadorSolteiro++;
}
else if (estadoCivil == 'c')
{
acumuladorC += idade;
contadorCasado++;
}
else if (estadoCivil == 'v')
{
acumuladorV += idade;
contadorViuvo++;
}
else if (estadoCivil == 'd')
{
acumuladorD += idade;
contadorDivorciado++;
}
} else {
continuarLoop = 'n';
}
}

printf ("Solteiros: %d", contadorSolteiro);
printf ("\nCasados: %d", contadorCasado);
printf ("\nViuvos: %d", contadorViuvo);
printf ("\nDivorciados: %d", contadorDivorciado);

if(contadorSolteiro > 0) {
mediaS = acumuladorS / contadorSolteiro;
printf("\nA media da idade de solteiros eh: %.2f", mediaS);
}

if(contadorCasado > 0) {
mediaC = acumuladorC / contadorCasado;
printf("\nA media da idade de casados eh: %.2f", mediaC);
}

if(contadorViuvo > 0) {
mediaV = acumuladorV / contadorViuvo;
printf("\nA media eh: %.2f", mediaV);
}

if(contadorDivorciado > 0) {
mediaD = acumuladorD / contadorDivorciado;
printf("\nA media eh: %.2f", mediaD);
}

return 0;
}
//Dupla: Edgar Nícolas de Oliveira Silva e Jean Lucas Maciel dos Reis
