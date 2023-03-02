#include <stdio.h>
#include <math.h>
#include <locale.h>

	//Elabore um algoritmo que leia 5 números, e imprima o percentual de números pares informados.

	main()
	{
		setlocale(LC_ALL, "Portuguese");
		int par=0, number;
		float perc;
		for(int i=1; i<=5; i++)
		{
			if(i > 1) printf("\n");
				printf("\n>Insira um número: "); 
				scanf("%d", &number);
			if (number%2 == 0)
				par=par+1;
		}
		perc=par;
		perc=(perc/5)*100;
		printf("\n------------------------------------------\n");
		printf("Percentual de números pares: %.1f%%\n", perc);
		
	}
