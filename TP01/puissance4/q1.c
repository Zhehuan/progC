#include <stdio.h>
#include <stdlib.h>

int main()
{
	int val[10];
	int i = 0;

	while (i <= 9)
	{
		scanf("%d", &val[i]);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		if (val[i] != 0)
			i++;
		if (val[i] == 0)
		{
			printf("0 se trouve a la position: %d\n", i);
			return 0;
		}
	}
	printf("Pas de 0.\n");
	return 0;
}
