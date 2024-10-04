#include <stdio.h>       // peut-être inutile
#include <stdlib.h>
#include <stdbool.h>     // peut-être inutile
#include <string.h>      // peut-être inutile
// inclure les .h nécessaires

struct S
{
    int i;
    char c;
    float f;
    int tab[10];
};

void ecritStructBin(const char *nomFichier, const struct S *s)
{
    // todo (une seule instruction d'écriture)
    FILE* fd = fopen(nomFichier, "wb");
    if (fd != NULL){
        printf("ERREUR : ecritStructBin : ouverture fichier\n");
    }
    if (fwrite(s, sizeof(struct S), 1, fd) == false){
        printf("ERREUR : ecritStructBin : ecriture\n");
    }
    fclose(fd);
}

void litStructBin(const char *nomFichier, struct S *s)
{
    // todo (une seule instruction de lecture)
    FILE *fd = fopen(nomFichier, "rb");
    if (fd != NULL){
        printf("ERREUR : litStructBin : ouverture fichier\n");
    }
    fread(s, sizeof(struct S), 1, fd);
    fclose(fd);
}

void tailleStruct(void)
{
    // todo
    printf("Taille de la struct S  : %lu\n", sizeof(struct S));
    printf("    Taille de int      : %lu\n", sizeof(int));
    printf("    Taille de char     : %lu\n", sizeof(char));
    printf("    Taille de float    : %lu\n", sizeof(float));
    printf("    Taille de int * 10 : %lu\n", sizeof(int)*10);
    printf("Taille de tout cumulé  : %lu\n", sizeof(int)+sizeof(char)+sizeof(float)+(sizeof(int)*10));
}

int main(void)
{
    struct S original = {42, 'a', 3.14159, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};
    struct S copie;

    // écrire la structure "original" dans le fichier FIC/exoG_test
    // todo
    ecritStructBin("exoG_test", &original);

    // lire le fichier et remplir la structure "copie"
    // todo
    litStructBin("exoG_test", &copie);

    // comparer les deux structures
    // todo
    if (memcmp(&original, &copie, sizeof(struct S)) == 0)
        printf("Ok les structures sont identiques\n");
    else
        printf("PB ! Les structures sont différentes\n");

    // appeler la fonction tailleStruct
    // todo
    tailleStruct();

    return EXIT_SUCCESS;
}


/*
  SPOILER main

    // écrire la structure "original" dans le fichier FIC/exoG_test
    // todo
    ecritStructBin("exoG_test", &original);

    // lire le fichier et remplir la structure "copie"
    // todo
    litStructBin("exoG_test", &copie);

    // comparer les deux structures
    // todo
    if (memcmp(&original, &copie, sizeof(struct S)) == 0)
        printf("Ok les structures sont identiques\n");
    else
        printf("PB ! Les structures sont différentes\n");
        
    // appeler la fonction tailleStruct
    // todo
    tailleStruct();
*/
