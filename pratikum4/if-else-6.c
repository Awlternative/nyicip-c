#include <stdio.h>
#include <conio.h>

main()
{
    int valid_operator = 1;
    char operator;
    float bil1, bil2, hasil;

    printf("Masukkan 2 bilangan dan sebuah operator.\n\n");
    printf("Dengan format : \n\n");
    printf("= bilangan - 1 operator bilangan - 2\n\n");
    printf("= ");

    scanf("%f %c %f", &bil1, &operator, &bil2);

    if (operator == '*')
    {
        hasil = bil1 * bil2;
    }
    else if (operator == '/')
    {
        hasil = bil1 / bil2;
    }
    else if (operator == '+')
    {
        hasil = bil1 + bil2;
    }
    else if (operator == '-')
    {
        hasil = bil1 - bil2;
    }
    else
        valid_operator = 0; //pengetikan if yang salah, kurang kurawal

    if (valid_operator)
    {
        printf("\n Hasil perhitungan\n\n");
        printf("% g % c % g = % g\n", bil1, operator, bil2, hasil);
    }
    else
    {
        printf("\n Operator SALAH !\n");
        printf("\n Gunakan operator +, -, / dan * saja !");
    }
    getch();
}
