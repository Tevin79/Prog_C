/*
 * Exercice 2.02
 * compilation :
 *   $ make ImageMono.o     # ne génère que le .o
 */
/*
 * ### les commentaires de correction sont précédés par ###
 */

#include <string.h>

// une inclusion à faire ici
// ====== TODO ==========
#include "ImageMono.h"

//## En fait la définion de la structure devrait être ici pour être
//## sûr qu'elle est locale au fichier d'implémentation
//## Nous verrons cela plus tard avec l'abstraction pointeur.

//## Ce module est trop simple pour justifier des commentaires pertinents,
//## et donc il n'y en a pas.
//## Les commentaires dans un .c sont liés à l'implémentation et
//## et ne concernent pas (et n'intéressent pas) l'utilisateur.
//## Prenons l'exemple d'un module faisant un tri. Un commentaire utile
//## dans le .c pourrait être :
//##      "l'algo utilisé est celui du livre "Algo pour les nuls" page 157
//## En effet ce commentaire n'intéresse pas l'utilisateur, mais plutôt
//## un concepteur qui devrait modifier le code.

// constructeur
// ====== TODO ==========
void im_init(ImageMono *self, int largeur, int hauteur, const char *couleur)
{
    self->largeur = largeur;
    self->hauteur = hauteur;
    strcpy(self->couleur, couleur);
}

// destructeur
// ====== TODO ==========
void im_desinit(ImageMono *self)
{
    // ### Le destructeur libère les ressources allouées par le constructeur,
    // ### et en l'occurrence il n'y en a pas, donc le code est vide.
    // ### Rq 1 : notamment pas de free sur self, car peut-être que self
    // ###        n'est pas issu d'un malloc
    // ### Rq 2 : même si le code est vide, il faut proposer cette méthode,
    // ###        et l'utilisateur doit l'appeler car peut-être qu'un jour
    // ###        il y aura du code (par exemple si on stocke la couleur de
    // ###        manière dynamique), et de toute façon l'utilisateur n'a pas
    // ###        accès au code de la méthode et ne sait pas qu'il est vide.
    
    // ### on met juste une instruction pour supprimer le warning
    self->largeur = -1;
}

// getters largeur et hauteur
// ====== TODO ==========
int im_getLargeur(const ImageMono *self)
{
    return self->largeur;
}

int im_getHauteur(const ImageMono *self)
{
    return self->hauteur;
}

// getter et setter couleur
// ====== TODO ==========
const char * im_getCouleur(const ImageMono *self)
{
    return self->couleur;
}

void im_setCouleur(ImageMono *self, const char *couleur)
{
    strcpy(self->couleur, couleur);
}
