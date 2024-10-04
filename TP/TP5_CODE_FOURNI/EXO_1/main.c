#include <stdio.h>
#include <stdlib.h>

#include "Voiture.h"
#include "Collection.h"

int main(void){
    Voiture *v1 = createCar("test", 1878, 1000000, "immat1");
    Voiture *v2 = copyCar(*v1);
    Voiture *v3 = copyCarFile("file");

    Collection *c1 = createCollection();
    Collection *c2 = copyCollection(*c1);
    destroyCollection(c1);
}
