int linearSearch(int* array, int arraySize, int searchElement) {
    for(int i = 0; i < arraySize; i++) {
        if(array[i] == searchElement) {
            return i;
        }
    }
    return -1;
}