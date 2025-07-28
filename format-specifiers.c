#include <stdio.h>

int main()
{
    // Format Specifier adalah sebuah token spesial (%) yang diikuti dengan tipe variabelnya dan modifikasi tambahan jika diperlukan (lebar, presisi, flags)

    // Lebar
    float harga_barang = 12.8723;
    printf("%10f\n", harga_barang);

    // Mengisi lebar yang kosong dengan 0
    printf("%010f\n", harga_barang);

    // Rata kiri
    printf("%-10f\n", harga_barang);

    // Menambahkan tanda positif untuk bilangan positif
    printf("%+10f\n", harga_barang);

    // Presisi (menampilkan hanya 2 angka setelah koma)
    printf("%.2f\n", harga_barang);

    // Presisi (menampilkan hanya 1 angka setelah koma, nilai akan otomatis dibulatkan)
    printf("%.1f\n", harga_barang);

    // Menggabungkan lebar, presisi dan flags
    printf("%+10.2f\n", harga_barang);
    return 0;
}