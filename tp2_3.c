#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

void main()
{
    int i, j;
    float mt[N][M];
    float *punteroMt = mt;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *punteroMt = 1 + rand()%100;
            printf(" %lf ", *punteroMt);
            punteroMt++;
        }
        printf("\n");
    }
}