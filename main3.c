#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A=0;
	int B=0;
	printf("Digite valor de A inteiro: \n");
	scanf("%i",&A);
	printf("O valor de A e:%i\n",A);
	printf("Digite valor inteiro de B: \n");
	scanf("%i",&B);

{

	if(A>B)
	{
		printf("A e maior que B \n");
	}
	else
	{
		if(A<B)
		{
			printf("B e maior que A \n");
		}
    
		else
		{
			printf("A e igual a B \n");
		}
	
    }
    
	}
    return 0;
}
