#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	/*Elabore um algoritmo que imprima os 10 primeiros termos da série de Fibonacci.
	1 1 2 3 5 8 13 21 34 55 
	Obs: Os dois primeiros termos desta série são 1 e 1, e os demais, são gerados a partir da soma dos anteriores. 
	Por exemplo: 
	Terceiro termo: 1 + 1 = 2
	Quarto termo: 1 + 2 = 3*/
	int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    for(i = 0; auxiliar < 55; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;
        printf("%d\t", auxiliar);
	}
	
	
	
}
