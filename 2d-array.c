#include <stdio.h>

int main()
{
    // 2D Array merupakan Array di dalam Array = {{}, {}, {}} atau array yang element di dalamnya merupakan sebuah array juga

    // untuk membuat 2d array dapat menggunakan [][], [] yang pertama untuk row-nya sedangkan [] yang kedua columnya
    // ketika membuat 2d array, kita harus membuat berapa banyak element pada columns
    char numpad[][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'},
                        {'*', '0', '#'}};
    // [](row)[3](column)

    // mengakses element pada row 2 column 3 = 6
    // printf("%d", numpad[2][3]);

    // untuk menampilkan 2d array dapat menggunakan nested for loop.
    // outer loop untuk row
    // inner loop untuk colom
    for (int a = 0; a < 4; a++) // outer loop (row)
    {
        for (int b = 0; b < 3; b++) // inner loop (column)
        {
            printf("%c ", numpad[a][b]);
        }
        printf("\n"); // digunakan untuk memisahkan baris dari hasil perulangan sebelumnya (enter)
    }
    return 0;
}