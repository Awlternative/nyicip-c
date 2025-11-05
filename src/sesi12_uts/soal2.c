#include <stdio.h>
#include <stdbool.h>

int main() {
    int p; 
    float berat, hargaPerKg, total;

    printf("--- List Harga ---\n");
    printf("Pelanggan: 4.000/kg\n");
    printf("Bukan pelanggan: 5.000/kg\n");

    printf("\nApakah anda pelanggan? (1: ya, 0: tidak): ");
    scanf("%d", &p);

    if (p == 1) {
        hargaPerKg = 4000;
        printf("\n--- Silakan masukkan berat cucian (kg): ");
        scanf("%f", &berat);

        total = berat * hargaPerKg;

        if (berat > 5) {
            total = total * 0.9;  // diskon 10%
        } else if (berat >= 3) {
            total = total * 0.95; // diskon 5%
        }

        printf("Tagihan anda adalah: Rp %.2f\n", total);

    } else if (p == 0) {
        hargaPerKg = 5000;
        printf("\n--- Silakan masukkan berat cucian (kg): ");
        scanf("%f", &berat);

        total = berat * hargaPerKg;

        if (berat > 5) {
            total = total * 0.9; // diskon 10%
        } else if (berat >= 3) {
            total = total * 0.95; // diskon 5%
        }

        printf("Tagihan anda adalah: Rp %.2f\n", total);

    } else {
        printf("Input tidak valid.\n");
    }

    return 0;
}
