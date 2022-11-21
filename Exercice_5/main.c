#include <stdio.h>
#include <stdlib.h>
/*
    La logique à proceder :

    En premier lieu, le programme demande de l'utilisateur  d'enter la taille du tableau et apres donner un entier et chercher chaque position se trouve l'entier dans le tableau

*/
int main()
{
    //Initialisation des variables
    /*
        nbr:nombre entré par utilisateur(la taille du tableau)
        A:nombre entré par utilisateur
        i:compteur est souvent utilisé à l'interieur de la boucle
        j:compteur est souvent utilisé à l'interieur de la boucle
    */
    int nbr,A,cpt=0,pos=0, i ,  j ;
    printf("donner la taille du tableau ");
    scanf("%d",&nbr);

    printf("donner un entier ");
    scanf("%d",&A);
    //Initialisation de tableau T de nombre N
    int T[nbr];
    /*
        la premiere boucle sert à remplir le tableau de n taille par des entiers
    */
    for( i=0;i<nbr;i++)
    {
        printf("T[%d]",i);
        scanf("%d",&T[i]);

    }
     i = 0;
       while (i < nbr && A != T[i]) {
          i++;
       }

       if (i < nbr)
       {

            printf("L'element se trouve dans la position = %d", i + 1);
            i++;

       } else
       {

          printf("Element non trouve");
       }

    //printf("%d %d ",cpt,pos);
    return 0;
}
