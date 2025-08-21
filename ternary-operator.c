#include <stdio.h>
#include <stdbool.h>

int main()
{
    // ternary operator (?) = merupakan baris singkat dari if statement
    // (kondisi) ? ketika_benar : ketika salah

    // int num1 = 10;
    // int num2 = 7;
    // int max = (num1 > num2) ? num1 : num2;

    // printf("%d", max);

    // bool aktif = true;

    // printf("%s", (aktif) ? "aktif" : "nonaktif");

    // printf("%d merupakan %s", num1, (num1 % 2 == 0) ? "Bilangan Genap" : "Bukan Bilangan Genap");

    int jam = 11;
    int menit = 10;
    // Pointer adalah sebuah variabel yang menyimpan alamat memori dari variabel atau nilai lain. Bukan menyimpan nilai, namun menyimpan alamat dari tempat nilai itu disimpan (misalnya dalam sistem) yang akan diteruskan apabila diperlukan.
    // String Literal adalah array karakter yang disimpan pada memori program (tidak dapat diubah)
    char *mediterania = (jam < 12) ? "AM" : "PM";

    // Jadi gini, *mediterania merupakan pointer yang menyimpan alamat memori "AM" dan "PM", namun hanya merujuk ke 'A' atau 'P' saja.
    // Ketika menampilkan menggunakan %s, maka pointer yang di arahkan akan ke 'A' atau 'P' sehingga akan menampilkan seluruhnya hingga mencapai \0
    // Pointer itu menunjuk ke karakter pertama dari string (misalnya 'A' atau 'P'), lalu %s akan mencetak semua karakter mulai dari karakter itu hingga menemukan '\0'
    printf("%02d:%02d %s", jam, menit, mediterania);

    return 0;
}