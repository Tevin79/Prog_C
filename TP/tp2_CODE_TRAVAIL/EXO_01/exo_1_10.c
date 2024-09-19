/*
 * Exercice 1.10
 * compilation :
 *   $ alias mygcc='gcc -g -Wall -Wextra -pedantic -std=c99'
 *   $ mygcc title.c exo_1_10.c -o exo_1_10
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>      // pour accéder aux fonctions sur les chaînes

#include "title.h"

int main(void)
{
    // ------------------------------------------------------------
    title_print("strcat : utilisation");

    // on surdimensionne la cible pour éviter la gestion mémoire
    char target[1000] = "il fait beau";
    const char * source = " et chaud";

    // afficher target et source et leurs longueurs
    // ====== TODO ==========
    printf("target              : %s\n", target);
    printf("source              : %s\n", source);
    printf("strlen(target)      : %lu\n", strlen(target));
    printf("strlen(source)      : %lu\n", strlen(source));
    
    // contaténer source à la fin de target
    // ====== TODO ==========
    strcat(target, source);

    
    // afficher target et sa longueur
    // ====== TODO ==========
    printf("target apres strcat : %s\n", target);
    printf("longueur de target  : %lu\n", strlen(target));

    printf("\n");

    return EXIT_SUCCESS;
}
