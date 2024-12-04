void swapConsecutiveEle(int* array, int arraySize) {
    for(int i = 1; i < arraySize; i = i + 2) {
        int temp = array[i];
        array[i] = array[i - 1];
        array[i - 1] = temp;
    }
}