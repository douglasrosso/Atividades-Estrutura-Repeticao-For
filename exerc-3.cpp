#include <stdio.h>
#include <math.h>
#include <locale.h>

	//Elabore um algoritmo que leia um número de entrada n que indicará a quantidade de números a serem lidos.
	//Em seguida, leia n números (conforme o valor informado anteriormente) e imprima o triplo de cada um.
	
main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Insira a quantidade de número a serem lidos: "); 
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		if(i > 1) printf("\n");
		printf("\nO tripo de %d é: %d\n", i, i*3);
	}
	
}
