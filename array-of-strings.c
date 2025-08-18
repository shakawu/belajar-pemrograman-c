#include <stdio.h>
#include <string.h>

int main()
{
    // Array yang menyimpan beberapa string

    // Untuk membuat array yang menyimpan beberapa string, pada bagian kolom kita harus mengisikan nilai maksimal karakter pada sebuah string (50 = 50 kata)
    // char names[][50] = {"Shafwan", "Arima Kana", "Shorekeeper"};

    // // Menghitung secara otomatis jumlah row dengan cara membagi seluruh size dari variable names dan membaginya dengan size dari satu row names[0]
    // int sizeOfRow = sizeof(names) / sizeof(names[0]);

    // // Memodifikasi Character pada Strings
    // names[0][5] = 'A';

    // for (int a = 0; a < sizeOfRow; a++)
    // {
    //     printf("%s\n", names[a]);
    // }

    // User Input beberapa Array

    char names[3][50] = {0};

    for (int i = 0; i < 3; i++)
    {
        printf("Ketikkan Nama: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    printf("List Nama:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}