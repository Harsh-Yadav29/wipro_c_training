#include <stdio.h>

void printFiboSeries(int firstValue, int secondValue, int numberOfTerms) {
    if(numberOfTerms == 0) {
        return;
    }

    int nextValue = firstValue + secondValue;
    printf("%d ", nextValue);

    printFiboSeries(secondValue, nextValue, numberOfTerms - 1);
}