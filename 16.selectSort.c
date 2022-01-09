// void selectSort(int array[], int size)

#include <stdio.h>

#define MAXITEM 10

void selectSort(int array[], int size) {
    for ( int i = size - 1; i > 0; i-- ) {
        int max = array[i];
        int indexOfMax = i;
        
        for ( int j = i - 1; j >= 0; j-- ) {
            if ( array[j] > max ) {
                max = array[j];
                indexOfMax = j;
            }
        }
        if ( indexOfMax != i ) {
            array[indexOfMax] = array[i];
            array[i] = max;
        }
    }
}

int main() {
    int array[MAXITEM] = {1, 2, 4, 4, 5, 6, 7, 6, 2, 3};
    
    selectSort(array, MAXITEM);
    for ( int i = 0; i < MAXITEM; i++ ) {
        printf("%d\n", array[i]);
    }

    return 0;
}
