/*
 * Exercice 1.03
 * compilation :
 *   $ alias mygcc='gcc -g -Wall -Wextra -pedantic -std=c99'
 *   $ mygcc title.c exo_1_03.c -o exo_1_03
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>      // pour accéder aux fonctions sur les chaînes

#include "title.h"

// Écrire ici la fonction isPalin
// ====== TODO ==========
bool isPalin(const char *s){
    int len = strlen(s);
    if (len <= 2){
        printf("ERREUR : La chaine est trop courte\n");
        return false;
    }
    for (int i = 0 ; i < len/2 ; i++){
        if (s[i] != s[len-i-1]){
            printf("'%s' n'est pas un palindrome\n", s);
            return false;
        }
    }
    printf("'%s' est un palindrome\n", s);
    return true;
}

// Écrire ici la fonction isPalinTab
// ====== TODO ==========
bool isPalinTab(const char t[]){
    int len = 0;
    while (t[len] != '\0'){
        len++;
    }
    if (len <= 2){
        printf("ERREUR : Le tableau est trop petit\n");
        return false;
    }
    for (int i = 0 ; i < len/2 ; i++){
        if (t[i] != t[len-i-1]){
            printf("%s n'est pas un palindrome\n", t);
            return false;
        }
    }
    printf("%s est un palindrome\n", t);
    return true;
}


int main(void)
{
    // ------------------------------------------------------------
    title_print("iPalin");
    // appeler isPalin avec les deux chaînes :
    // - "esope reste ici et se repose" : ce n'est pas un palindrome
    // - "esoperesteicietserepose" : c'est un palindrome
    // Pour info voici d'autres palindromes :
    // - "etlamarinevaveniramalte"
    // - "eluparcettecrapule",
    // - "02022020" i.e. le 2 février 2020
    // - "engagelejeuquejelegagne"
    // ====== TODO ==========
    bool t = isPalin("esope reste ici et se repose");
    t = isPalin("esoperesteicietserepose");
    t = isPalin("etlamarinevaveniramalte");
    t = isPalin("eluparcettecrapule");
    t = isPalin("02022020");
    t = isPalin("engagelejeuquejelegagne");

    // ------------------------------------------------------------
    title_print("iPalinTab");
    // appeler isPalinTab avec un tableau qui n'est pas un palindrome (par
    // exemple 'b','a','t','e','a','u') puis avec un palindrome (par
    // exemple 'k','a','y','a','k')
    // ====== TODO ==========
    char l1[] = "bateau";
    t = isPalinTab(l1);
    char l2[] = "kayak";
    t = isPalinTab(l2);

    printf("\n");

    return EXIT_SUCCESS;
}
