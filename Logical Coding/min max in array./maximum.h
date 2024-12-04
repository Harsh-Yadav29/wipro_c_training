double maxValue(double* array, int arraySize) {
    double maxi = array[0];
    for(int i = 1; i < arraySize; i++) {
        if(array[i] > maxi) {
            maxi = array[i];
        }
    }
    return maxi;
}