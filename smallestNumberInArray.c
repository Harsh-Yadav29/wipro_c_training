#include <stdio.h>
#include <stdlib.h>

void findSmallest(int* arr, int sizeOfArr, int* smallest) {
    if(sizeOfArr == 1) {
        if(arr[0] < *smallest) {
            *smallest = arr[0];
        }   
        return;
    }

    if(arr[sizeOfArr - 1] < *smallest) {
        *smallest = arr[sizeOfArr - 1];
    }

    findSmallest(arr, sizeOfArr - 1, smallest);
}

int smallestNumberInArray(int* arr, int sizeOfArray) {
    if(sizeOfArray == 1) {
        return arr[0];
    }

    int smallest = arr[0];
    findSmallest(arr, sizeOfArray, &smallest);
    return smallest;
}

int main(int argCount, char* argsValue[]) {
    int inputValue = atoi(argsValue[1]);
    int array[50] = {0};

    printf("Enter %d numbers:\n", inputValue);
    for(int i = 0; i < inputValue; i++) {
        scanf("%d", &array[i]);
    }

    int smallestNumber = smallestNumberInArray(array, inputValue);
    printf("The smallest number in the array is = %d\n", smallestNumber);
}