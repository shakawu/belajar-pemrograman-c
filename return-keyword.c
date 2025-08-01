#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Untuk membuat fungsi yang dapat mengembalikan nilai, tipe data fungsi tersebut harus sesuai dengan tipe data yang dikembalikan.
int akarKuadrat(int angka)
{
    // return berfungsi untuk mengembalikan value ke tempat dia dipanggil
    return sqrt(angka);
}

int main()
{
    int a = akarKuadrat(25);
    int b = akarKuadrat(64);
    int c = akarKuadrat(100);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}