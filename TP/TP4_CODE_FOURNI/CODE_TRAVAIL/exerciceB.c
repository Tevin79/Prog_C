#include <stdio.h>       // peut-être inutile
#include <stdlib.h>
#include <stdbool.h>     // peut-être inutile
#include <string.h>      // peut-être inutile
// inclure les .h nécessaires
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

// on utilise les fonctions fopen, fwrite et fclose

int main(void)
{
    int n1 = 1952540739;
    int n2 = 1130914164;

    printf("valeur hexa de n1 (%d) : %x\n", n1, n1);
    printf("valeur hexa de n2 (%d) : %X\n", n2, n2);
    printf ("\n");

    // créer le fichier "FIC/exoB_1_test" et écrire dedans en binaire (avec fwrite) le nombre n1
    FILE* f1 = fopen("FIC/exoB_1_test", "wb");
    fwrite(&n1, sizeof(int), 1, f1);
    fclose(f1);


    // créer le fichier "FIC/exoB_2_test" et écrire dedans en binaire (avec fwrite) le nombre n2
    FILE* f2 = fopen("FIC/exoB_2_test", "wb");
    fwrite(&n2, sizeof(int), 1, f2);
    fclose(f2);
    
    return EXIT_SUCCESS;
}
