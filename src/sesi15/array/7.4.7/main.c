#include <stdio.h>
#include <stdlib.h>

int main()
{
    int berat[2][5];
    int i,j;

    puts("Isian data berat beras= ");
    for (i=0; i<2; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("Data beras %i, %i = ",i,j);
            scanf("%i",&berat[i][j]);
        }
        puts("");
    }

    puts("Data Berat beras = ");
    for (i=0; i<2; i++)
    {
        for (j=0; j<5; j++)
            printf("%3i kg",berat[i][j]);
        puts("");
    }

    puts("");
    return 0;
}
