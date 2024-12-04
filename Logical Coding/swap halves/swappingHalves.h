void swapFirstHalfWithSecond(int* array, int arraySize) {
    int mid = arraySize / 2;
    int flip = 0;
    if(arraySize % 2 == 1) {
        flip = 1;
    }

    for(int i = 0; i < mid; i++) {
        int temp = array[i];
        array[i] = array[i + mid + flip];
        array[i + mid + flip] = temp;
    }
}