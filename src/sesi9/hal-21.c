#include <stdio.h>
#include <conio.h>

//hal21

int main(){
    int LM, HK, JML, BYRAKH;
    printf("Masukkan Harga Kamar:\n");
    scanf("%d", &HK);
    printf("Masukkan lama Menginap:\n");
    scanf("%d", &LM);

    JML = HK * LM;

    if(JML >= 300000){
        BYRAKH = JML - (JML * 30 / 100);
        printf("Harga Total: %d\n", JML);
        printf("Anda mendapatkan diskon 30%%\n");
        printf("Jumlah bayar setelah diskon: %d\n", BYRAKH);
    }else if(JML >= 200000){
        BYRAKH = JML - (JML * 20 / 100);
        printf("Harga Total: %d\n", JML);
        printf("Anda mendapatkan diskon 20%%\n");
        printf("Jumlah bayar setelah diskon: %d\n", BYRAKH);
    }else if(JML >= 100000){
        BYRAKH = JML - (JML * 10 / 100);
        printf("Harga Total: %d\n", JML);
        printf("Anda mendapatkan diskon 10%%\n");
        printf("Jumlah bayar setelah diskon: %d\n", BYRAKH);
    }else {
        printf("Anda tidak mendapatkan diskon\n");
        printf("Jumlah bayar adalah: %d\n", JML);
    }
    
    getch();
}