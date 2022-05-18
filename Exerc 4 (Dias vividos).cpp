/*4. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de
vida ela possui. Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma
pessoa com 19 anos possui 6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ
VIVEU 6935 DIAS 5.*/

#include<iostream>
#define TAM_NOME 80

int idade, dias;
char nome[TAM_NOME + 1];

main(){
	printf("\n Digite seu nome :");
	scanf("%s",&nome);
	printf("\n Digite sua idade: ");
	scanf("%i",&idade);
	dias=(idade*365);
	printf("%s, voce ja viveu cerca de : %i", nome, dias);
	
}
