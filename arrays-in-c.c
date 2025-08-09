#include <stdio.h>

int main()
{
    /*
    Array adalah koleksi dengan ukuran yang pasti yang dapat menyimpan lebih dari satu nilai/element dengan tipe data yang sama
    */

    int numbers[] = {1, 2, 3, 4, 5};
    char characters[] = {'A', 'B', 'C'};
    char name[] = "Shafwan Khairullah";

    // Kita menampilkan element di dalam array, apabila kita hanya menampilkan array, maka output yang diberikan adalah berupa angka random
    // Untuk menampilkan elemnt di dalam array, dapat menggunakan indexing [] lalu urutan pada array (dimulai dari 0)
    // printf("%d", numbers[0]);

    // Untuk menampilkan seluruh element di dalam array, kita gunakan for loop
    // for loop akan mengakses element di dalam array satu per satu.
    /*
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    */

    // agar kita dapat menampilkan seluruh element di dalam array tanpa menghitungnya dapat digunakan cara berikut
    // sizeof(numbers) akan mengembalikan nilai total ukuran seluruh element dalam array dalam satuan byte (dalam hal ini sebesar 20 byte)
    // sedangkan sizeof(numbers[0]) akan mengembalikan nilai ukuran satu element dalam array (dalam hal ini 4 byte)
    // maka dari itu, jumlah seluruh nilai pada array (20) dibagi dengan satu ukuran element (4) akan menghasilkan 5 (seluruh element pada array)
    int jumlahElemenPadaArray = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < jumlahElemenPadaArray; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}