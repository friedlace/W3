// void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

// Поворот матрицы на 180 градусов по часовой стрелке.

void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, sourceRow = size - 1 - row, targetRow = size - 1; col < size; col++, targetRow-- ) {
            target[targetRow][sourceRow] = source[col][row];
        }
    }
}
