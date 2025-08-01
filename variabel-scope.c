#include <stdio.h>

// Global Scope adalah variabel yang dapat diakses maupun digunakan dari mana saja, sehingga proses debug akan menjadi jauh lebih sulit.
// int result = 0;

int penjumlahan(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    // Variable Scope adalah tempat dimana sebuah variabel dapat diakses dan digunakan
    // Variabel dapat memiliki nama yang sama asalkan berada di scope yang berbeda {}

    int a = 10;
    int b = 10;
    int result = a + b;
    printf("%d", result);
    return 0;
}