
#include <stdio.h>       // peut-être inutile
#include <stdlib.h>
#include <stdbool.h>     // peut-être inutile
#include <string.h>      // peut-être inutile
// inclure les .h nécessaires
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void ecritChaine(const char *nomFichier, const char *s)
{
    // todo
    // À vous de voir si vous écrivez le '\0' dans le fichier.
    //      Ce n'est pas une obligation, mais cela peut facilier le code
    //      de la fonction litChaine
    // rq : cf. fonction litChaine pour des explications supplémentaires

    FILE* fd = fopen(nomFichier, "w");
    int lenght = strlen(s);
    fwrite(&lenght, sizeof(int), 1, fd);
    fwrite(s, sizeof(char), lenght, fd);
    fclose(fd);
}

void litChaine(const char *nomFichier, char *s)
{
    // todo
    // rq : la chaîne doit être lue en une seule fois (un seul fread, enfin
    //      deux pour être exact).
    //      Cela implique qu'on doit connaître sa taille avant la lecture.
    //      Il pourrait donc être intéressant d'avoir une information avant la chaîne
    //      proprement dite (ce qui fait que l'on a deux fread !), cette
    //      information étant écrite par ecritChaine.
    FILE* fd = fopen(nomFichier, "r");
    int lenght;
    fread(&lenght, sizeof(int), 1, fd);
    fread(s, sizeof(char), lenght, fd);

}

int main(void)
{
    // note : on ne gère pas ici la mémoire, ce n'est pas le but de l'exercice
    char original[1000] = "Bonjour monde !";
    char copie[1000];
    
    // todo (cf. spoiler ci-dessous)
    ecritChaine("testc.txt", original);
    litChaine("testc.txt", copie);
    printf("%s\n", original);
    printf("%s\n", copie);
    
    return EXIT_SUCCESS;
}



/*
  SPOITLER du main
      
    ecritChaine("exoC_test", original);
    litChaine("exoC_test", copie);
    
    if (strcmp(original, copie) == 0)
        printf("Tout est ok, les deux chaînes sont identiques\n");
    else
        printf("PB ! Les deux chaînes diffèrent\n");
*/
