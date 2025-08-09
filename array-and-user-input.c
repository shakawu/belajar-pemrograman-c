#include <stdio.h>

int main()
{
    // Cara memasukkan user input ke dalam array

    // Membuat array yang menyimpan 5 elemen/value angka desimal di dalamnya. "{0}" digunakan agar menjadi default value awal, agar ketika kita tampilkan hanya {}, maka yang ditampilkan adalah garbage value.
    int nilai[5] = {0};

    // for loop digunakan untuk menginisialisasi scanf sebanyak jumlah elemen pada array
    for (int i = 0; i < 5; i++)
    {
        printf("Ketikkan Nilai: ");
        scanf("%d", &nilai[i]);
    }

    // Menampilkan array yang telah user isi
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", nilai[i]);
    }

    return 0;
}