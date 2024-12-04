#include <stdio.h>

int prime(int n) {
    if(n == 0 || n == 1)
        return 0;
        
    for(int i=2;i <= (n/2);i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    printf("Enter an integer: ");
    int intValue;
    scanf("%d", &intValue);

    if(prime(intValue)) {
        printf("The given integer %d is a prime number.\n", intValue);
    }
    else {
        printf("Ther given integer %d is not a prime number.\n", intValue);
    }

    return 0;
}