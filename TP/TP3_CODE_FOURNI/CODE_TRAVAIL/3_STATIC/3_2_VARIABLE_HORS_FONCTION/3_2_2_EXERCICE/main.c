#include <stdio.h>
#include "variables.c"

int main(void){
    extern int g;
    extern int s;

    printf("g : %d\ns : %d\n", g, s);

    return 0;
}

// l'acces a g echoue
