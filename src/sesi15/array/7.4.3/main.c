#include <stdio.h>
#include <stdlib.h>
#define maks 5

void cetak_array(int a[])
{
    int i;
    for (i = 0; i < maks; i++)
        printf("Array ke %i = %i \n", i, a[i]);
    puts("");
}

int main()
{
    int dt[maks];
    cetak_array(dt);

    puts("Isi array ke pertama (index=0) dengan 137");
    dt[0] = 137;
    cetak_array(dt);

    puts("Isi array ke 3 (index=2) dengan 500");
    dt[2] = 500;
    cetak_array(dt);

    puts("Isi array terakhir (index=4) dengan 789");
    dt[4] = 789;
    cetak_array(dt);

    printf("Isi array pertama = %i\n", dt[0]);

    return 0;
}
