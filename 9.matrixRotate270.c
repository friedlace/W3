// void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

// Поворот матрицы на 270 градусов по часовой стрелке.

void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, new = size - 1; col < size; col++, new-- ) {
            target[row][new] = source[col][row];
        }
    }
}
