#include <stdio.h>
// header untuk defaul function sleep
#include <windows.h>
// header yang digunakan pada linux / mac
// #include <unistd.h>

int main()
{
    // For Loop adalah perulangan yang dapat mengulang baris kode hingga mencapai kondisi tertentu
    // Rumus: for(inisialisasi; kondisi; pembaruan kondisi)

    // i++ digunakan untuk menambahkan satu nilai di setiap perulangan
    // i-- digunakan untuk mengurangi satu nilai di setiap perulangan
    // dapat dimodifikasi juga seperti i+=2 atau i-=2 untuk menambahkan ataupun mengurangi sebanyak 2 atau nilai lain setelah perulangan
    for (int i = 10; i >= 1; i--)
    {
        // Digunakan untuk mengatur output yang keluar di setiap perulangan keluar tiap 1 detik
        // dalam satuan ms (milisecond)
        Sleep(1000);
        printf("%d\n", i);
    }

    print("SELAMAT!");
    return 0;
}