#include <stdio.h>
#include <stdlib.h>
/*
    La logique à proceder :
    Le programme est de demander à l'utilisateur de donner un entier ,la valeur est composé de 1 entier ou plus ,puis affiche le nombre de chiffres qui le composent
    En premier lieu,comment savoir que le nombre est composé de tel nombre.je vais essayer de diviser le nombre entrée par l'utilisateur par 10 et incrémenter chaque fois le nombre est divisé par 10 et tant que le nombre est différent de 0

*/
int main()
{
    //Initialisation des variables
    /*
        a:nombre entré par utilisateur
        b:nombre entré par utilisateur
        i:compteur est souvent utilisé à l'interieur de la boucle
        cpt:compteur est souvent pour incrémentation
    */
    int a,i=0,cpt=0;
    //Demander de l'utilisateur de saisir un entier
    printf("donner un entier ");
    //Lire l'entier a
    scanf("%d",&a);
    /*
        Tant que le nombre a est différent de 0,le nombre va se divisé par 10 ,le compteur cpt va incrémenter jusqu'à la condition soit différente
    */
    while(a!=0)
    {   //Le quotient
        a = a / 10;
        cpt ++ ;
        i++;
    }
    //Affichage de résultat
    printf(" Resultat : %d",cpt);
    return 0;
}
