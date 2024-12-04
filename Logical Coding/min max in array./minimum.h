double minValue(double* array, int arraySize) {
    double mini = array[0];
    for(int i = 1; i < arraySize; i++) {
        if(array[i] < mini) {
            mini = array[i];
        }
    }
    return mini;
}