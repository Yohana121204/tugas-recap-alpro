#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi);
    printf("%.1f\n", phi);
    printf("%.2f\n", phi);
    printf("%.3f\n", phi);
    printf("%.4f\n", phi);
    printf("%.5f", phi);
    return 0;
}

//%f: Mencetak nilai float phi dengan presisi default, yang biasanya mencetak 6 digit setelah titik desimal.
//%.1f: Mencetak phi dengan presisi satu digit setelah titik desimal.
//%.2f: Mencetak phi dengan presisi dua digit setelah titik desimal.
//%.3f: Mencetak phi dengan presisi tiga digit setelah titik desimal.
//%.4f: Mencetak phi dengan presisi empat digit setelah titik desimal.
//%.5f: Mencetak phi dengan presisi lima digit setelah titik desimal.
//Jadi menggunakan titik pada angka desimal memungkinkan untuk mengontrol jumlah digit akan dicetak setelah titik desimal