#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[3][10];
    int i;

    puts("Masukkan 3 nama peserta = ");
    for (i = 0; i < 3; i++)
    {
        printf("Siswa %i = ", i+1);
        gets(nama[i]);
    }

    printf("\nHasil Entry 3 nama = \n");
    for (i = 0; i < 3; i++)
    {
        printf("Siswa ke %i, nama = %s \n", i+1, nama[i]);
    }

    puts("");
    return 0;
}
