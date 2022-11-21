/*
La logique à proceder :
    Dans cet exercice ,on doit remplir et afficher 2 tableaux, TPOS[] ou on met les nombres positifs et TNEG[] pour les négatifs,alors on va donner en premier la taille du tableau initiale T[],le tableau ou il y'a les nombres positifs et négatifs,alors on va utiliser une boucle(for) et 2 conditions qui vont vérifier si le nombre positif alors on met dans le tableau positif ou négatif dans le tableau négatif, à la fin,on affiche chaque tableau.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Initialisation des variables
    /*
        n:nombre entré par utilisateur(Taille du tableau)
        b:nombre entré par utilisateur
        i:compteur est souvent utilisé à l'interieur de la boucle
        j:compteur est souvent utilisé à l'interieur de la boucle
        k:compteur est souvent utilisé à l'interieur de la boucle
        TPOS[20],TNEG[20]:Declaration de deux tableaux va servir d'avoir deux tableau, un tableau pour entier positif et un autre tableau pour entier negatifs
    */
    int n,i,j=0,k=0,TPOS[20],TNEG[20];

    //Demander de l'utilisateur de saisir un entier
    printf("donnez la taille");
    scanf("%d",&n);
    //Initialisation un tableau de taille n (entier entré par utilisateur)
    int T[n];
    /*
        la premiere boucle sert à remplir le tableau de n taille par des entiers
    */
    for(i=0;i<n;i++)
    {
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    /*
        Premiere operation :
        Verifier avec la boucle si les entiers sont positifs ou negatifs
        Deuxieme operation :
        Affecter les valeurs positifs au tableau T[pos]
        Affecter les valeurs negatifs au tableau T[neg]

    */
    for(i=0;i<n;i++)
    {  if(T[i]>=0)
        {
            TPOS[j]=T[i];
            j++;
        }
        else
        {
             TNEG[k]=T[i];
             k++;
        }
    }
    printf("\n");
    /*
        Afficher les tableaux Tpos et Tneg avec un retour à la ligne
    */
    for(i=0;i<j;i++)
    {
        printf("%d",TPOS[i]);
    }
    printf("\n");
    for(i=0;i<k;i++)
    {
        printf("%d",TNEG[i]);

    }

    return 0;
}
