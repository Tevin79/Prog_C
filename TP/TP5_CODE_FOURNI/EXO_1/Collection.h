#ifndef COLLECTION_H
#define COLLECTION_H

#include <stdbool.h>

#include "Voiture.h"

typedef struct Collection {
    Voiture** c;
    bool trie;
} Collection;

Collection *createCollection(void);
Collection *copyCollection(Collection c);
void destroyCollection(Collection *c);

#endif
