// int partition(int array[], int start, int end)

// В качестве опорного элемента брать среднее арифметическое
// между start и end с округлением вниз.

#include <stdio.h>
   
#define MAXITEM 20

int partition(int array[], int start, int end) {
    int pivotIndex = (start + end) / 2;
    int pivot = array[pivotIndex];
    
    array[pivotIndex] = array[end];
    array[end] = pivot;
    pivotIndex = end;
    for ( int i = start, minIndex = start, maxIndex = start; minIndex < end && maxIndex < end; i++ ) {
        int buffer;
        
        for ( maxIndex = i; array[maxIndex] < pivot; maxIndex++ );
        for ( minIndex = maxIndex; array[minIndex] > pivot; minIndex++ );
        buffer = array[minIndex];
        array[minIndex] = array[maxIndex];
        array[maxIndex] = buffer;
        if ( minIndex == end ) {
            pivotIndex = maxIndex;
        }
        if ( maxIndex == end ) {
            pivotIndex = minIndex;
        }
    }
    return pivotIndex;
}

void quickSort(int array[], int lo, int hi) {
    int pivot = partition(array, lo, hi);

    if ( lo < pivot - 1 ) {
        quickSort(array, lo, pivot-1);
    }
    if ( hi > pivot + 1 ) {
        quickSort(array, pivot+1, hi);
    }
}

int main() {
    int array[MAXITEM] = {3, 3, 13, 14, 15, 16, 17, 17, 18, 19, 19, 20, 1, 2, 2, 4, 5, 6, 7, 3};
    
    quickSort(array, 0, 19);
    for ( int i = 0; i < MAXITEM; i++ ) {
        printf("%d\n", array[i]);
    }

    return 0;
}
