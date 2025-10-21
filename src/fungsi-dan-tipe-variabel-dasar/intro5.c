#include <stdio.h>
#include <stdlib.h>

void main()
{
    float harga, jumlah, total, hasil;
    system("cls");

    harga = 132.055;
    jumlah = 50;

    total = harga * jumlah;
    hasil = total / jumlah;

    printf("Harga Total = %f\n\n", total);
    printf("Hasil Pembagian = %f", hasil);

    getche();
}
