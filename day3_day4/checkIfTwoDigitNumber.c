#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if(num > 9 && num < 100) {
        printf("The number is a two digit number.\n");
    }
    
    return 0;
}