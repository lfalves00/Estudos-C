#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	double massa;
	double altura;
	double imc;
		
	printf("Insira sua massa");
	scanf("%lf", &massa);
	
	printf("insira sua altura");
	scanf("%lf", &altura);
	
	imc = massa/(altura*altura);
	printf("Seu imc=%lf", imc);
}
