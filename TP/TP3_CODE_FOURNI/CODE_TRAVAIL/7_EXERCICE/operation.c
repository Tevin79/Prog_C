#include "operation.h"

int count = 0;
int dummy = 14;

int plus(int a, int b){
    count++;
    return a+b;
}
int moins(int a, int b){
    count++;
    return a-b;
}
int getNbOperations(void){
    return count;
}
