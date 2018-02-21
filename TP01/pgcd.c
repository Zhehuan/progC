#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 54348;
	int b = 3255;

	printf("a = %d, b = %d\n", a, b);
	while (a != b)
	{
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	printf("pgcd de a et b est : %d\n", a);
	return 0;
}
