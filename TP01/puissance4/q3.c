#include <stdio.h>

int main()
{
	int grille[5][5];
	int colonne = -1, ligne = 0;

	printf("Entrez un numero de colonne: \n");
	scanf("%d", &colonne);
	while (ligne < 5)
	{
		if (grille[ligne][colonne] == 0)
			printf("Premiere ligne vide est la ligne %d.\n", ligne);
		else
			ligne++;
	}
	return 0;
}
