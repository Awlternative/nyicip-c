#include <stdio.h>
#include <conio.h>

main()
{
    char c;
    printf("Masukkan suatu karakter :");
    scanf("%c", &c);

    if (c >='a' && c <='z')
        printf("\n Karakter tersebut termasuk huruf kecil.\n");
    else
        printf("\n Karakter tersebut bukan huruf kecil.\n");
    getch();
}
