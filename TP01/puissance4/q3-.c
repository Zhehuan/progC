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

int main()
{
	int grille[5][5] = {{3, 1, 1, 0, 1},
		{2, 1, 5, 4, 2},
		{1, 2, 4, 5, 3},
		{3, 4, 2, 3, 5},
		{0, 6, 3, 3, 7}};
	int i = 0, j;

	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (grille[i][j] == grille[i + 1][j + 1] && grille[i + 1][j + 1] == grille[i + 2][j + 2])
			{
				printf("%dx%d\n", i + 1, j + 1);
				j++;
			}
			else
				j++;
		}
		i++;
	}
	return 0;
}

