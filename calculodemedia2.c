#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float N1,N2,Media,Ponto_Extra,Media_Final; //Declaração de variáveis
	printf("Informe a Nota 1: "); //Pede a primeira nota ao usuário
	scanf("%f",&N1); //Le a informação dada pelo usuário
	printf("Informe a Nota 2: "); //Pede a segunda nota ao usuário
	scanf("%f",&N2); //Le a informação dada pelo usuário
	Media=(N1+N2)/2; //Calculo da média (N1+N2)/2
	printf("\nInforme pontos extra\n"); //Pede pontos extras ao usuário
	scanf("%f",&Ponto_Extra); //Le a informação dada pelo usuário
	Media_Final=Media+Ponto_Extra; //Calcula Média + pontos extra
	printf("\n A sua Media final de %.2f com %.2f = %.2f\n", Media, Ponto_Extra,Media_Final); //Informa o valor da media final
	system ("pause");
	return 0;
}
