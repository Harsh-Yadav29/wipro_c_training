#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char* argsValue[]) {
    int inputValue = atoi(argsValue[1]);

    for(int i = 0; i < inputValue; i++) {
        if(i == 0 || i == inputValue - 1) {
            for(int j = 0; j < inputValue; j++) {
                printf("* ");
            }
            printf("\n");
        }
        else {
            printf("* ");
            for(int j = 0; j < inputValue-2; j++) {
                printf("  ");
            }
            printf("*\n");
        }
    }
}