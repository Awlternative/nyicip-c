#include <stdio.h>
#include <stdlib.h>

void kirim(int data)
{
    printf("Anda mengirim nilai %i \n", data);
    printf("Tekan Enter Untuk Melanjutkan\n");
    getch();
}

int main()
{
    int nilai;
    kirim(5);
    
    printf("\nKetikkan sembarang angka, akhiri enter = ");
    scanf("%i", &nilai);
    kirim(nilai);
    return 0;
}
