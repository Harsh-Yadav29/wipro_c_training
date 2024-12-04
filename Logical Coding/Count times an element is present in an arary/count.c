// 7. Count the times an element is present in an Array

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arraySize, count = 0, element;
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);

    int* array = (int* ) malloc(sizeof(int) * arraySize);

    printf("Enter the %d array elements: ", arraySize);
    for(int i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element whose count you want to know: ");
    scanf("%d", &element);

    for(int i = 0; i < arraySize; i++) {
        if(array[i] == element) {
            count++;
        }
    }

    printf("The count of the element %d is = %d\n", element, count);
}