#include <stdio.h>
#include <string.h>

int main() {
    // �ok boyutlu dizi: 3 ��renci, her biri 3 harfli not kodlar�
    char sinifListesi[3][20] = {"Ayse", "Mehmet", "Zeynep"};
    int puanlar[3][2] = { {90, 85}, {70, 60}, {95, 100} };

    char arananIsim[20];
    printf("Ogrenci adi girin: ");
    scanf("%s", arananIsim);

    int bulundu = 0;

    // Arama ve yazd�rma
    for (int i = 0; i < 3; i++) {
        if (strcmp(sinifListesi[i], arananIsim) == 0) {
            printf("%s bulundu. Notlar: %d, %d\n", sinifListesi[i], puanlar[i][0], puanlar[i][1]);
            bulundu = 1;
            break;
        }
    }

    if (!bulundu) {
        printf("Ogrenci listede bulunamadi.\n");
    }

    // 2D dizinin t�m elemanlar�n� yaz
    printf("\nTum Sinif Listesi:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s - Notlar: %d, %d\n", sinifListesi[i], puanlar[i][0], puanlar[i][1]);
    }

    return 0;
}
