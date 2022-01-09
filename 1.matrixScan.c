// void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size);
// Столбец – первый индекс, строка – второй.

#include <stdio.h>

#define SIZE 5

void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            fscanf(in, "%d", &matrix[col][row]);
        }
    }
}

void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
    int last = size - 1;
    
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < last; col++ ) {
            fprintf(out, "%d ", matrix[col][row]);
        }
        fprintf(out, "%d\n", matrix[last][row]);
    }
}

int main() {
    int arr[SIZE][SIZE] = {{1, 4, 7, 6, 7}, {2, 7, 5, 8, 1}, {3, 6, 9, 6, 9}, {2, 7, 5, 8, 1}, {3, 6, 9, 6, 9}};
    FILE *read = fopen("matrixScan_task.in", "r");
    FILE *write = fopen("task.out", "w");
    
    matrixScan(read, arr, SIZE);

    fclose(read);

    matrixPrint(write, arr, SIZE);

    fclose(write);

    return 0;
}
