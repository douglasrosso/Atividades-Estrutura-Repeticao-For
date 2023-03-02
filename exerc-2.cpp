#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	//Elabore um algoritmo que leia quatro números, e ao final, imprima a média desses números.
	setlocale(LC_ALL, "Portuguese");
	float number, media;
	int i, max = 4;
	for(i = 1; i <= max; i++)
	{
		if(i > 1) printf("\n");
		printf("Insira um número: "); 
		scanf("%f", &number);
		media=media+number;
	}
	printf("\nMédia: %.2f\n", media / max);
}
