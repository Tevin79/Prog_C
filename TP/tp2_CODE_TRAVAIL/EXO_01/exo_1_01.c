/*
 * Exercice 1.01
 * compilation :
 *   $ alias mygcc='gcc -g -Wall -Wextra -pedantic -std=c99'
 *   $ mygcc title.c exo_1_01.c -o exo_1_01
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>      // pour accéder aux fonctions sur les chaînes

#include "title.h"


int main(void)
{
    // ------------------------------------------------------------
    // les déclarations de l'énoncé
    char c = 'A';
    char *s1 = "chien";
    char s2[] = "chiot";
    char t[] = {'c', 'h', 'o', 'u', 'x'};
    // ====== TODO ==========
    // ====== faites un dessin  représentant l'état de la mémoire.

    // ------------------------------------------------------------
    // Affichage des 4 variables
    title_print("Affichage des 4 variables");

    // ====== TODO ==========

    printf("c  : %c\n", c);
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
    printf("t  : ");
    for (int i = 0 ; i < 5 ; i++){
        printf("%c", t[i]);
    }
    printf("\n");

    // ------------------------------------------------------------
    // Utilisation de strlen
    title_print("strlen or not strlen, this is the question");

    // ====== TODO ==========

    printf("c  : %lu\n", strlen(&c));
    printf("s1 : %lu\n", strlen(s1));
    printf("s2 : %lu\n", strlen(s2));
    printf("t  : %lu\n", strlen(t));

    // ------------------------------------------------------------
    // Quelle est la différence en s1 et s2 ?
    title_print("différence entre s1 et s2");
    // explications
    // ====== TODO ==========

    // Modifier la 4me lettre de s1
    // ====== TODO ==========
    //s1[4] = 'c';
    printf("s1 : %s\n", s1);

    // Modifier la 4me lettre de s2
    // ====== TODO ==========
    s2[4] = 'c';
    printf("s2 : %s\n", s2);

    // ------------------------------------------------------------
    // Combien de cases
    // ====== TODO ==========

    printf("c  : %lu\n", sizeof(c));
    printf("s1 : %lu\n", sizeof(s1));
    printf("s2 : %lu\n", sizeof(s2));
    printf("t  : %lu\n", sizeof(t));

    // ------------------------------------------------------------
    // Remplacer la 3me lettre (le 'i') de s2 par '\0'
    title_print("longueur vs. nombre de cases");
    // ====== TODO ==========

    s2[2] = '\0';
    printf("s2 : %s\n", s2);

    // ------------------------------------------------------------
    // peut-on appeler strlen sur une chaîne littérale ?
    title_print("strlen sur une chaîne littérale");
    // ====== TODO ==========

    int l = strlen("colibri");
    printf("%d\n", l);

    printf("\n");

    return EXIT_SUCCESS;
}
