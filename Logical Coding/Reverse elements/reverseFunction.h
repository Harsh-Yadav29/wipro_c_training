void reverseArrayElements(int* array, int arraySize) {
    int startIndex = 0, endIndex = arraySize - 1;

    while(startIndex < endIndex) {
        int temp = array[startIndex];
        array[startIndex] = array[endIndex];
        array[endIndex] = temp;
        startIndex++;
        endIndex--;
    }
}