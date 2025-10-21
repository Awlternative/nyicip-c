#include <stdio.h>
#include <conio.h>  // kalau di compiler yang mendukung conio.h, untuk getch()

int main()
{
    //hapus variavbel yang tidak terpakai 
    int pembilang, penyebut; //deklarasikan variabel yang akan dipakai
    
    //buat supaya variabel bisa dimasukkan
    printf("Masukkan pembilang: ");
    scanf("%d", &pembilang); 

    printf("Masukkan penyebut: ");
    scanf("%d", &penyebut); 

    if (penyebut == 0) { //ubah perkondisiannya
        printf("penyebut tidak bisa dibagi");
    } else if(pembilang % penyebut == 0){
        printf("%d habis dibagi %d\n", pembilang, penyebut);
    }else{
        printf("%d tidak habis dibagi %d\n", pembilang, penyebut);
    }
    getch();
    
    return 0;
}