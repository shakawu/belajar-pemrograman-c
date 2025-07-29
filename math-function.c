#include <stdio.h>
#include <math.h> // Header untuk beberapa default math function

int main()
{

    int x = 9;
    float y = 3.26;
    int z = -4;
    float angle = 90;

    // Akar Kuadrat
    x = sqrt(x);

    // Pangkat
    x = pow(x, 2);

    // Membulatkan bilangan berkoma
    y = round(y);

    // Membulatkan bilangan berkoma ke atas
    y = ceil(y);

    // Membulatkan bilangan berkoma ke bawah
    y = floor(y);

    // Nilai Mutlak
    z = abs(z);

    // Logaritma
    x = log(x);

    // Trigonometri
    angle = sin(angle);
    angle = cos(angle);
    angle = tan(angle);

    printf("%d\n", x);
    printf("%f\n", y);
    printf("%d\n", z);
    printf("%f\n", angle);

    return 0;
}