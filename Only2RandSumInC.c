#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    srand(time(NULL)); 
    int graficoResultados[41];
    int k = 0;
    for(k=0; k<=40; k++){
        graficoResultados[k] = 0;
    }
    
    int min=0;
    int max=20;
    int numeroA = rand() % (max - min + 1 ) + min;
    int numeroB = rand() % (max - min + 1 ) + min;
    int soma = 0;

    for(k=0; k<1000000; k++){
        numeroA = rand() % (max - min + 1 ) + min;
        numeroB = rand() % (max - min + 1 ) + min;
        soma = numeroA + numeroB;
        graficoResultados[soma]++;
    }
    for(k=0; k<=40; k++){
        printf("%d = %d, ",k,graficoResultados[k]);
    }

    return 0;
}

