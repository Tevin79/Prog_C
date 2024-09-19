/*
 * Exercice 2.01
 * compilation :
 *   $ alias mygcc='gcc -g -Wall -Wextra -pedantic -std=c99'
 *   $ mygcc title.c exo_2_01.c -o exo_2_01
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>      // pour accéder aux fonctions sur les chaînes

#include "title.h"


// Écrire ici la fonction strClone
// ====== TODO ==========
char *strClone(const char *s){
    int len = strlen(s);
    char *s_clone = (char *)malloc((sizeof(char)*len)+1);
    for (int i = 0 ; i < len ; i++){
        s_clone[i] = s[i];
    }
    s_clone[len] = '\0';
    return s_clone;
}

int main(void)
{
    title_print("clone");

    // voici un ensemble de chaînes à dupliquer
    const char *essais[] =
        {
            "Tu vois, le monde se divise en deux catégories, "
                "ceux qui ont un pistolet chargé et ceux qui creusent."
                " Toi, tu creuses.",
            "aa\nbb",   // le '\n' est un caractère comme un autre
            "",         // la chaîne vide est une chaîne tout à fait légale
            "aa\0bb"    // exemple curieux : il y a un marqueur de fin en plein milieu
        };
    int nbCouples = sizeof(essais) / sizeof(*essais);

    for (int i = 0; i < nbCouples; i++)
    {
        printf("source : \"%s\"\n", essais[i]);

        // déclarer la chaîne qui va recevoir la copie, faire la copie de essais[i]
        // et l'afficher.
        // ====== TODO ==========
        char *copie = strClone(essais[i]);
        printf("chaine %2d : %s", i, copie);

        // il y a sûrement quelque chose à faire ici ?
        // ====== TODO ==========
        free(copie);

        printf("\n");
    }

    return EXIT_SUCCESS;
}
