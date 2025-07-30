#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Nested If Statement adalah if statement di dalam if statement

    float harga_barang = 100.000;
    bool maba = false;
    bool senior = false;

    if (maba)
    {
        if (senior)
        {
            printf("Anda Mendapatkan Diskon Mahasiswa Baru Sebesar 10%%\n");
            printf("Anda Mendapatkan Diskon Mahasiswa Senior Sebesar 20%%\n");
            harga_barang *= 0.7;
        }
        else
        {
            printf("Anda Mendapatkan Diskon Mahasiswa Baru Sebesar 10%%\n");
            harga_barang *= 0.9;
        }
    }
    else
    {
        printf("Anda Mendapatkan Diskon Mahasiswa Senior Sebesar 20%%\n");
        harga_barang *= 0.8;
    }

    printf("Harga Tiketnya Adalah Rp.%.3f\n", harga_barang);

    return 0;
}