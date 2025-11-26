#include <stdio.h>
#include <stdlib.h>

void kirim(int a, int b)
{
    printf("Anda mengirim nilai %i dan %i \n",a,b);
    printf("Tekan Enter Untuk Melanjutkan\n");
    getch();
}

int main()
{
    int a,b;
    kirim(10, 15);
    
    printf("\nKetikkan dua angka sembarang dipisah dengan spasi = ");
    scanf("%i %i", &a, &b);
    kirim(a,b);
    return 0;
}
