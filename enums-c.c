#include <stdio.h>

// untuk membuat enum, biasanya nama dari nilai enums menggunakan huruf kapital semuanya, dan apabila kita tidak menambahkan nilainya secara manual, maka nilai secara otomatis dimulai dari 0.
// enum tipe_data {nilai enumerik, nilai enumerik lainnya};
// enum Status
// {
//     BERHASIL,
//     GAGAL,
//     MENUNGGU
// };

// atau juga dapat menggunakan typedef pada enum (agar enum tidak perlu didefinisikan)

typedef enum
{
    BERHASIL = 1,
    GAGAL = 2,
    MENUNGGU = 3
} Status;

void checkStatus(Status status);

int main()
{
    // enum adalah tipe data yang dibuat oleh pengguna yang menyimpan set dari nama yang berisi nilai integer yang pasti.
    // Kelebihan = Menimpa angka dengan nama yang jelas

    Status status = BERHASIL;

    checkStatus(status);
    return 0;
}

void checkStatus(Status status)
{
    switch (status)
    {
    case BERHASIL:
        printf("PROGRAM BERHASIL DIJALANKAN");
        break;
    case GAGAL:
        printf("PROGRAM GAGAL DIJALANKAN");
        break;
    case MENUNGGU:
        printf("MOHON BERSABAR...");
        break;
    }
}