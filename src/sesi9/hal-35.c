#include <stdio.h>

int main() {
    int LM, HK, JML, BYRAKH;
    int range;
    
    printf("Masukkan Harga Kamar:\n");
    scanf("%d", &HK);
    printf("Masukkan lama Menginap:\n");
    scanf("%d", &LM);

    JML = HK * LM;

    // tentukan range diskon
    if (JML >= 300000)
        range = 3;
    else if (JML >= 200000)
        range = 2;
    else if (JML >= 100000)
        range = 1;
    else
        range = 0;

    // switch berdasarkan range
    switch(range) {
        case 3:
            BYRAKH = JML - (JML * 30 / 100);
            printf("Harga Total: %d\n", JML);
            printf("Anda mendapatkan diskon 30%%\n");
            break;
        case 2:
            BYRAKH = JML - (JML * 20 / 100);
            printf("Harga Total: %d\n", JML);
            printf("Anda mendapatkan diskon 20%%\n");
            break;
        case 1:
            BYRAKH = JML - (JML * 10 / 100);
            printf("Harga Total: %d\n", JML);
            printf("Anda mendapatkan diskon 10%%\n");
            break;
        default:
            BYRAKH = JML;
            printf("Anda tidak mendapatkan diskon\n");
            break;
    }

    printf("Jumlah bayar: %d\n", BYRAKH);

    return 0;
}
