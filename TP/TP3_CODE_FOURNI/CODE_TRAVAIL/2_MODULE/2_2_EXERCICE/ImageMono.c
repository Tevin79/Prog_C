/*
 * Exercice 2.02
 * compilation :
 *   $ make ImageMono.o     # ne génère que le .o
 */

#include <string.h>

// une inclusion à faire ici
// ====== TODO ==========
#include "ImageMono.h"

// constructeur
// ====== TODO ==========
void init(image *img, int width, int height, char *color){
    img->width = width;
    img->height = height;
    img->color = color;
}

// destructeur
// ====== TODO ==========
void dest(image *img){
    free(img);
}

// getters largeur et hauteur
// ====== TODO ==========
int getHeight(const image *img){
    return img->height;
}
int getWidth(const image *img){
    return img->width;
}

// getter et setter couleur
// ====== TODO ==========
char * getColor(const image *img){
    return img->color;
}
void setColor(image *img, char * color){
    img->color = color;
}
