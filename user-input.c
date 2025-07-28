#include <stdio.h>
#include <string.h>

int main()
{

    // Membuat variabel yang menampung nilai kosong untuk diisi oleh input dari user. Disarankan membuat nilai default, jika hanya variabel saja maka C akan mengembalikan nilai undifined
    int umur = 0;
    float ipk = 0.0f;      // untuk double tidak perlu
    char peringkat = '\0'; // Null Terminator
    char nama[40] = "";

    // printf sebelum scanf karena scanf tidak dapat memberikan informasi tambahan
    printf("Ketikkan Umur Anda: ");
    // &nama_variabel bertujuan untuk menyimpan nilai yang diberikan ke variabel yang ditentukan
    scanf("%d", &umur);

    printf("Ketikkan IPK Anda: ");
    scanf("%f", &ipk);

    // Spasi sebelum %c agar pada saat selesai menginput ipk akan membuat newline karakter, nah agar outputnya user dapat menginput peringkat dan bukan sisa newline karakter pada ipk sebelumnya, ditambahkan spasi.
    printf("Ketikkan Peringkat Anda: ");
    scanf(" %c", &peringkat);

    getchar(); // Mengambil / menghapus newline char
    printf("Ketikkan Nama Anda: ");
    // scanf tidak dapat menampilkan output apabila ada spasi, maka dari itu, sebagai alternatifnya menggunakan fgets.
    // scanf("%s", &nama);
    // fgets dapat menampilkan output setelah spasi, rumusnya: (variabel_yang_menyimpan_nilai, panjang_dari_array, standar input agar user dapat mengetik)
    // fungsi sizeof() untuk mengambil nilai panjang array
    fgets(nama, sizeof(nama), stdin);
    nama[strlen(nama) - 1] = '\0'; // Menghapus newline character

    printf("%s\n", nama);
    printf("%d\n", umur);
    printf("%.2f\n", ipk);
    printf("%c\n", peringkat);

    return 0;
}