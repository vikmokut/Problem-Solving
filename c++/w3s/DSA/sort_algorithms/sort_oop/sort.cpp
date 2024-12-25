void Sorted::bubbleSort(){
    int largeValue;
    
    for (int i = 0; i < arrayLength - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < arrayLength - i; j++){
            if(arrayPtr[j] > arrayPtr[j+1]) {
                largeValue = arrayPtr[j];
                arrayPtr[j] = arrayPtr[j+1];
                arrayPtr[j+1] = largeValue;
                swapped = true;
            }
        }
        if (!swapped) break; // array is fully sorted
    }
}

void Sorted::selectionSort() {
    int leastValue;
    int leastValueIndex;

    for (int i = 0; i < (arrayLength - 1); i++) {
        // find the least value
        leastValue = arrayPtr[i];
        for (int j = i + 1; j < arrayLength; j++) {
            if (arrayPtr[j] < leastValue) {
                leastValue = arrayPtr[j];
                leastValueIndex = j;
            }
        }
        arrayPtr[leastValueIndex] = arrayPtr[i];
        arrayPtr[i] = leastValue;
    }
}

