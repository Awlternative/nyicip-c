#include <stdio.h>

int main()
{
    // float Y, y, x, a;
    // printf("x: ");
    // scanf("%f", &x);
    // printf("y: ");
    // scanf("%f", &y);
    // printf("a: ");
    // scanf("%f", &a);
    // Y = (0.3 * x * y)/(2*a);
    // printf("Hasil Y: %f\n", Y);

    
    int a = (2 > 1 || 3<=4 && 4 < 1);
    int b = (2 >1 && 3 <= 4 || 4 < 1);
    int c = !(2 > 1) && (3 <= 4);
    int d = (5 > 1 || 3 != 2) && ((2 > 1) || (4 == 2));

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
}