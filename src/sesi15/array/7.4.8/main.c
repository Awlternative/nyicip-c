#include <stdio.h>
#include <stdlib.h>

int main()
{
    int berat[2][5];
    int i, j;

    puts("Isian data berat = ");
    for (i = 0; i < 2; i++)
    {
        printf("Kelas %c :\n", i + 'A');
        for (j = 0; j < 5; j++)
        {
            printf("Siswa %i = ", j + 1);
            scanf("%i", &berat[i][j]);
        }
        puts("");
    }

    puts("Data Berat : ");
    for (i = 0; i < 2; i++)
    {
        printf("Kelas %c (kg) = ", i + 'A');
        for (j = 0; j < 5; j++)
            printf("%3i ", berat[i][j]);
        puts("");
    }

    puts("");
    return 0;
}
