#include <stdio.h>
#include <windows.h> 

int input, result;
void menu();

int main()
{
    menu();
    printf("Masukkan jumlah perulangan: ");
    scanf("%d", &input);

    for (result = 0; result <= input; result++){
        menu();
    }
}

void menu()
{
    printf("Pilihan Menu %d\n", result);
    Sleep(10000);
}