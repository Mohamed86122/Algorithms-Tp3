/*
La logique � proceder :
    Dans cet exercice ,on doit convertir le nombre entr�e par l'utilisateur en binaire. on va essayer de trouver une formule qui va afficher une convertion le d�cimal en binaire.on va affecter le nombre modulo 2 au tableau et affecter le nombre � la division du nombre et puis afficher le nombre en decimal
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     //Initialisation des variables
    /*
        nbr:nombre entr� par utilisateur(le nombre � convertir )
        b:nombre entr� par utilisateur
        i:compteur est souvent utilis� � l'interieur de la boucle
        tab[10]:Declaration d'un tableau de 10 entier positif
    */
    int tab[10], nbr, i;

  printf("Entrez le nombre a convertir: ");
  scanf("%d",&nbr);
  //boucle for va it�rer de zero jusqu'� le nombre soit plus de zero
  for(i=0; nbr > 0; i++)
  {
    tab[i] = nbr%2;
    nbr = nbr/2;
  }
    //afficher de nombre binaire sous forme de tableau
  printf("\n Le nombre binaire est = ");

  for(i=i-1; i >= 0; i--)
  {
    printf("%d",tab[i]);
  }
}
