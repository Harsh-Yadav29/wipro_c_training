#include "createArray.h"
#include "duplicate.h"
#include "printArray.h"

int main() {
    int arraySize;
    printf("Enter the array size:");
    scanf("%d", &arraySize);

    int* array = arrayCreate(arraySize);
    duplicateRemoval(array, arraySize);
    printArray(array, arraySize);
}