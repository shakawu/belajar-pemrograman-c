#include <stdio.h>
// Digunakan untuk membuat variabel boolean
#include <stdbool.h>

int main()
{
    // Variabel adalah sebuah wadah/kontainer yang dapat digunakan kembali dan menyimpan sebuah nilai
    // berperilaku seperti nilai yang didalammnya.

    // Integer = sebuah bilangan desimal (menyimpan 4 byte dalam memory pada sistem modern)
    int umur = 18;
    // Untuk menampilkan variabel ke output, harus menggunakan format specifier yang masing-masing tipe data berbeda formatnya
    // /n agar output selanjutnya berada pada baris baru
    printf("Saya berumur %d tahun.\n", umur);

    // Float = sebuah bilangan berkoma (menyimpan 4 byte dalam memory)
    float ipk = 3.87;
    // float umumnya akan menampilkan 0 sebanyak 16 setelah koma, maka dari itu digunakan format specifier untuk mengatur ouput yang ditampilkan
    // .2 adalah flags yang berfungsi agar ouput hanya menampilkan 2 angka setelah koma
    printf("IPK saya adalah %.2f\n", ipk);

    // Double = bilangan berkoma presisi (menyimpan 8 byte dalam memory)
    // biasanya digunakan untuk menampilkan nilai yang presis seperti nilai pi
    double pi = 3.141592653589793238462643383279502884197;
    // double dapat menampilkan output dengan menggunakan %f, namun agar mudah dibaca, disarankan menggunakan %lf (long-float)
    printf("Nilai dari pi adalah sekitar %lf\n", pi);

    // Character = sebuah karakter (menyimpan 1 byte dalam memory)
    char peringkat = 'A';
    printf("Peringkat yang kamu dapatkan adalah %c\n", peringkat);

    // String / Array dari sebuah karakter = sebuah karakter dengan jumlah yang lebih dari satu (menggunakan memory sesuai banyaknya karakter yang ada)
    char nama[] = "Shafwan Khairullah";
    printf("Perkenalkan nama saya %s\n", nama);

    return 0;
}