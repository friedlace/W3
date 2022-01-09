// В файле task.in дана последовательность символов – нулей и единиц.
// Вывести в task.out минимально необходимое число обменов пар значений для упорядочивания последовательности по неубыванию.

// Пример ввода
// 1101
// Пример вывода
// 1
// Пояснение
// Необходимо обменять ноль с первой единицей.

#include <stdio.h>

int main() {
    int symbol;
    int countOfZeros = 0;
    int countOfExchanges = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( ; fscanf(in, "%1d", &symbol) == 1; ) {
        if ( symbol == 0 ) {
            countOfZeros += 1;
        }
    }
    
    rewind(in);
    for ( int i = 0; i < countOfZeros; i++ ) {
        fscanf(in, "%1d", &symbol);
        if ( symbol != 0 ) {
            countOfExchanges += 1;
        }
    }
    fclose(in);
    
    fprintf(out, "%d\n", countOfExchanges);
    fclose(out);
    
    return 0;
}
