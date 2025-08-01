#include <stdio.h>
#include <string.h>

// int penjumlahan(int angka1, int angka2, int hasil)
// {
//     hasil = angka1 + angka2;
//     printf("Hasil Penjumlahannya: %.2f", hasil);
// }

// Untuk membuat function yang tidak mengembalikan nilai, maka menggunakan void
// Parameter harus diberikan tipe datanya, namanya boleh berbeda dengan variabel namun tipe data dan urutannya harus sama.
void perkenalan(char name[], int umur)
{
    printf("\nHalo %s!\n", name);
    printf("Anda Berumur %d tahun.\n", umur);
}

int main()
{
    // Function adalah kumpulan baris kode yang dapat digunakan kembali
    // Argument digunakan untuk memanggil fungsi dan terhubung ke dalamnya
    // Parameter adalah nilai di dalam fungsi yang dipanggil memlali argumet

    // float hasil = 0.0f;
    // float angka1 = 0.0f;
    // float angka2 = 0.0f;

    // printf("Ketikkan Angka Pertama: ");
    // scanf("%f", &angka1);

    // printf("Ketikkan Angka Kedua: ");
    // scanf("%f", &angka2);

    // penjumlahan(angka1, angka2, hasil);

    char nama[50] = "";
    int umur = 0;

    printf("Ketikkan Nama Anda: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strlen(nama) - 1] = '\0';

    printf("Ketikkan Umur Anda: ");
    scanf("%d", &umur);

    perkenalan(nama, umur);
    perkenalan(nama, umur);
    perkenalan(nama, umur);

    return 0;
}