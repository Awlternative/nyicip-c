#include <stdio.h>
#include <stdlib.h>
#define maks 20

int main()
{
    int a[maks],i, total=0, rata;

    // Input Data
    for(i=0; i<maks; i++){
        printf("Masukkan tinggi siswa %i = ",i+1);scanf("%i",&a[i]);
    }

    for(i=0; i<maks; i++){
        total=total+a[i];
    }
    rata= total/maks;
    printf("Dari %i siswa, total tinggi = %i\n", maks, total);
    printf("Rata-rata tinggi = %i", rata);
    return 0;
}