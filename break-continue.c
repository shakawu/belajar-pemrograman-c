#include <stdio.h>

int main()
{
    // break adalah menghentikan perulangan / menghentikan kode
    // continue adalah melewati suatu kondisi tertentu dan melanjutkannya (skip) termasuk perulangan atau kode

    for (int i = 0; i <= 10; i++)
    {
        // Ketika sudah mencapai perulangan ke-5, perulangan akan berhenti
        // if (i == 5)
        // {
        //     break;
        // }
        // else
        // {
        //     printf("%d\n", i);
        // }

        // Ketika sudah mencapai perulangan ke-5, perulangan ke-5 akan dilewatkan dan dilanjutkan setelahnya
        if (i == 5)
        {
            continue;
            ;
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}