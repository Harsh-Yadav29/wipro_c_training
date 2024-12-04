// 1. Find sum of the elements of an Array using a recursive function.

#include <stdio.h>
#include <stdlib.h>

unsigned long long findSum(int* array, int arraySize) {
    if(arraySize == 1) {
        return array[0];
    }

    return array[arraySize - 1] + findSum(array, arraySize - 1);
}

int main() {
    int arraySize;
    printf("Enter the array size:");
    scanf("%d", &arraySize);

    int* array = (int* ) malloc(sizeof(int) * arraySize);

    printf("Enter the %d array elements: ", arraySize);
    for(int i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }

    unsigned long long Sum = findSum(array, arraySize);
    printf("The sum of the array elements is: %llu", Sum);
}