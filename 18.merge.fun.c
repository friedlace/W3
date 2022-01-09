// void merge(int array[], int lo, int mid, int hi)
// Слияние двух сортированных подмассивов в один отсортированный подмассив.
// Первый подмассив от lo до mid не включая mid
// Второй подмассив от mid до hi не включая hi

#include <stdio.h>

void merge(int array[], int lo, int mid, int hi) {
    int buffer[hi];
    int i = lo;
    int j = mid;
    int k = lo;
    
    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] < array[j] ) {
            buffer[k] = array[i];
            i += 1;
        } else {
            buffer[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        buffer[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        buffer[k] = array[j];
    }
    
    for ( int i = lo; i < hi; i++ ) {
        array[i] = buffer[i];
    }
}

#define MAXITEM 20

int main() {
    int array[MAXITEM] = {3, 3, 13, 14, 15, 16, 17, 17, 18, 19, 19, 20, 1, 2, 2, 4, 5, 6, 7, 8};
    
    merge(array, 2, 12, 19);
    for ( int i = 0; i < MAXITEM; i++ ) {
        printf("%d\n", array[i]);
    }

    return 0;
}
