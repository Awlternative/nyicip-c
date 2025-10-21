#include <stdio.h>
#include <conio.h>
main()
{
    char tag;
    printf("Masukkan tipe tag(2 / 4) : ");
    sacnf("% c", &tag);
    if (tag =='2')
    {
        printf("Merk sepeda motor bertipe 2 tag\n\n");
        printf(" 1. YA MAHA");
        printf(" 2. YA SUZUKI");
        printf(" 3. YA HONDA");
    }
    else
    {
        printf("Merk sepeda motor bertipe 4 tag\n\n");
        printf(" 1. MAHA");
        printf(" 2. SUZUKI");
        printf(" 3. HONDA");
    }
    getch();
}
