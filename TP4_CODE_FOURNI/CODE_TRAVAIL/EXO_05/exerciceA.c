#include <stdio.h>       // peut-être inutile
#include <stdlib.h>
#include <stdbool.h>     // peut-être inutile
#include <string.h>      // peut-être inutile
// inclure les .h nécessaires (cf. manuel)
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // avec open, dprintf et close, créer le fichier "FIC/exoA_1_test" et écrire l'entier 12 dedans
    int f1 = open("FIC/exoA_1_test", O_CREAT | O_WRONLY);
    dprintf(f1, "%d", 12);
    close(f1);

    // avec open, write et close, créer le fichier "FIC/exoA_2_test" et écrire l'entier 12 dedans
    int f2 = open("FIC/exoA_2_test", O_CREAT | O_WRONLY);
    int jsp = 12;
    write(f2, &jsp, sizeof(int));
    close(f2);

    // avec fopen, fprintf et fclose, créer le fichier "FIC/exoA_3_test" et écrire l'entier 12 dedans
    FILE* f3 = fopen("FIC/exoA_3_test", "w");
    fprintf(f3, "%d", jsp);
    fclose(f3);

    // avec fopen, fwrite et fclose, créer le fichier "FIC/exoA_4_test" et écrire l'entier 12 dedans
    FILE* f4 = fopen("FIC/exoA_4_test", "w");
    fwrite(&jsp, sizeof(int), 1, f4);
    fclose(f4);
    
    return EXIT_SUCCESS;
}
