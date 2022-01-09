// Написать функцию:
// void arrayShift(int array[], int size, int shift)
// Реализовать циклический сдвиг массива на shift элементов вправо. 
// Максимизировать производительность при оптимальном использовании памяти.
// Требуемая сложность: O(N)

#include <stdio.h>

#define MAXITEM 11

void arrayShift(int array[], int size, int shift) {
    int temp;
    
    if ( shift == 0 ) {
        return;
    }
    
    if ( shift < 0 ) {
        shift = size + shift % size;
    } else {
        shift = shift % size;
    }
    
    temp = size - shift;
    if ( temp > shift ) {
        int tempArray[shift];
        
        for ( int i = temp, j = 0; i < size; i++, j++ ) {
            tempArray[j] = array[i];
        }
        
        for ( int i = size - 1, j = temp - 1; i >= shift; i--, j-- ) {
            array[i] = array[j];
        }
        
        for ( int i = 0; i < shift; i++ ) {
            array[i] = tempArray[i];
        }
    } else {
        int tempArray[temp];
        
        for ( int i = temp - 1; i >= 0; i-- ) {
            tempArray[i] = array[i];
        }
        
        for ( int i = 0, j = temp; i < shift; i++, j++ ) {
            array[i] = array[j];
        }
        
        for ( int i = size - 1, j = temp - 1; j >= 0; i--, j-- ) {
            array[i] = tempArray[j];
        }
    }
}


int main() {
    int array[MAXITEM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    
    arrayShift(array, MAXITEM, -4);
    for (int i = 0; i < MAXITEM; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}