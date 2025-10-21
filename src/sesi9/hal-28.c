#include <stdio.h>
#include <conio.h>

//hal28

int main(){
    int LM, HK, JML, BYRAKH, potongan;
    char KET[20];
    float diskon;
    printf("Masukkan Harga Kamar: ");
    scanf("%d", &HK);
    printf("Masukkan lama Menginap: ");
    scanf("%d", &LM);

    JML = HK * LM;

    if(JML >= 300000 && HK > 50000){
        if(LM > 3){
            strcpy(KET, "DPT KARTU DISC");
            potongan = JML * 30 / 100;
            BYRAKH = JML - potongan;
        }else{
            strcpy(KET, "TAK DPT KARTU DISC");
            BYRAKH = JML - (JML * 0 / 100);
        }
        printf("Keterangan: %s \n", KET);
        printf("Jumlah bayar: %d\n", BYRAKH);
    }else{
        BYRAKH = JML - (JML * 0 / 100);
        strcpy(KET, "TAK DPT KARTU DISC");
        printf("Keterangan: %s \n", KET);
        printf("Jumlah bayar: %d\n", BYRAKH);
    }
    
    getch();
}