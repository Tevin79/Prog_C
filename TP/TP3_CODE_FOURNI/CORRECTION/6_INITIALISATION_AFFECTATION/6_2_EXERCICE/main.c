#include <stdio.h>
#include <stdlib.h>

//## on retrouve ce qui a été dit dans le chapitre "extern" en note
//## de bas de page (de bas de cours plutôt)

int globale;                  //## initialisée en fait à 0, mais conceptuellement non initialisée
static int static_fichier;    //## initialisée en fait à 0, mais conceptuellement non initialisée

void f()
{
    static int static_fonction;    //## initialisée en fait à 0, mais conceptuellement non initialisée
    int locale_fonction;           //## non initialisée => warning si utilisée avant affectation

    printf("static_fonction : %d\n", static_fonction);
    printf("locale_fonction : %d\n", locale_fonction);  // warning ici
}

int main()
{
    int locale_main;  //## non initialisée => warning si utilisée avant affectation
    
    printf("globale         : %d\n", globale);
    printf("static_fichier  : %d\n", static_fichier);
    printf("locale_main     : %d\n", locale_main);        // warning ici ; affiche 0 chez moi, mais c'est de la (mal)chance
    f();
    
    return EXIT_SUCCESS;
}
