#include <stdio.h>
#include <math.h>
#include <locale.h>

	//Elabore um algoritmo que leia o nome, idade e sexo de 20 pessoas. A cada leitura, imprima o nome, se a 
	//pessoa for do sexo masculino, e tiver mais de 21 anos.
	main()
	{
		setlocale(LC_ALL, "Portuguese");
		char name[20], gender;
		int age, i;
		for(i=1; i<=20; i++)
		{
			printf("\n------------------------------------------\n");
			printf(">Insira o nome: "); 
			fflush(stdin);
			gets(name);
			printf("\n>Insira o sexo, 'm' masculino ou 'f' para feminino: "); 
			scanf("%c", &gender);
			printf("\n>Insira a idade: "); 
			scanf("%d", &age);	
			if (age>21 && gender == 'm')
			{
				printf("\n------------------------------------------\n");
				printf("\nNome: %s\n", name);
				printf("Sexo: %c\n", gender);
				printf("Idade: %d\n", age);
			}	
		}
	}
