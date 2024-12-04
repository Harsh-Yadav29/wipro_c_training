#include "createArray.h"
#include "linearSrch.h"

int main() {
    int arraySize, elementToSearch;
    printf("Enter the array size:");
    scanf("%d", &arraySize);

    int* array = arrayCreate(arraySize);
    printf("Enter the element to be searched:");
    scanf("%d", &elementToSearch);

    int index = linearSearch(array, arraySize, elementToSearch);
    if(index != -1) {
        printf("The element is found at index %d\n", index);
    }
    else {
        printf("The element is not found in the array.\n");
    }
}