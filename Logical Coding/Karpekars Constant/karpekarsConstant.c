#include <stdio.h>
#include <stdlib.h>

void sort_digits_asc(int *digits) {
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (digits[i] > digits[j]) {
                temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }
}

void sort_digits_desc(int *digits) {
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (digits[i] < digits[j]) {
                temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }
}

void extract_digits(int num, int *digits) {
    for (int i = 3; i >= 0; i--) {
        digits[i] = num % 10;  
        num /= 10;  
    }
}

int digits_to_number(int *digits) {
    int num = 0;
    for (int i = 0; i < 4; i++) {
        num = num * 10 + digits[i];
    }
    return num;
}

void kaprekar_iteration(int num) {
    int count = 0;
    int digits[4];

    while (num != 6174) {
        extract_digits(num, digits);

        sort_digits_asc(digits);
        int asc_num = digits_to_number(digits);

        sort_digits_desc(digits);
        int desc_num = digits_to_number(digits);

        num = desc_num - asc_num;

        printf("Iteration %d: %04d - %04d = %04d\n", count + 1, desc_num, asc_num, num);
        count++;
    }

    printf("\nNumber of iterations to reach 6174: %d\n", count);
}

int main() {
    int starting_num;

    printf("Enter a 4-digit number (at least two digits must be different): ");
    scanf("%d", &starting_num);

    kaprekar_iteration(starting_num);

    return 0;
}