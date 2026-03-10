#include <stdio.h>

int main() {
    int jumlah_komputer, jumlah_peripheral;
    long long biaya_dasar = 0, biaya_tambahan = 0, total_biaya;
    char jam_kerja, antar_jemput;

    printf("Masukkan jumlah komputer: ");
    scanf("%d", &jumlah_komputer);
    printf("Masukkan jumlah peripheral: ");
    scanf("%d", &jumlah_peripheral);
    printf("Apakah dalam jam kerja? (y/n): ");
    scanf(" %c", &jam_kerja);
    printf("Apakah pelanggan antar-jemput sendiri? (y/n): ");
    scanf(" %c", &antar_jemput);

    if (jumlah_komputer == 1 || jumlah_komputer == 2) {
        biaya_dasar = 750000;
        biaya_tambahan = 0;
    } 
    else if (jumlah_komputer >= 3 && jumlah_komputer <= 10) {
        biaya_dasar = 1500000;
        biaya_tambahan = 150000 * jumlah_peripheral;
    } 
    else if (jumlah_komputer > 10) {
        biaya_dasar = 7500000;
        biaya_tambahan = 150000 * jumlah_peripheral;
    }

    if (jam_kerja == 'n' || jam_kerja == 'N') {
        biaya_dasar = biaya_dasar * 2;
    }

    if (antar_jemput == 'y' || antar_jemput == 'Y') {
        biaya_dasar = biaya_dasar * 0.5;
    }

    total_biaya = biaya_dasar + biaya_tambahan;

    printf("-------------------------------\n");
    printf("Total Biaya Servis: Rp %lld\n", total_biaya);
    printf("-------------------------------\n");

    return 0;
}