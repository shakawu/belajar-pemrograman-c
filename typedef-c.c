#include <stdio.h>

// Membuat nama untuk tipe data array of character / string. Untuk itu pada C harus membuat jumlah dari byte array (size) yang dapat masuk ke dalam variabel dalam hal ini 50 kata

// Oh iya, untuk menyimpan string ini dapat menggunakan pointer
// typedef char* String;
typedef char Strings[50];

// Membuat nama untuk tipe data array dari karakter yang dapat menyimpan 2 karakter, dibuat size nya 3 karena termasuk null terminator (\0)
typedef char Inisial[3];

int main()
{
    // typedef adalah keyword yang memberikan nama untuk tipe data yang membuat kode menjadi lebih mudah dipahami

    // typedef tipe_data nama

    Strings nama = "Shafwan Khairullah";

    Inisial inisial = "SK";

    printf("%s\n", nama);
    printf("%s\n", inisial);

    return 0;
}