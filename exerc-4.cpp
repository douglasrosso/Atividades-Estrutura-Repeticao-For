#include <stdio.h>
#include <math.h>
#include <locale.h>

	//Elabore um algoritmo que imprima todos os números de 1 até 5.
	main()
	{
		setlocale(LC_ALL, "Portuguese");
		for(int i=1; i<=5; i++)
		{
			printf("\n%d\n", i);
		}
	
	}
