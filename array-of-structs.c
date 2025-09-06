#include <stdio.h>

typedef struct
{
    char nama_buah[50];
    int harga_buah;
    char warna_buah[20];
} Buah;

int main()
{
    // Array pada sebuah struct adalah mengelompokkan seluruh elemen yang menggunakan struct ke dalam sebuah array agar lebih rapi

    Buah buah_buahan[] = {{"Apel", 5000, "Merah/Hijau"},
                          {"Pisang", 3000, "Kuning"},
                          {"Semangka", 10000, "Merah"}};

    for (int i = 0; i < 3; i++)
    {
        printf("Nama Buah: %s\nHarga Buah: Rp.%.3d\nWarna Buah: %s\n", buah_buahan[i].nama_buah, buah_buahan[i].harga_buah, buah_buahan[i].warna_buah);
    }

    return 0;
}