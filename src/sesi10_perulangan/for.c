#include <stdio.h>

int main()
{
    // int bil;
    // for (bil = 1; bil <= 15; bil += 3)
    //     printf("%d\n", bil);
    // 
    
    int i, j;
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
