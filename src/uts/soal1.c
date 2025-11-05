// ...existing code...
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

int main()
{
    int ppn = 10;
    const int paketHemat = 7500, paketNasi = 10000, paketSpesial = 15000;
    int jmlPaketHemat = 0, jmlPaketNasi = 0, jmlPaketSpesial = 0;
    int pilihanPaket;
    int statusPesanan = 1;

    while (statusPesanan == 1)
    {
        printf("====== Selamat datang di Cafe ======\n");
        printf("Silahkan pilih menu paket:\n");
        printf("(1): Paket hemat : 7.500\n");
        printf("(2): Paket nasi  : 10.000\n");
        printf("(3): Paket spesial : 15.000\n");
        printf("Ketik angka untuk memilih: ");

        if (scanf("%d", &pilihanPaket) != 1)
        {
            printf("Input tidak valid.\n");
        }

        if (pilihanPaket >= 1 && pilihanPaket <= 3)
        {
            int qty = 0;
            printf("Berapa banyak anda memesan paket tersebut? ");
            if (scanf("%d", &qty) != 1 || qty <= 0)
            {
                int c;
                while ((c = getchar()) != '\n' && c != EOF)
                    ;
                printf("Jumlah tidak valid.\n");
            }
            else
            {
                if (pilihanPaket == 1)
                {
                    jmlPaketHemat += qty;
                    printf("Jumlah paket hemat sekarang: %d (subtotal: %d)\n", jmlPaketHemat, jmlPaketHemat * paketHemat);
                }
                else if (pilihanPaket == 2)
                {
                    jmlPaketNasi += qty;
                    printf("Jumlah paket nasi sekarang: %d (subtotal: %d)\n", jmlPaketNasi, jmlPaketNasi * paketNasi);
                }
                else 
                {
                    jmlPaketSpesial += qty;
                    printf("Jumlah paket spesial sekarang: %d (subtotal: %d)\n", jmlPaketSpesial, jmlPaketSpesial * paketSpesial);
                }
            }
        }
        else
        {
            printf("Pilihan paket tidak tersedia\n");
        }

        printf("Apakah anda ingin memesan lagi? (1: ya, 0: tidak, 2: batalkan pesanan): ");
        if (scanf("%d", &statusPesanan) != 1)
        {
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            statusPesanan = 0;
        }

        if (jmlPaketHemat == 0 && jmlPaketNasi == 0 && jmlPaketSpesial == 0)
        {
            statusPesanan = 2;
        }
    }

    if (statusPesanan != 2)
    {
        int subtotal = jmlPaketHemat * paketHemat + jmlPaketNasi * paketNasi + jmlPaketSpesial * paketSpesial;
        int ppnAmount = subtotal * ppn / 100;
        int totalBayar = subtotal + ppnAmount;

        char namaKasir[50] = {0};
        printf("\n--- Ringkasan Pesanan ---\n");
        printf("Paket hemat: %d x %d = %d\n", jmlPaketHemat, paketHemat, jmlPaketHemat * paketHemat);
        printf("Paket nasi: %d x %d = %d\n", jmlPaketNasi, paketNasi, jmlPaketNasi * paketNasi);
        printf("Paket spesial: %d x %d = %d\n", jmlPaketSpesial, paketSpesial, jmlPaketSpesial * paketSpesial);
        printf("Subtotal: %d\n", subtotal);
        printf("PPN %d: %d\n", ppn, ppnAmount);
        printf("Total bayar: %d\n", totalBayar);

        printf("Masukkan nama kasir: ");
        scanf(" %s", namaKasir);

        int cash = 0;
        int statusPembayaran = 1;
        while (statusPembayaran == 1)
        {
            printf("Masukkan cash: ");
            if (scanf("%d", &cash) != 1)
            {
                int c;
                while ((c = getchar()) != '\n' && c != EOF)
                    ;
                printf("Input tidak valid.\n");
                continue;
            }

            if (cash < totalBayar)
            {
                printf("Cash anda: %d\n", cash);
                printf("Total bayar: %d\n", totalBayar);
                printf("Cash anda tidak cukup. Kekurangan: %d\n", totalBayar - cash);
                printf("Ingin memasukkan lagi? (1: ya, 0: tidak, batalkan pembayaran): ");
                if (scanf("%d", &statusPembayaran) != 1)
                {
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF)
                        ;
                    statusPembayaran = 0;
                }
            }
            else
            {
                int kembalian = cash - totalBayar;
                printf("Cash anda: %d\n", cash);
                printf("Kembalian anda: %d\n", kembalian);
                printf("\n--- Struk ---\n");
                printf("Total pesanan: paket hemat(%d), paket nasi(%d), paket spesial(%d)\n", jmlPaketHemat, jmlPaketNasi, jmlPaketSpesial);
                printf("Subtotal: %d\n", subtotal);
                printf("PPN: %d\n", ppnAmount);
                printf("Total bayar: %d\n", totalBayar);
                printf("Kasir: %s\n", namaKasir);
                break;
            }
        }

        if (statusPembayaran != 0)
        printf("Terima kasih telah berkunjung,\n");
        else
        printf("Pembayaran dibatalkan\n");
    }
    else
    {
        printf("Pesanan dibatalkan\n");
    }
    getch();
    return 0;
}