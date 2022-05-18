/*5. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para
ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu
colocar no tanque.*/

#include<math.h>
#include<iostream>

float preco, valorP, tanque;
main(){
	printf("Digite o preco da gasolina :");
	scanf("%f",&preco);
	printf("\n Coloque o valor que deseja pagar:");
	scanf("%f",&valorP);
	tanque=(valorP/preco);
	printf("\n A quantidade de litros posta no seu veiculo foi de: %f litros",tanque);
	}
