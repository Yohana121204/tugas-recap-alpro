#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

//Program ini menggunakan dua loop 'for' bersarang untuk mencetak tabel perkalian dari bilangan 2 hingga 3
//Program mencetak hasil perkalian untuk setiap kombinasi bilangan utama dan bilangan pengali 