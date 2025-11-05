#include <stdio.h>

int main()
{
    int bil = 1;
    do{
        printf("%d\n", bil);
        bil = bil + 1;
    } while (bil <= 10);

    bil = 5;
    do{
        printf("%d #dilakukan sekali saja, kalau pakai while tidak akan muncul\n", bil);
        bil = bil + 1;
    } while (bil <= 1);
    
}