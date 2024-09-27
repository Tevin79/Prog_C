#include <stdio.h>
#include <stdlib.h>

// définir ici une variable non static
int a = 0;
// définir ici une variable static
static int b = 1;

void f(void)
{
    // définir ici une variable static
    int c = 2;
    // définir ici une variable non static
    static int d = 3;

    // afficher les deux variables
    printf("c : %d\nd : %d\n", c, d);
}

int main(void)
{
    // définir ici une variable non static
    int e = 4;

    // afficher les 3 variables visibles du main
    f();
    printf("a : %d\n", a);
    printf("b : %d\n", b);
    printf("e : %d\n", e);
    
    return EXIT_SUCCESS;
}
