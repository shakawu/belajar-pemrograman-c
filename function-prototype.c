#include <stdio.h>

void perkenalanDiri(char nama[], int umur);

int main()
{
    // Function Prototype adalah fungsi yang menyediakan informasi mengenai fungsi yang akan dijalankan bahkan sebelum fungsi tersebut benar-benar dijalankan. Pada Function Prototype kita harus mendefinisikan tipe data yang akan menjadi output fungsi, return value yang dikeluarkan fungsi, serta parameternya. Hal ini dapat meningkatkan keterbacaan kode yang kita buat, membuat kode menjadi terorganisir dengan sangat baik serta memudahkan dalam proses debugging

    perkenalanDiri("Shafwan Khairullah", 18);

    return 0;
}

void perkenalanDiri(char nama[], int umur)
{
    printf("Halo %s.\n", nama);
    printf("Anda berumur %d tahun.\n", umur);
}