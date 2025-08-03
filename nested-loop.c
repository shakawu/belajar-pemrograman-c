#include <stdio.h>

int main()
{
    // nested loop adalah loop di dalam loop

    // outer loop (biasanya digunakan untuk row)
    for (int i = 1; i <= 10; i++)
    {
        // inner loop (biasanya digunakan untuk colom)
        for (int j = 1; j <= 10; j++)
        {
            // setiap perulangan yang dilakukan outer loop akan dikalikan dengan inner loop
            printf("%3d ", i * j);
        }
        printf("\n");
    }

    for (int a = 1; a <= 4; a++)
    {
        for (int b = 1; b <= 4; b++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}