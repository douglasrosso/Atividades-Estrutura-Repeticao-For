#include <stdio.h>
#include <math.h>
#include <locale.h>

	/* Elabore um algoritmo que leia um número e imprima todos os números de 1 até o número lido, 
	e também o seu produto. 
				Exemplo:
	Número: 3 - Saída: 1 2 3 - Produto: 6 */

	main()
	{
		setlocale(LC_ALL, "Portuguese");
		int number, i, product=0;
		printf("Insira um número inteiro: "); scanf("%d", &number);
		for(i=1; i<=number; i++)
		{
			if(i > 1) printf("\n");
			printf("\n%d\n", i);
			product=product+i;
		}
		printf("\n------------------------------------------\n");
		printf("\nNúmero: %d\n", number);
		printf("Produto de %d é: %d\n", number, product);
		
	}
