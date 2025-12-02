#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[25];
    int i;

    printf("Masukkan Nama Anda = ");
    gets(nama);
    printf("Selamat datang ");
    puts(nama);
    printf("Nama anda dengan spasi = ");
    for (i=0; i<25; i++)
        printf("%c ",nama[i]);

    printf("\nNama anda dibalik = ");
    for (i=24; i>=0; i--)
        printf("%c ",nama[i]);
    return 0;
}
