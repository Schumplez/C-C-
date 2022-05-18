//14. Calcule a área de uma pizza que possui um raio R (pi=3.14).

#include<stdio.h>
#include<math.h>
#define PI 3.14
//A=pi*r2


main(){
	double raio, area;
	
	printf("\n Digite o valor do raio da pizza: ");
	scanf("%lf",&raio);
	
	area = pow(raio, 2)*PI;
	
	printf("\n A area da pizza e de: %.2f cm",area);
	
}
