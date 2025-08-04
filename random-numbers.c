#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Pseudo-random = Menampilkan angka random tetapi ditentukan berdasarkan formula matematika yang menggunakan value awal untuk membuat urutan yang dapat diprediksi oleh angka.

    // Untuk membuat seed value, NULL itu sama dengan 0 cuma agar pembacaan kodenya lebih mudah aja
    srand(time(NULL));

    // Jika dijalakankan, angka yang ditampilkan static (tetap sama aja). Ini dikarenakan ketika menjalankan pseudo-random kita tidak menggunakan seed value untuk membuat formula matematika untuk menghasilkan urutan yang ditampilkan secara acak, base value biasanya antara 1 dan 0. Saat ini kita menggunakan seed value yang sama terus-menerus makanya angka yang ditampilkan juga sama.
    // MENDAPATKAN MAXIMUM VALUE PADA SEED
    // printf("%d", RAND_MAX);

    int min = 50;
    int max = 100;
    // Kita memoduluskan hasil dari rand() dengan % 2
    // int randomNumbers = rand() % 2;
    // Random number 1 dan 2

    // pada operasi modulus kita harus mengurangi nilai maximum dengan minimum lalu ditambahkan dengan 1 agar nilainya seimbang
    int randomNumbers = (rand() % (max - min + 1)) + min;

    printf("%d", randomNumbers);
    return 0;
}