#include <stdio.h>

int main()
{
    int jarak,waktu,kecepatan;

    //Menghitungan kecepatan
    printf("Masukan jarak dan waktu:");
    scanf("%d %d", &jarak, &waktu);
    float v = (float)jarak/waktu;

    //Menghitung jarak
    printf("Masukan jarak dan waktu:");
    scanf("%d %d", &kecepatan, &waktu);
    float s = (float)kecepatan * waktu;

    // Mengitung waktu
    printf("Masukkan jarak dan kecepatan: ");
    scanf("%d %d", &jarak, &kecepatan);
    float t = (float)jarak / kecepatan;

    //Menampilkan hasil perhitungan
    printf("%.2f\n", v);
    printf("%.2f\n", s);
    printf("%.2f\n", t);
    
    return 0;
}