#include <stdio.h>

#define N 20

void main(){
    int i = 0;
    double vt[N];

    double *puntVT;

    puntVT = vt;

    while ( i != N)
    {
        *puntVT = 1 + rand()%100;
        puntVT++;
        i++;
    }
    
    
}