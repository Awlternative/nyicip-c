#include <stdio.h>
#include <conio.h>

int main(){
    int LM, HK, JML, BYRAKH;
    printf("Masukkan Harga Kamar:\n");
    scanf("%d", &HK);
    printf("Masukkan lama Menginap:\n");
    scanf("%d", &LM);

    JML = HK * LM;

    if(JML >= 100000){
        BYRAKH = JML - (JML * 10 / 100);
        printf("Harga Total: %d\n", JML);
        printf("Anda mendapatkan diskon 10%%\n");
        printf("Jumlah bayar setelah diskon: %d\n", BYRAKH);
    }else{
        printf("Anda tidak mendapatkan diskon\n");
        printf("Jumlah bayar adalah: %d\n", JML);
    }
    
    getch();
}