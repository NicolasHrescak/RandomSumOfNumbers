/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int putZero( int *array, int tam ){
    for (int k=0; k<tam;k++){
        array[k] = 0;
    }
    return *array;
}

int main()
{
    srand(time(NULL)); //We need that to our function rand be more randomic
    
    int minValue;
    int maxValue;
    int numberOfSums;
    int numberOfTests;
    int value = 0;
    int k=0;
    int i=0;
    
    printf("Enter the minimum value:");
    scanf("%d",&minValue);
    printf("Enter the maximum value:");
    scanf("%d",&maxValue);
    printf("Enter the number of sums:");
    scanf("%d",&numberOfSums);
    printf("Enter the number of tests:");
    scanf("%d",&numberOfTests);
    int arrayTam = (maxValue * numberOfSums) + 1;
    int array[arrayTam];
    putZero(array,arrayTam);
    
    for(k=0; k<numberOfTests;k++ ){
        for(i=0; i<numberOfSums;i++){
            value += minValue + rand() % (maxValue - minValue + 1);
        }
        array[value] += 1;
        value = 0;
    }
    for(k=0;k<arrayTam;k++){
        printf("%d = %d\n",k, array[k]);
    }
    
    
    

    return 0;
}