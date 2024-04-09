#include <stdio.h>
#include <string.h>

struct
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
} typedef compu;

void main()
{
    char tipos[6][10] = {'Intel', 'AMD', 'Celeron', 'Athlon', 'Core', 'Pentium'};
    compu computadora[5];

    for (int i = 0; i < 5; i++)
    {
        computadora[i].velocidad = 1 + rand() % 3;
        computadora[i].anio = 2015 + rand() % 2023;
        computadora[i].cantidad = 1 + rand() % 8;
        int k = rand()%5;
        int *auxPunt = tipos + k;
        computadora->tipo_cpu = auxPunt;
        
    }
}
