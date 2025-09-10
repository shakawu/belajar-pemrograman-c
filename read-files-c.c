#include <stdio.h>

int main()
{
    // Membaca File pada C

    FILE *pFile = fopen("hello.txt", "r");

    // Variabel buffer akan menyimpan setiap karakter yang ada pada file hello.txt dengan maksimal sebanyak 1024 karakter
    char buffer[1024] = {0};

    if (pFile == NULL)
    {
        printf("TIDAK DAPAT MEMBACA FILE");
        return 1;
    }

    // fgets akan mengembalikan NULL oleh sebab itu menggukan NOT
    // fgets(tempat_tersimpannya_output, besar_memori_yang_ditampung, pointer_yang_mengarah_ke_struct)
    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0;
}