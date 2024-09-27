/*
 * Exercice 2.02
 * compilation :
 *   $ make main.o     # ne génère que le .o
 * ou :
 *   $ make main       # génère l'exécutable (et les .o)
 */

#include <stdio.h>
#include <stdlib.h>

// sûrement quelque chose à faire ici
// ====== TODO ==========
#include "ImageMono.h"

int main(void)
{
    // déclaration et initialisation de l'image
    // changement de la couleur
    // affichage des caractéristiques
    // appel du destructeur
    // ====== TODO ==========
    image *img = (image*)malloc(sizeof(image));
    init(img, 20, 30, "blue");
    setColor(img, "green");
    printf("Width : %d\nHeight : %d\nColor : %s\n", getWidth(img), getHeight(img), getColor(img));
    dest(img);

    return EXIT_SUCCESS;
}
