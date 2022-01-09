// Написать функцию
// void arrayMerge(int target[], int src1[], int len1, int src2[], int len2)

// Массивы src1[] и src2[] (длиной len1 и len2 соответственно) отсортированы по неубыванию.
// Произвести слияние этих массивов в массив target[], также отсортированный по неубыванию.
// В случае равенства предпочтение отдаётся элементам из первого массива.
// Требуемая сложность: O(N)

#include <stdio.h>

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int i = 0;
    int j = 0;
    int k = 0;
    
    for ( ; i < len1 && j < len2; k++ ) {
        if ( src1[i] <= src2[j] ) {
            target[k] = src1[i];
            i += 1;
        } else {
            target[k] = src2[j];
            j += 1;
        }
    }
    for ( ; i < len1; i++, k++ ) {
        target[k] = src1[i];
    }
    for ( ; j < len2; j++, k++ ) {
        target[k] = src2[j];
    }
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int main() {
    int src1[6] = {1, 2, 5, 5, 6, 7};
    int src2[7] = {1, 3, 3, 4, 6, 7, 8};
    int target[13];

    arrayMerge(target, src1, 6, src2, 7);
    arrayPrint(target, 13);
    // 1 1 2 3 3 4 5 5 6 6 7 7 8

    return 0;
}