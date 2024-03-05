#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}

//Program diatas mencetak nama dan usia beberapa orang dengan menggunakan array untuk menyimpan nama dan usia.
//Program diatas mendeklarasikan konstanta untuk jumlah maksimum orang dan panjang namanya.
//Mendeklarasikan dan menginisialisasi array untuk nama dan usia
//Mencetak header tabel,mencetak pemisah,melakukan iterasi melalui array
//Mengembalikan 0 sebagai simbol program berakhir.