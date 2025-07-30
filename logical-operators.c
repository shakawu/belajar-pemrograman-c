#include <stdio.h>
#include <stdbool.h>

int main()
{

    // Logical Operator adala operator yang digunakan untuk memodifikasi boolean
    // && (AND), Semua kondisi harus bernilai benar untuk menghasilkan output yang benar juga
    // || (OR), Cukup ada satu atau lebih kondisi yang benar untuk menghasilkan output yang benar juga
    // ! (NOT), membalikkan nilai boolean dari false ke true begitu sebaliknya

    int suhu = 10;
    bool cuacaCerah = true;

    if (suhu > 0 && suhu <= 30)
    {
        printf("Cuaca Baik-Baik Saja");
    }
    else
    {
        printf("Cuaca Buruk");
    }

    if (suhu < 0 || suhu >= 30)
    {
        printf("Cuaca Buruk");
    }
    else
    {
        printf("Cuaca Baik-Baik Saja");
    }

    if (!cuacaCerah)
    {
        printf("Cuaca Buruk");
    }
    else
    {
        printf("Cuaca Baik");
    }

    return 0;
}