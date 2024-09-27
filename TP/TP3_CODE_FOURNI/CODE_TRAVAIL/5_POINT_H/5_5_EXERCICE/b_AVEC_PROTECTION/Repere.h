// pas de protections contre les doubles inclusions
// il faut inclure Vecteur.h
// et définir la structure
// ======== TODO ========
#ifdef REPARE_H
#define REPARE_H
#include "Vecteur.h"

typedef struct tabVecteur{
    vecteur v[3];
} tabVecteur;

#endif
