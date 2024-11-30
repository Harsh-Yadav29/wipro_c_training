#include <stdio.h>
#include <stdlib.h>

void takeInputArray(int array[20][20], int rowValue, int columnValue) {
    for(int i = 0; i < rowValue; i++) {
        for(int j = 0; j < columnValue; j++) {
            scanf("%d", &array[i][j]);
        }
    }
}

void transpose(int array[20][20], int rowValue, int columnValue) {
    for(int i = 0; i < rowValue; i++) {
        for(int j = i; j < columnValue; j++) {
            int temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }
}

void printTransposeArray(int array[20][20], int rowValue, int columnValue) {
    for(int i = 0; i < columnValue; i++) {
        for(int j = 0; j < rowValue; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main(int argCount, char* argsValue[]) {
    int rowValue = atoi(argsValue[1]), columnValue = atoi(argsValue[2]);

    int inputArray[20][20] = {0};

    printf("Enter values for array:\n");
    takeInputArray(inputArray, rowValue, columnValue);

    transpose(inputArray, rowValue, columnValue);
    printf("Transpose of the given array is:\n");
    printTransposeArray(inputArray, rowValue, columnValue);
}