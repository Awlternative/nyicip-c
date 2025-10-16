#include <stdio.h>
#include <stdlib.h>

void main()
{
    char karakter;

    system("cls");

    printf("\n Mempelajari penggunaan getche() denagn variabel");
    printf("\n Tekan tombol yang dikehendaki");
    karakter = getche();
    printf("\n Anda menekan tombol %c", karakter);
    getch();
}
