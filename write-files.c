#include <stdio.h>

int main()
{
    // Untuk menulis file pada C, dapat menggunakna buildin Struct pada header standard input output

    // FILE merupakan struct bawaan pada header stdio
    // *pFile merupakan variabel pointer yang menyimpan memori dari builtin function fopen (File Open)
    // fopen("Path dimana file akan disimpan (relative = di tempat kode dibuat / absolute = khusus dan jelas pengetikannya)", "mode pada file, w untuk write dan r untuk read")
    FILE *pFile = fopen("C:\\Users\\awann\\Downloads\\test-output.txt", "w");

    char text[] = "Hello World!";

    // Karena nilai default apabila terjadinya kesalahan pada funtion adalah NULL, maka membuat if statement apabila terjadi kesalahan akan menampilkan pesan yang mudah dipahami
    if (pFile == NULL)
    {
        printf("Error!");
        return 1;
    }

    // Mencetak text ke file menggunakan builtin function fprint / File Print. fprint(pointer ke struct file, "tipe data", variabel yang menyimpan tipe data atau data itu sendiri)
    fprintf(pFile, "%s", text);

    // fclose(pointer yang mengarah ke struct FILE), agar membersihkan resource yang digunakan setelah menggunakan fopen()
    fclose(pFile);

    return 0;
}