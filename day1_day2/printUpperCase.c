#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    printf("%c", (char) (ch - 32));
    
    return 0;
}