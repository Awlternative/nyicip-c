#include <stdio.h>
#include <conio.h>

int main(){
    int LM, HK, JML;
    printf("Masukkan Harga Kamar:\n");
    scanf("%d", &HK);
    printf("Masukkan lama Menginap:\n");
    scanf("%d", &LM);

    JML = HK * LM;

    printf("%d(Lama Menginap) * %d(Harga Kamar) = %d(Jumlah Bayar)\n", LM, HK, JML);
    printf("Jumlah bayar adalah: %d\n", JML);
    getch();
}