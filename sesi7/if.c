#include <stdio.h>
// #include <stdbool.h>

void main()
{
   // If
   int sum, total;
   printf("Masukkan sum\n");
   scanf("%d", &sum);
   printf("Masukkan total \n");
   scanf("%d", &total);

   if(sum == 10 && total < 20){
    printf("Tidak sesuai \n");
   }
}