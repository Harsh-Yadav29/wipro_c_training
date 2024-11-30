#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("The character is an alphabet.\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("The character is a digit.\n");
    }
    else {
        printf("The character is a symbol.\n");
    }
    
    return 0;
}