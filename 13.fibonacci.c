// Вывести число Фибоначчи с заданным целым номером, по модулю не превышающим 46.
// Пример ввода
// 8
// Пример вывода
// 21

#include <stdio.h>

int main() {
    int num;
    int first = 0;
    int second = 1;
    int fibonacci = 0;
    int key = 1;
    
    scanf("%d", &num);
    
    if ( num < 0 ) {
        key = 0;
        num *= -1;
    }
    if ( num == 1 || num == 2 ) {
        fibonacci = 1;
    } else {
        for ( int i = 1; i < num; i++ ) {
            fibonacci = first + second;
            first = second;
            second = fibonacci;
        }
    }
    if ( key == 0 && num % 2 == 0 ) {
        fibonacci *= -1;
    }
    printf("%d\n", fibonacci);
    
    return 0;
}
