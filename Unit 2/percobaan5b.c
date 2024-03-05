#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

//Program diatas merupakan program bahasa C yang mencetak tabel perkalian sederhana dari bilangan 2 hingga 3
//Menggunakan dua loop 'while' bersarang.
//Program mencetak bilangan utama dan hasil perkalian untuk setiap bilangan pengali.
//Selesai mencetak hasil perkalian untuk satu bilangan utama.
//Program menambah nilai bilangan utama dan mereset bilangan pengali sebelum melanjutkan ke iterasi berikutnya.
//Program ini berakhir setelah semua bilangan untama telah diproses