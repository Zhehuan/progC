#include <stdio.h>

//chercher la premiere ligne vide et placer le numero a cette position
void **cherche(int size, int colonne, int **grille, int player)
{
  int ligne = 0;
  while (ligne < size)
  {
    if (grille[ligne][colonne] == 0)
    {
      grille[ligne][colonne] == player;
      return **grille;
    }
    else
      ligne++;
  }
  if (ligne == size)
    printf("Please enter an other colon.");
}

void verif()
{
  while (i < size)
  {
    j = 0;
    while (j < size)
    {
      if (grille[i][j] == grille[i + 1][j + 1] && grille[i + 1][j + 1] ==
grille[i + 2][j + 2] || grille)
      {
        win = 1;
        printf("The player%d wins!", player);
        j++;
      }
      else
        j++;
    }
    i++;
  }
}

int main()
{
  //creation de grille
  int size = -1;
  printf("The size of grill is : ");
  scanf("%d", &size);
  int grille[size][size];

  //saisir une colonne
  int col = -1;
  printf("Entrez un numero de colonne: \n");
  while (col < 0 || col > size - 1)
    scanf("%d", &col);

//à compléter
  while ()
    cherche(size, colonne, grille, player)

      int win =  0;
  while (win = 0)
  {
  }
}

