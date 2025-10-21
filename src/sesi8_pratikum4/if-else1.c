#include <stdio.h>
#include <conio.h>

main()
{
    int bil, absolut;
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bil);

    if (bil < 0)
        absolut = -bil;
    else
        absolut = bil;
    printf("Nilai absolut dari %d adalah = %d", bil, absolut);

    getch();
}
