#include <stdio.h>
#include <conio.h>

main()
{
    char letter;
    int sum, valid_flag;
    printf("Input the Letter: ");
    scanf("%c", & letter);

    switch (letter)
    {
    case 'X':
        sum = 0;
        printf("sum: %d", sum);
        break;
    case 'Z':
        valid_flag = 1;
        printf("valid flag: %d", valid_flag);
        break;
    case 'A':
        sum = 1;
        printf("sum: %d", sum);
        break;
    default:
        printf("Unknown letter --> %c\n", letter);
    }
    getch();
}
