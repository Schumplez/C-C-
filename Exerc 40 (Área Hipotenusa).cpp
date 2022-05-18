/*40. Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor
da hipotenusa.*/


#include<stdio.h>
#include<math.h>

//hip^2=(cateto1^2) + (cateto2^2)

float hip;
float cat1;
float cat2;

main(){
	printf("\n Digite o valor do primeiro cateto: ");
	scanf("%f",&cat1);
	printf("\n Digite o valor do segundo cateto: ");
	scanf("%f",&cat2);
	hip=sqrt(pow(cat1,2)+pow(cat2, 2));
	printf("\n O valor da hipotenusa e de: %.2f cm",hip);
}
