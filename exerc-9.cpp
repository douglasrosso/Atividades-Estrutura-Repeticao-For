#include <stdio.h>
#include <math.h>
#include <locale.h>

	//Elabore um algoritmo que leia o nome, nota da avaliação 1, e nota da avaliação 2 de 15 alunos. Após cada 
	//leitura, imprimir o nome, nota da avaliação 1, nota da avaliação 2 e média aritmética de cada aluno.
	main()
	{
		setlocale(LC_ALL, "Portuguese");
		char name[20];
		float n1, n2, media;
		for(int i=1; i<=15; i++)
		{
			if(i > 1) printf("\n");
				printf("------------------------------------------\n");
				printf(">Insira o nome do aluno: "); 
				fflush(stdin);
				gets(name);
				printf("\n>Insira a primeira nota: "); 
				scanf("%f", &n1);
				printf("\n>Insira a segunda nota: "); 
				scanf("%f", &n2);
				media=(n1+n2)/2;	
				printf("\n------------------------------------------\n");
			if (n1 < 10 || n1 < 10)
			{
				printf("\nNome do aluno: %s\n", name);
				printf("Nota 1: %.2f\n", n1);
				printf("Nota 2: %.2f\n", n2);
				printf("Média: %.2f\n", media);
			}
			else
			{
				printf("Nota inválida");
			}	
		}
	}
