/*
 * Exercice 2.02
 * compilation :
 *   $ alias mygcc='gcc -g -Wall -Wextra -pedantic -std=c99'
 *   $ mygcc title.c exo_2_02.c -o exo_2_02
 */

#define _XOPEN_SOURCE 500  // pour strdup
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>      // pour accéder aux fonctions sur les chaînes

#include "title.h"


// Écrire ici la fonction strDynCat
// ====== TODO ==========
void strDynCat(char *dest, const char* src){
    const int len_dest = strlen(dest);
    const int len_src = strlen(src);
    dest = (char *)realloc(dest, len_dest + len_src + 1);
    strcat(dest, src);
}

int main(void)
{
    title_print("strcat dynamique");

    // Chaine qui doit être allongée : obligatoirement allouée dynamiquement
    char *dest = strdup("Tu vois, le monde se divise en deux catégories, ");
    const char *add1 = "ceux qui ont un pistolet chargé et ceux qui creusent.";
    const char *add2 = " Toi, tu creuses.";
    
    printf("avant : %s\n", dest);

    // En utilisant votre fonction, concaténez add1 et add2 à dest;
    // ====== TODO ==========
    strDynCat(dest, add1);
    strDynCat(dest, add2);

    // vérification
    printf("après : %s\n", dest);

    // il y a sûrement quelque chose à faire ici ?
    // ====== TODO ==========
    free(dest);

    printf("\n");

    return EXIT_SUCCESS;
}
