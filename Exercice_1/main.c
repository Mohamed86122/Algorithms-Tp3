#include <stdio.h>
#include <stdlib.h>
/*
    La logique � proceder :
    Le programme est de demander � l'utilisateur de donner deux valeurs ,les deux valeurs vont �tre strictement positif,puis affiche verticalement et horizentalement la table de multiplication
    En premier lieu, le programme affiche la succession de nombre jusqu'� a  en colonne et essayer de multiplier les nombres de colonnes avec la succession de nombre B

*/
int main()
{
    //Initialisation des variables
    /*
        a:nombre entr� par utilisateur
        b:nombre entr� par utilisateur
        i:compteur est souvent utilis� � l'interieur de la boucle
        j:compteur est souvent utilis� � l'interieur de la boucle
    */
    int a , b,  i ,j ;

    do
    {
        //Demander de l'utilisateur de saisir un entier
          printf("Donner un nombre  :");
          //lire l'entier a
          scanf("%d",&a);
          //Demander de l'utilisateur de saisir un entier
          printf("Donner un nombre  :");
          //Lire l'entier b
          scanf("%d",&b);

    }while(a>10 && b>10);//boucle conditionnel si l'utilisateur tape 10 ou plus

    for(i = 1 ; i<=a  ; i++)
    {
        /*
        Premierement,l'utilisateur va taper un nombre ,la boucle affiche le premier nombre entre� en colonne et apres va multiplier le compteur i avec le deuxi�me nombre entr�e j et apres retour a la ligne
        */
        printf("%d\t",i);

        for( j = 2 ; j<=b ;j++)
        {
            printf("%d\t",j*i);
        }
            printf("\n");
    }
}

