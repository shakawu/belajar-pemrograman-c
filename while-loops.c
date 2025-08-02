#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // While Loop merupakan perulangan yang akan berulang terus-menerus mengeksekusi kode yang berada di dalamnya hingga kondisinya tidak sesuai (false).

    // char nama[50] = "";

    // printf("Ketikkan Nama Anda: ");
    // fgets(nama, sizeof(nama), stdin);
    // nama[strlen(nama) - 1] = '\0';

    // Pada while, kita akan mengecek kondisi dulu baru menjalankan kode
    // while (strlen(nama) == 0)
    // {
    //     printf("Maaf, nama tidak boleh kosong. Silahkan ketik nama Anda: ");
    //     fgets(nama, sizeof(nama), stdin);
    //     nama[strlen(nama) - 1] = '\0';
    // }

    // Sedangkan pada do-while, kita menjalankan kode terlebih dahulu, baru memeriksa kode.
    // do
    // {
    //     printf("Maaf, nama tidak boleh kosong. Silahkan ketik nama Anda: ");
    //     fgets(nama, sizeof(nama), stdin);
    //     nama[strlen(nama) - 1] = '\0';
    // }while(strlen(nama) == 0);

    // printf("Halo %s.", nama);

    bool berjalan = true;
    char respon = '\0';

    while (berjalan)
    {
        printf("Program Sedang Dijalankan.\n");
        printf("Apakah Anda Ingin Keluar?.\n");
        printf("Y = iya, N = tidak.\n");
        printf("Ketikkan Opsi Anda: ");
        scanf(" %c", &respon);

        if (respon == 'Y' || respon == 'y')
        {
            berjalan = false;
        }
    }

    printf("Selamat Tinggal!");

    return 0;
}