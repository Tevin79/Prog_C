#include <stdio.h>
#include <stdlib.h>

void f_correct(void){
    static int n = 3;
    n++;
    printf("%d\n", n);
}

void f_faux(void){
    static int n;
    n = 3;
    n++;
    printf("%d\n", n);
}

int main(void){
    f_correct();
    f_correct();
    f_correct();

    f_faux();
    f_faux();
    f_faux();

    return EXIT_SUCCESS;
}
