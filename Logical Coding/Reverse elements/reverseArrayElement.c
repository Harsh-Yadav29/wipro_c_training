// 2. Reverse the elements of an Array using a while loop.

#include <stdio.h>
#include <stdlib.h>
#include "printArray.h"
#include "reverseFunction.h"

int* arrayCreate(int arraySize) {
    int* array = (int* ) malloc(sizeof(int) * arraySize);

    printf("Enter the %d array elements: ", arraySize);
    for(int i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }

    return array;
}

int main() {
    int arraySize;
    printf("Enter the array size:");
    scanf("%d", &arraySize);

    int* array = arrayCreate(arraySize);

    reverseArrayElements(array, arraySize);
    printf("The reversed array Elements are: ");
    printArray(array, arraySize);
}