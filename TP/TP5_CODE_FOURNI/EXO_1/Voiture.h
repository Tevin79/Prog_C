#ifndef VOITURE_H
#define VOITURE_H

typedef struct Voiture {
    char* brand;
    int year;
    int km;
    char* immat[];
} Voiture;

Voiture *createCar(char* brand, int year, int km, char* immat);
Voiture *copyCar(Voiture v);
Voiture *copyCarFile(char *fileName);

#endif
