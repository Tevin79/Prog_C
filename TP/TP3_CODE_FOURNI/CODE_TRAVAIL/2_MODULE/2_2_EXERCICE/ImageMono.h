/*
 * Exercice 2.02
 * compilation :
 *   un .h NE se compile PAS (enfin pas dans ce cours)
 */

// on n'oublie pas la protection contre les doubles inclusions
// ====== TODO ==========
#include <stdio.h>
#include <stdlib.h>

// définition des données (une structure)
// ====== TODO ==========
typedef struct image {
    int width;
    int height;
    char *color;
} image;

// "constructeur"
// - largeur et hauteur doivent être positifs
// - la couleur ne doit pas être vide
// Ne pas respecter ces directives peut conduire à des erreurs d'exécution
// ====== TODO ==========
void init(image *img, int width, int height, char *color);

// "destructeur"
// ====== TODO ==========
void dest(image *img);

// accesseurs : dimensions
// ====== TODO ==========
// la largeur et la hauteur ne peuvent pas être modifiées après
// l'initialisation, d'où l'absence des setters
int getHeight(const image *img);
int getWidth(const image *img);

// accesseurs : couleur
// getter
// ====== TODO ==========
char * getColor(const image *img);
// setter
// la couleur ne doit pas être vide
// ====== TODO ==========
void setColor(image *img, char * color);

// cf. premier TODO sur la protection des doubles inclusions
// ====== TODO ==========
