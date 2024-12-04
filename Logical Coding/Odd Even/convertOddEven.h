void convertOddEven(int* array, int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        if(array[i] % 2 == 0) {
            array[i] -= 1;
        }
        else {
            array[i] += 1;
        }
    }
}
