// void insertSort(int array[], int len)

#include <stdio.h>

#define MAXITEM 10


void insertSort(int array[], int len) {
    for ( int i = 1; i < len; i++ ) {
        int index = i;
        int current = array[i];
        
        for ( int j = i - 1; array[j] > current && j >= 0; j-- ) {
            array[j+1] = array[j];
            index = j;
        }
        if ( index != i ) {
            array[index] = current;
        }
    }
}



int main() {
    int array[MAXITEM] = {7, 6, 6, 5, 4, 4, 3, 2, 2, 1};
    
    insertSort(array, MAXITEM);
    for ( int i = 0; i < MAXITEM; i++ ) {
        printf("%d\n", array[i]);
    }

    return 0;
}
