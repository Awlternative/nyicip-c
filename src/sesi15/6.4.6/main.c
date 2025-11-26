#include <stdio.h>
#include <stdlib.h>

int kalidua(int x)
{
    int hasil;
    hasil = x*2;
    return(hasil);
}

int main()
{
    int a, angka;
    a=kalidua(500);
    printf("Hasil dari fungsi = %i. \n",a);
    printf("Hasil langsung dari fungsi = %i. \n",kalidua(100));
    
    printf("Masukkan sembarang angka =  ");
    scanf("%i", &angka);
    a=kalidua(angka);
    printf("Nilai %i dikali 2 = %i. \n", angka, a);
    return 0;
}
