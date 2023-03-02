#include <stdio.h>
#include <math.h>
#include <locale.h>

	// Elabore um algoritmo que leia 20 números e imprima a soma dos positivos, 
	//e a quantidade de números negativos.

	main()
	{
		setlocale(LC_ALL, "Portuguese");
		int soma=0, number, nega=0;
		for(int i=1; i<=20; i++)
		{
			if(i > 1) printf("\n");
				printf("\n>Insira um número: "); 
				scanf("%d", &number);
				printf("\n------------------------------------------");
			if (number >= 0)
			{
				soma=soma+number;
			}
			else
			{
				nega=nega+1;
			}	
		}
		printf("\n------------------------------------------\n");
		printf("Soma dos números positivos é: %d\n", soma);
		printf("Quantidade de número negativos é: %d\n", nega);
	}
