#include <stdio.h>
#include <stdlib.h>

void kirim(int x, char y)
{
    printf("Anda mengirim nilai %i dan huruf %c \n",x,y);
    printf("Tekan Enter Untuk Melanjutkan\n");
    getch();
}

int main()
{
    int a;
    char b;
    kirim(100, 'A');
    
    printf("\nKetikkan angka dan huruf dipisah dengan spasi = ");
    scanf("%i %c", &a, &b);
    kirim(a,b);
    return 0;
}
