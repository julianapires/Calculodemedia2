#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float N1,N2,Media,Ponto_Extra,Media_Final; //Declara��o de vari�veis
	printf("Informe a Nota 1: "); //Pede a primeira nota ao usu�rio
	scanf("%f",&N1); //Le a informa��o dada pelo usu�rio
	printf("Informe a Nota 2: "); //Pede a segunda nota ao usu�rio
	scanf("%f",&N2); //Le a informa��o dada pelo usu�rio
	Media=(N1+N2)/2; //Calculo da m�dia (N1+N2)/2
	printf("\nInforme pontos extra\n"); //Pede pontos extras ao usu�rio
	scanf("%f",&Ponto_Extra); //Le a informa��o dada pelo usu�rio
	Media_Final=Media+Ponto_Extra; //Calcula M�dia + pontos extra
	printf("\n A sua Media final de %.2f com %.2f = %.2f\n", Media, Ponto_Extra,Media_Final); //Informa o valor da media final
	system ("pause");
	return 0;
}
