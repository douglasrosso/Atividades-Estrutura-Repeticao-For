#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	for(i=1;i<=8;i++)
	{
		printf("-------------\n");
		for(j=1;j<=10;j++)
		{
			printf("%d x %d: %d\n", i, j, i*j);
		}
	}
}
