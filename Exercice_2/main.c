#include <stdio.h>
#include <stdlib.h>
/*
    La logique � proceder :
    Le programme est de demander � l'utilisateur de donner un entier ,la valeur est compos� de 1 entier ou plus ,puis affiche le nombre de chiffres qui le composent
    En premier lieu,comment savoir que le nombre est compos� de tel nombre.je vais essayer de diviser le nombre entr�e par l'utilisateur par 10 et incr�menter chaque fois le nombre est divis� par 10 et tant que le nombre est diff�rent de 0

*/
int main()
{
    //Initialisation des variables
    /*
        a:nombre entr� par utilisateur
        b:nombre entr� par utilisateur
        i:compteur est souvent utilis� � l'interieur de la boucle
        cpt:compteur est souvent pour incr�mentation
    */
    int a,i=0,cpt=0;
    //Demander de l'utilisateur de saisir un entier
    printf("donner un entier ");
    //Lire l'entier a
    scanf("%d",&a);
    /*
        Tant que le nombre a est diff�rent de 0,le nombre va se divis� par 10 ,le compteur cpt va incr�menter jusqu'� la condition soit diff�rente
    */
    while(a!=0)
    {   //Le quotient
        a = a / 10;
        cpt ++ ;
        i++;
    }
    //Affichage de r�sultat
    printf(" Resultat : %d",cpt);
    return 0;
}
