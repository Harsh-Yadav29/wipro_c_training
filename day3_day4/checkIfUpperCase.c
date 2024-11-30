#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    if(ch >= 'A' && ch <= 'Z') {
        printf("%c is upper case alphabet.", ch);
    }
    
    return 0;
}