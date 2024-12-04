#include <stdio.h>
#include <stdlib.h>
#include "minimum.h"
#include "maximum.h"

int main() {
    int N;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);
    
    double* array = (double* ) malloc(N * sizeof(double));
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%lf", &array[i]);
    }
    
    double min = minValue(array, N);
    double max = maxValue(array, N);
    
    printf("The smallest element is: %lf\n", min);
    printf("The largest element is: %lf\n", max);
    
    return 0;
}
