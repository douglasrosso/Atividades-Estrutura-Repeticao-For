#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	// Elabore um algoritmo que imprima todos os números pares e ímpares compreendidos entre 85 e 906, e 
	//imprimir, ao final, a soma dos pares, a soma dos ímpares, o percentual de pares, e o percentual de ímpares.
	int i;
	float odd, pair, index;
	for (i=85; i<=906; i++)
	{
		if (i%2==0)
		{
			pair++;
			printf("%d\n", i);
		} 
		else {
			odd++;
		}
		index=index+1;
	}
	printf("\nSoma dos pares: %.2f", pair);
	printf("\nSoma dos ímpares: %.2f", odd);
	printf("\nPercentual dos pares: %.2f", (pair/index)*100);
	printf("\nPercentual dos ímpares: %.2f", (odd/index)*100);
	printf("\nindece: %.2f", index);
	
}
