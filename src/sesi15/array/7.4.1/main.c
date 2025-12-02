#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, a2, a3, a4, a5, total, rata;

    printf("Masukkan tinggi siswa 1 = ");scanf("%i", &a1);
    printf("Masukkan tinggi siswa 2 = ");scanf("%i", &a2);
    printf("Masukkan tinggi siswa 3 = ");scanf("%i", &a3);
    printf("Masukkan tinggi siswa 4 = ");scanf("%i", &a4);
    printf("Masukkan tinggi siswa 5 = ");scanf("%i", &a5);

    total=a1+a2+a3+a4+a5;
    rata= total/5;
    printf("Dari 5 siswa, total tinggi = %i\n", total);
    printf("Rata-rata tinggi = %i", rata);
    return 0;
}