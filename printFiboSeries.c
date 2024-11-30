#include "printFiboSeries.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char* argsValue[]) {
    int inputValue = atoi(argsValue[1]);

    if(inputValue < 3) {
        printf("Invalid input value!!\n");
    }
    else {
        printf("%d %d ", 1, 2);
        printFiboSeries(1, 2, inputValue - 2);
    }
}