#include <stdlib.h>
#include <stdio.h>

int* arrayCreate(int arraySize) {
    int* array = (int* ) malloc(sizeof(int) * arraySize);

    printf("Enter the %d array elements: ", arraySize);
    for(int i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }

    return array;
}