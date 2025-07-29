#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    // If statement adalah baris kode yang akan menjalankan blok kode apabila sesuatu bernilai benar dan akan menjalankan blok kode lain apabila ada kondisi tertentu atau lainnya.

    // Penggunaan If-Statement dalam memvalidasi sebuah variabel
    // int umur = 0;

    // printf("Ketikkan Umur Anda: ");
    // scanf("%d", &umur);

    // else if dapat digunakan apabila perlu menambahkan kondisi lainnya
    // perhatikan urutan pada if statement yah
    // if (umur >= 50)
    // {
    //     printf("Anda Sudah Tua!");
    // }
    // else if (umur >= 18)
    // {
    //     printf("Anda Sudah Dewasa!");
    // }
    // else
    // {
    //     printf("Anda Belum Dewasa!");
    // }

    // return 0;

    // Penggunaan If-Statement pada variabel yang memiliki nilai boolean
    // bool validasiMahasiswa = false;

    // if (validasiMahasiswa)
    // {
    //     printf("Kamu Terdaftar Sebagai Mahasiswa!");
    // }
    // else
    // {
    //     printf("Kamu Tidak Terdaftar Sebagai Mahasiswa!");
    // }

    // Penggunaan If-Statemen dalam validasi user input

    char nama[50] = "";

    printf("Ketikkan Nama Anda: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strlen(nama) - 1] = '\0';

    if (strlen(nama) == 0)
    {
        printf("Kamu Belum Mengetikkan Namamu!");
    }
    else
    {
        printf("Halo %s!", nama);
    }
}