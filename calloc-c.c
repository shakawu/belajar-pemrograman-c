#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    calloc() = Contiguos Alocation
               Mengalokasikan memori secara dinamis dan menetapkan memori yang dialokasikan dengan 0. Jadi, ada nilai defaultnya gitu sementara kalo pake malloc, nilai defaultnya akan diisi garbage value. malloc() lebih cepat namun calloc() lebih minim bug
               calloc(variabel/apapun, size)
    */

    int players = 0;
    printf("Ketikkan Jumlah Pemain: ");
    scanf("%d", &players);

    int *scores = calloc(players, sizeof(int));

    if (scores == NULL)
    {
        printf("Alokasi Memori Gagal!");
        return 1;
    }

    for (int i = 0; i < players; i++)
    {
        printf("Ketikkan Poin Pemain Ke-%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < players; i++)
    {
        printf("Poin Pemain ke-%d: %d\n", i + 1, scores[i]);
    }

    free(scores);
    scores = NULL;

    return 0;
}