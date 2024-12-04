#include "createArray.h"
#include "swappingHalves.h"
#include "printArray.h"

int main() {
    int arraySize;
    printf("Enter the array size:");
    scanf("%d", &arraySize);

    int* array = arrayCreate(arraySize);
    swapFirstHalfWithSecond(array, arraySize);
    printArray(array, arraySize);
}