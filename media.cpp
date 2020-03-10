#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){ 
    // declarando as variáveis, float = natural, double = natural com mais precisão, char = caracter([numero de de caracteres]), int =
	double nota1,nota2,nota3;
	double media = (nota1+nota2+nota3)/3;
	// entrada de dados, scanf("%d INT, %e FLOAT, %lf double, %c char" &SÓSCANF);
	// printf("mensagem");
	
	printf("Insira a 1 nota");
	scanf("%lf", &nota1);
	
	printf("Insira a 2 nota"); 
	scanf("%lf", &nota2);
	
	printf("Insira a 3 nota");
	scanf("%lf", &nota3);
	// calculo da media

	// apresentação do resultado, printf("mensagem");          printf(media="%lf", nota1);   .2 = numero de casas decimais
	printf("Essa e sua media =%.2lf", media);
	
	
	
}
