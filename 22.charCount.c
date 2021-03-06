// В файле task.in задана последовательность символов.
// Вывести в task.out количество вхождений латинских букв, которые встречаются в последовательности.
// Большие буквы считать как маленькие.
// Пример ввода
// Hello!
// Пример вывода
// e 1
// h 1
// l 2
// o 1

#include <stdio.h>

#define ALPHABET 26

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[ALPHABET];
    char character;
    
    for ( int i = 'a'; i <= 'z'; i++ ) {
        array[i] = 0;
    }
    for ( ; fscanf(in, "%c", &character) == 1; ) {
        for ( int i = 'a'; i <= 'z'; i++ ) {
            if ( character == i || character == i - 32 ) {
                array[i] += 1;
            }
        }
    }
    for ( int i = 'a'; i <= 'z'; i++ ) {
        if ( array[i] > 0 ) {
            fprintf(out, "%c %d\n", i, array[i]);
        }
    }
    fclose(in);
    fclose(out);
    
    return 0;
}
