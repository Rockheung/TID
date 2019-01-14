#include <stdio.h>

void main() {
    char c, c_array[100];
    int i, i_array[100];
    short s, s_array[100];
    float f, f_array[100];
    long l, l_array[100];

    printf("\n char c: %d \t char c_array: %4d", sizeof(c), sizeof(c_array));
    printf("\n char i: %d \t char i_array: %4d", sizeof(i), sizeof(i_array));
    printf("\n char s: %d \t char s_array: %4d", sizeof(s), sizeof(s_array));
    printf("\n char f: %d \t char f_array: %4d", sizeof(f), sizeof(f_array));
    printf("\n char l: %d \t char l_array: %4d", sizeof(l), sizeof(l_array));

    getchar();
}
