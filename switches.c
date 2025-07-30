#include <stdio.h>

int main()
{
    // Switch merupakan alternatif lain dari if statement yang pembacaan kodenya lebih mudah
    // switch sangat efektif jika digunakan untuk integer atau character tunggal

    // int day = 0;

    // printf("Ketikkan Hari (1 - 7): ");
    // scanf("%d", &day);

    // Break digunakan apabila sesuai casenya, tidak akan menampilkan case setelahnya
    // switch (day)
    // {
    // case 1:
    //     printf("Senin");
    //     break;
    // case 2:
    //     printf("Selasa");
    //     break;
    // case 3:
    //     printf("Rabu");
    //     break;
    // case 4:
    //     printf("Kamis");
    //     break;
    // case 5:
    //     printf("Jumat");
    //     break;
    // case 6:
    //     printf("Sabtu");
    //     break;
    // case 7:
    //     printf("Minggu");
    //     break;
    // default:
    //     printf("Hanya 1 - 7!");
    //     break;
    // }

    // Switch juga dapat gunakan pada character

    char days = '\0';

    printf("Ketikkan Hari (A, B, C, D, E, F, G, H): ");
    scanf("%c", &days);

    switch (days)
    {
    case 'A':
        printf("Senin");
        break;
    case 'B':
        printf("Selasa");
        break;
    case 'C':
        printf("Rabu");
        break;
    case 'D':
        printf("Kamis");
        break;
    case 'F':
        printf("Jumat");
        break;
    case 'G':
        printf("Sabtu");
        break;
    case 'H':
        printf("Minggu");
        break;
    default:
        printf("Hanya 1 - 7!");
        break;
    };

    return 0;
}