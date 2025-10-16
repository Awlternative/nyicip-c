#include <stdio.h>

void main() {
    float celcius, fahrenheit;

    system("cls"); 

    printf("Konversi Suhu Celcius ke Fahrenheit\n");
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (9.0 / 5.0) * celcius + 32;

    printf("Suhu dalam Fahrenheit = %.2f\n", fahrenheit);

    getch();
}
