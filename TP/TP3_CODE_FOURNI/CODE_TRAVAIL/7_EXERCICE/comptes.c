// todo : des include
#include "comptes.h"
#include "operation.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// todo : définitions des constantes, types, variables, ...
static const int NB_COMPTES = 10;
static const int MONTANT_DEBUT = 15;
static int comptes[NB_COMPTES];
static bool init_done = false;
static const int BONUS = 7;

/*
 * fonctions internes
 */

 static void init_comptes(void){
    if (!init_done){
        for (int i = 0 ; i < NB_COMPTES ; i++){
            comptes[i] = MONTANT_DEBUT;
        }
        init_done = true;
    }
 }

// gestion violente
// l'utilisation d'un assert serait plus élégante
// todo : la fonction doit être locale au fichier, y a-t-il quelque chose à faire ?
static void verifNumCompte(int numCompte)
{
    if ((numCompte < 0) || (numCompte >= getNbComptes()))
    {
        fprintf(stderr, "numéro de compte incorrect.\n");
        exit(EXIT_FAILURE);
    }
}

// todo : le reste du code

int getNbComptes(void){
    init_comptes();
    return NB_COMPTES;
}

int getSoldeCompte(int numCompte){
    init_comptes();
    verifNumCompte(numCompte);
    return comptes[numCompte];
}

void creditCompte(int numCompte, int montant){
    init_comptes();
    verifNumCompte(numCompte);
    static int plus_un = 1;
    if (plus_un >= BONUS){
        comptes[numCompte] = plus(comptes[numCompte], montant + 1);
        plus_un = 0;
    } else {
        plus_un++;
        comptes[numCompte] = plus(comptes[numCompte], montant);
    }
}

void debitCompte(int numCompte, int montant){
    init_comptes();
    verifNumCompte(numCompte);
    comptes[numCompte] = moins(comptes[numCompte], montant);
}
