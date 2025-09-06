#include <stdio.h>

void birthday(int *umur);

int main()
{
    // Pointer adalah variabel yang menyimpan nilai berupa alamat memori dari variabel lain. Manfaatnya adalah dapat menghemat memori dengan membiarkan kita menyimpan alamat dari sebuah struktur data yang besar daripada menyalin semuanya.

    int umur = 18;

    // Untuk menampilkan nilai pointer harus menggunakan %p, dan %nama_variabel untuk alamat dari sebuah variabel.
    // printf("%p", &age);

    // Untuk membuat variabel pointer, menggunakan * (dereference operator)
    // Meletakkan * bisa setelah tipe data int* atau sebelum nama variabel int *pAge
    // Membuat variabel pointer, biasanya nama awal variabel mengetikkan p yang berarti pointer
    // Variabel *pUmur menyimpan alamat dari variabel umur dengan menggunakan &umur.
    int *pUmur = &umur;

    // printf("%p", pUmur);

    birthday(pUmur);

    printf("Kamu Berumur %d tahun!", umur);
    return 0;
}

void birthday(int *umur)
{
    // function pada c menerima value yang dimana value tersebut seperti di duplikat, apabila function menerima value dan meningkatkan nilainya, maka value yang meningkat sebenarnya adalah value yang hanya di dalam function. dan yang harus kita lakukan adalah membuatnya menerima secara acuan dalam hal ini alamat dari nilai tersebut.
    // dereference operator, adalah operator yang akan mengakses nilai dari alamat memori yang ditunjuk (dalam hal ini *umur pada function), gunanya dalam () agar itu dulu yang diproses baru ++
    (*umur)++;
}