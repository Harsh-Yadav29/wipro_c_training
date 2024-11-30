#include "factorial.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char* argsValue[]) {
    int inputValue = atoi(argsValue[1]);
    unsigned long long int factorial = findFactorial(inputValue);
    printf("Factorial of %d is = %d\n", inputValue, factorial);
}