#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	// Elabore um algoritmo que leia 5 números e imprima ao final, imprima o maior, menor, e a média dos números 
	//digitados.
	int i;
	float average, number, larger=-99999, smaller=99999;
	for (i=1; i<=5; i++)
	{
		printf("Digite um número: "); scanf("%f", &number);
		average=average+number;
		if(number>larger)
		{
			larger=number;
		}
		if(number<smaller)
		{
			smaller=number;
		}
		
	}
	average=average/5;
	printf("\nO número menor é: %.1f", smaller);
	printf("\nO número maior é: %.1f", larger);
	printf("\nA média dos números é: %.1f\n", average);
	
	
}
