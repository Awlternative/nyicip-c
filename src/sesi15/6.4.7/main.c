#include <stdio.h>
#include <stdlib.h>

void gambar_kotak(int p, int t)
{
    printf("Panjang:%i\nTinggi:%i \n", p, t);
    int i, j;
    // Gambar kekanan bagian atas
    printf("|");
    for (i = 0; i < p; i++)
        printf("-");
    printf("|\n");
    // gambar sisi kiri dan kanan
    for (j = 0; j < t; j++)
    {
        printf("|");
        for (i = 0; i < p; i++)
            printf(" ");
        printf("|\n");
    }
    // Gambar kekanan bagian bawah
    printf("|");
    for (i = 0; i < p; i++)
        printf("-");
    printf("|\n");
}

int main()
{
    int p, t;
    printf("Menggambar Kotak mode teks. Agar idela, p maks=70, t maks=10. \n");
    printf("Masukkan panjang dan tinggi dipisah spasi  = ");

    scanf("%i %i", &p, &t);
    gambar_kotak(p, t);
    return 0;
}
