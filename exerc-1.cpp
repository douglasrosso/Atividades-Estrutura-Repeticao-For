#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	//Elabore um algoritmo que leia quatro números, e imprima a raiz quadrada de cada um
	setlocale(LC_ALL, "Portuguese");
	float numero;
	for(int i=1; i<=4; i++)
	{
		if(i > 1) printf("\n");
		printf("Insira um número: "); 
		scanf("%f", &numero);
		printf("\nRaiz quadrada: %.2f\n", sqrt(numero));
	}
}
