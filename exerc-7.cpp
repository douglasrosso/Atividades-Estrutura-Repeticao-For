#include <stdio.h>
#include <math.h>
#include <locale.h>

	//Elabore um algoritmo que imprima todos os números de 100 a 105, e ao final, a soma deles.
	main()
	{
		setlocale(LC_ALL, "Portuguese");
		int soma=0;
		for(int i=100; i<=105; i++)
		{
			soma=soma+i;
		}
		printf("\na soma dos algaritmos de 100 até 105 é: %d\n", soma);
	
	}
