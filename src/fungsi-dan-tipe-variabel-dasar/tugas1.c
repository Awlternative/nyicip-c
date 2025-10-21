#include <stdio.h>

int main(void)
{
    // Data barang
    char *namaBarang[3] = {"CPU 850Mhz", "RAM 128Mhz", "Motherboard PIII"};
    int harga[3] = {700000, 380000, 800000};
    float diskon[3] = {0.05, 0.10, 0.08};
    
    // Menampilkan data barang
    printf("===============================================================\n");
    printf("No\t| Nama Barang\t\t| Harga\t\t| Diskon|\n");
    printf("===============================================================\n");
    printf("1\t| CPU 850Mhz\t\t| 700000\t| 5%%\t| \n");
    printf("2\t| RAM 128Mhz\t\t| 380000\t| 10%%\t| \n");
    printf("3\t| Motherboard PIII\t| 800000\t| 8%%\t| \n");
    printf("===============================================================\n");
    
    // Memilih barang
    printf("\nPilih barang (1-3): ");
    int pilih;
    scanf("%d", &pilih);
    
    //Proses Pemilihan dan Perhitungan diskon barang
    if (pilih >= 1 && pilih <= 3)
    {
        int index = pilih - 1;
        float potongan = harga[index] * diskon[index];
        float jumlah = harga[index] - potongan;
        
        printf("===============================================================\n");
        printf("Nama Barang:\t %s\n", namaBarang[index]);
        printf("Harga:\t\t %d\n", harga[index]);
        printf("Diskon:\t\t %.0f%%\n", diskon[index] * 100);
        printf("===============================================================\n");
        printf("Potongan Harga:\t %.0f\n", potongan);
        printf("Harga Akhir:\t %.0f\n", jumlah);
        printf("===============================================================\n");
    }
    else
    {
        printf("Pilihan tidak valid!\n");
    }

}
