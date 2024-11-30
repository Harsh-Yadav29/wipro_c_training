#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char* argsValue[]) {
    int rowValue = atoi(argsValue[1]), columnValue = atoi(argsValue[2]);

    int array1[20][20] = {0}, array2[20][20] = {0};

    printf("Enter values for array1:\n");
    for(int i = 0; i < rowValue; i++) {
        for(int j = 0; j < columnValue; j++) {
            printf("%d) ", (rowValue * i) + j + 1);
            scanf("%d ", &array1[i][j]);
        }
    }

    printf("\nEnter values for array2:\n");
    for(int i = 0; i < rowValue; i++) {
        for(int j = 0; j < columnValue; j++) {
            printf("%d) ", (rowValue * i) + j + 1);
            scanf("%d ", &array2[i][j]);
        }
    }

    printf("The sum of array1 and array2 is:\n");
    for(int i = 0; i < rowValue; i++) {
        for(int j = 0; j < columnValue; j++) {
            printf("%d) ", (rowValue * i) + j + 1);
            printf("%.5d ", array1[i][j] + array2[i][j]);
        }
        printf("\n");
    }
}