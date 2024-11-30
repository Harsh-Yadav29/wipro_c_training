#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int inputInteger) {
    if(inputInteger < 10) {
        return inputInteger;
    }

    return (inputInteger % 10) + sumOfDigits(inputInteger / 10);
}

int main(int argCount, char* argsValue[]) {
    int inputValue = atoi(argsValue[1]);
    int digitsSum = sumOfDigits(inputValue);
    printf("Sum of digits of the input value is = %d\n", digitsSum);
}