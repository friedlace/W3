// void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

// Поворот матрицы на 90 градусов по часовой стрелке.

void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, new = size - 1 - row; col < size; col++ ) {
            target[new][col] = source[col][row];
        }
    }
}
