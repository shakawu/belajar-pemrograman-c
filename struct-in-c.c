#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Struct adalah custom container yang dapat menampung informasi yang berkaitan terhadap suatu hal, ini mirip seperti objek pada bahasa lain atau class pada javascript / python.

// struct Mahasiswa
// {
//     char nama[50];
//     int umur;
//     float ipk;
//     bool mahasiswaBerprestasi;
// };

// Kita juga dapat menggunakan typedef pada struct

typedef struct
{
    char nama[50];
    int umur;
    float ipk;
    bool mahasiswaBerprestasi;
} Mahasiswa;

void statusMahasiswa(Mahasiswa mahasiswa);

int main()
{
    // Apabila nilai pada struct tidak berisi apapun, output yang dikeluarkan akan random (acak), oleh karena itu apabila ingin mengosongkan nilai struct disarankan untuk mengisi nilai default ({0}).
    // struct Mahasiswa mahasiswa1 = {};

    // struct Mahasiswa mahasiswa1 = {"Shafwan Khairullah", 18, 4.0, true};

    // Ketika menggunakan typedef, kita tidak perlu mendifinisikan tipe data lagi :D
    Mahasiswa mahasiswa1 = {"Shafwan Khairullah", 18, 4.0, true};
    Mahasiswa mahasiswa2 = {"Arima Kana", 18, 3.98, true};

    statusMahasiswa(mahasiswa1);
    statusMahasiswa(mahasiswa2);

    return 0;
}

void statusMahasiswa(Mahasiswa mahasiswa)
{
    // Untuk mengakses nilai pada struct, harus menggunakan nama_variabel.nama_nilai_pada_struct
    printf("Nama                           : %s\n", mahasiswa.nama);
    printf("Umur                           : %d\n", mahasiswa.umur);
    printf("IPK                            : %.2f\n", mahasiswa.ipk);
    printf("Merupakan Mahasiswa Berprestasi? %s\n", (mahasiswa.mahasiswaBerprestasi) ? "Iya" : "Tidak");
    printf("\n");
}