#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    if(ch >= 'a' && ch <= 'z') {
        printf("%c is small case alphabet.", ch);
    }
    
    return 0;
}