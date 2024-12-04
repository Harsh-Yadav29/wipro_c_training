#include "createArray.h"
#include "swapConsecutive.h"
#include "printArray.h"

int main() {
    int arraySize;
    printf("Enter the array size:");
    scanf("%d", &arraySize);

    int* array = arrayCreate(arraySize);
    swapConsecutiveEle(array, arraySize);
    printArray(array, arraySize);
}