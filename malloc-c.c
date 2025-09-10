#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Malloc adalah builtin function yang berguna untuk mengalokasikan memori secara dinamik pada array yang ingin kita buat dengan keperluan kita

    // Semisal ingin membuat array yang berisi grade

    int number = 0;

    printf("Berapa Banyak Peringkat yang Ingin Kamu Buat?: ");
    scanf("%d", &number);

    // Untuk menggunakan malloc (memory allocated),
    // malloc(JumlahAlokasiMemori(BisaDibuatDenganInputUser) * SizeDariCharacter/SizeDariArray(MenggunakanSizeof))
    // Function ini akan mengalokasikan memori ke pointer yang sudah kita siapkan, jadi memori ini hanya sementar / sewa
    char *grade = malloc(number * sizeof(grade));

    // Apabila penglokasian memori gagal, program akan dihentikan. (Jika gagal, biasanya akan mengembalikan nilai NULL) Ini mencegah segmentation fault.
    // Segmentation fault terjadi ketika program mencoba mengakses area memori yang tidak sah atau tidak diizinkan oleh sistem, misalnya dengan membaca atau menulis ke alamat memori yang belum dialokasikan, sudah dibebaskan, atau merupakan NULL atau pointer tidak valid lainnya.
    if (grade == NULL)
    {
        printf("Alokasi Memori Gagal!");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Ketikkan Peringkat ke-%d: ", i + 1);
        scanf(" %c", &grade[i]);
    }

    for (int i = 0; i < number; i++)
    {
        printf("Peringkat #%i = %c\n", i + 1, grade[i]);
    }

    // Mengembalikan memori yang telah digunakan ke OS
    free(grade);
    // Mereset pointer untuk menghindari dangling pointers
    // Dangling pointer adalah pointer yang masih menyimpan alamat memori yang sudah tidak valid (misalnya setelah dibebaskan dengan free()), tetapi tidak di-set ke NULL. Hal ini dapat menyebabkan perilaku tak terdefinisi (undefined behavior) jika pointer tersebut digunakan kembali, seperti membaca atau menulis ke lokasi memori yang sudah tidak sah.
    grade = NULL;
    return 0;
}