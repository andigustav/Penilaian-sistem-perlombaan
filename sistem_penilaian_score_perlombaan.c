#include <stdio.h>

enum KategoriPrestasi {
    JUARA_UTAMA,
    JUARA_KEDUA,
    JUARA_KETIGA,
    GAGAL
};

int main() {
    char namaPeserta[50];
    int skor;
    enum KategoriPrestasi prestasi;

    printf("=== SISTEM PENILAIAN SKOR PERLOMBAAN ===\n");

    printf("Masukkan nama peserta: ");
    scanf("%49s", namaPeserta);

    printf("Masukkan skor (0-100): ");
    scanf("%d", &skor);

    if (skor < 0 || skor > 100) {
        printf("Skor tidak valid!\n");
        return 0;
    }

    if (skor >= 85) {
        prestasi = JUARA_UTAMA;
    } else if (skor >= 75) {
        prestasi = JUARA_KEDUA;
    } else if (skor >= 60) {
        prestasi = JUARA_KETIGA;
    } else {
        prestasi = GAGAL;
    }

    printf("\n=== HASIL PERLOMBAAN ===\n");
    printf("Nama peserta : %s\n", namaPeserta);
    printf("Skor         : %d\n", skor);

    switch (prestasi) {
        case JUARA_UTAMA:
            printf("Kategori     : Juara Utama\n");
            break;
        case JUARA_KEDUA:
            printf("Kategori     : Juara Kedua\n");
            break;
        case JUARA_KETIGA:
            printf("Kategori     : Juara Ketiga\n");
            break;
        case GAGAL:
            printf("Kategori     : Gagal\n");
            break;
    }

    if (skor >= 75) {
        printf("Status       : LOLOS\n");
    } else {
        printf("Status       : TIDAK LOLOS\n");
    }

    return 0;
}