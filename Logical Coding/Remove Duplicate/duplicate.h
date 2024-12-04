void duplicateRemoval(int* array, int arraySize) { 
    int index = 0;  
    
    for (int i = 0; i < arraySize; i++) {
        int isDuplicate = 0;
        
        for (int j = 0; j < index; j++) {
            if (array[i] == array[j]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if (!isDuplicate) {
            array[index++] = array[i];
        }
    }
    
    for (int i = index; i < arraySize; i++) {
        array[i] = 0;
    }
}