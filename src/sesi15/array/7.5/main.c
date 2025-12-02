#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];
    int i, jumlahKata = 0,tanpaSpasi = 0,denganSpasi = 0;

    printf("Masukkan sebuah kalimat: ");
    gets(kalimat);

    for (i = 0; kalimat[i] != 0; i++) {
        denganSpasi++;

        if (kalimat[i] != ' ')  
            tanpaSpasi++;
    }

    for (i = 0; kalimat[i] != 0; i++) {
        if ((kalimat[i] != ' ') && 
            (kalimat[i+1] == ' ' || kalimat[i+1] == 0)) {
            jumlahKata++;
        }
    }

    printf("\nJumlah kata = %d\n", jumlahKata);
    printf("Jumlah karakter tanpa spasi = %d\n", tanpaSpasi);
    printf("Jumlah karakter dengan spasi = %d\n", denganSpasi);

    return 0;
}
