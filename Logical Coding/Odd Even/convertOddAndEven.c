// 10. Convert the Odd elements in an array to Even numbers by adding one and Convert the Even elements into Odd by subtracting 1.

#include "createArray.h"
#include "convertOddEven.h"
#include "printArray.h"

int main() {
    int arraySize;
    printf("Enter the array size:");
    scanf("%d", &arraySize);

    int* array = arrayCreate(arraySize);
    convertOddEven(array, arraySize);
    printArray(array, arraySize);
}