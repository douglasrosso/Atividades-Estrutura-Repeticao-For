#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int size, i, number, larger=-99999, smaller=99999;
	float sum=0, odd=0;
	printf("Informe a quantidade de números: ");
	scanf("%d", &size);
	for (i=1; i<=size; i++)
	{
		printf("Número: "); scanf("%d", &number);
		sum+=number;
		if(number>larger)
		{
			larger=number;
		}
		if(number<smaller)
		{
			smaller=number;
		}
		if(number%2!=0)
		{
			odd++;
		}
		
	}
	printf("A soma é: %.2f\n", sum);
	printf("Quantidade de números: %d\n", size);
	printf("A media e: %.2f\n", sum/size);
	printf("O maior número e: %d\n", larger);
	printf("O menor número e: %d\n", smaller);
	printf("O percentual de ímpares e: %.2f%%\n", odd/size*100);
}
