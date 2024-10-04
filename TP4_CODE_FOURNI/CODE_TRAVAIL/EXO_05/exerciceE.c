#include <stdio.h>       // peut-être inutile
#include <stdlib.h>
#include <stdbool.h>     // peut-être inutile
#include <string.h>      // peut-être inutile
// inclure les .h nécessaires
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

void ecritTabIntBin(const char *nomFichier, const int tab[], int n)
{
    FILE* fd = fopen(nomFichier, "wb");
    fwrite(tab, sizeof(int), n, fd);
    fclose(fd);
}

int litIntPosBin(const char *nomFichier, int pos)
{
    FILE* fd = fopen(nomFichier, "rb");
    int s = fseek(fd, sizeof(int)*pos, SEEK_SET);
    if (s != 0){
        printf("ERREUR : litIntPosBin : fseek\n");
        return -1;
    }
    int val;
    fread(&val, sizeof(int), 1, fd);
    fclose(fd);
    return val;
}

bool remplaceIntPosBin(const char *nomFichier, int pos, int newVal)
{
    FILE* fd = fopen(nomFichier, "r+");
    int s = fseek(fd, sizeof(int)*pos, SEEK_SET);
    if (s != 0){
        printf("ERREUR : remplaceIntPosBin : fseek\n");
        return false;
    }
    fwrite(&newVal, sizeof(int), 1, fd);
    fclose(fd);
    return true;
}

int main(void)
{
    int tab[] = {10, 5, 87, 0, 5, 212, 12, 14, 55};
    int n = sizeof(tab)/sizeof(*tab);                 // attention : l'utilisation de sizeof pour avoir la taille d'un tableau est fortement déconseillée

    // écrire le tableau dans le fichier FIC/exoE_test
    // todo
    ecritTabIntBin("FIC/exoE_test", tab, n);

    // remplacer la case 2 (donc le 87) par 777
    // todo
    remplaceIntPosBin("FIC/exoE_test", 2, 777);
    // remplacer la case 9 (indice trop grand) par 66 : il ne se passe rien
    // todo
    remplaceIntPosBin("FIC/exoE_test", 9, 66);
    // remplacer la cse 0 (donc le 10) par 1111
    // todo
    remplaceIntPosBin("FIC/exoE_test", 0, 1111);

    // afficher le contenu du fichier en utilisant la fonction litIntPosBin
    // todo
    printf("[");
    for (int i = 0 ; i < n ; i++){
        printf(" %d ", litIntPosBin("FIC/exoE_test", i));
    }
    printf("]\n");
    
    return EXIT_SUCCESS;
}


/*
  SPOILER main

    // écrire le tableau dans le fichier exoE_test
    ecritTabIntBin("exoE_test", tab, n);

    // remplacer la case 2 (donc le 87) par 777
    remplaceIntPosBin("exoE_test", 2, 777);
    // remplacer la case 9 (indice trop grand) par 66 : il ne se passe rien
    remplaceIntPosBin("exoE_test", 9, 66);
    // remplacer la cse 0 (donc le 10) par 1111
    remplaceIntPosBin("exoE_test", 0, 1111);

    // afficher le contenu du fichier en utilisant la fonction litIntPosBin
    printf("  [");
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            printf(", ");
        printf("%d", litIntPosBin("exoE_test", i));
    }
    printf("]\n");
*/
