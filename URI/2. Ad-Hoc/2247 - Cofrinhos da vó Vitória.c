// 2247 - Cofrinhos da vó Vitória (https://www.urionlinejudge.com.br/judge/pt/problems/view/2247)

#include "stdio.h"

int controle = 1;
int main()
{
	int entrada = 0, a = 0, b = 0, i = 0;
	scanf("%d", &entrada);

	if(entrada == 0)
		return 0;

	printf("Teste %d\n", controle);

	for(; i < entrada; i++)
	{
		int auxA = 0, auxB = 0;
		scanf("%d %d", &auxA, &auxB);

		a += auxA;
		b += auxB;

		printf("%d\n", a - b);
	}

	printf("\n");
	controle ++;

	main();
	return 0;
}
