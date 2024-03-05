#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}

//Program diatas merupakan program bahasa C yang mencetak tabel perkalian dari bilangan 2 hingga 3.
//Program menggunakan loop 'do-while' untuk mencetak hasil perkalian dari setiap bilangan utama dan pengali.
//Mengulang proses pencetakan untuk setiap bilangan utama,kemudian pindah ke bilangan utama berikutnya.
//Program mengakhiri eksekusi ketika semua bilangan utama telah diproses.