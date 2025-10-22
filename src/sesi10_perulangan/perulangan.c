#include <stdio.h>
main()
{
    //for
    int bil;
    for(bil = 1; bil <= 15; bil+=3)
        printf("%d\n", bil);
    printf("\n");

    //while
    bil = 1;
    while(bil <= 15)
    {
        printf("%d\n", bil);
        bil = bil + 3;
    }
    printf("\n");


    //do while
    bil = 1;
    do{
        printf("%d\n", bil);
        bil = bil + 3;
    }while(bil <= 15);
}