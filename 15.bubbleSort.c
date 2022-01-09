// void bubbleSort(int array[], int size)

#include <stdio.h>

#define MAXITEM 10

void bubbleSort(int array[], int size) {
    for ( int i = size - 1; i > 0; i-- ) {
        for ( int j = i - 1; j >= 0; j-- ) {
            if ( array[i] < array[j] ) {
                int buffer = array[j];
                
                array[j] = array[i];
                array[i] = buffer;
            }
        }
    }
}

int main() {
    int array[MAXITEM] = {1, 2, 4, 4, 5, 6, 7, 6, 2, 3};
    
    bubbleSort(array, MAXITEM);
    for ( int i = 0; i < MAXITEM; i++ ) {
        printf("%d\n", array[i]);
    }

    return 0;
}