#include <stdio.h>

int main()
{
    int jumlahTransaksi;
    printf("Masukan jumlah transaksi: ");
    scanf("%d", &jumalahTransaksi);

    if (jumlahTransaksi <= 0)
    {
        printf("Tidak ada transaksi hari ini:");
    }
    else
    {
        int nominal, total = 0, i = 1;
        while (i <= jumlahTransaksi)
        {
            printf("Masukan nominal transaksi ke-%d: ", i);
            scanf("%d", &nominal);
            total += nominal;
            i++;
        }
        printf("Total pengeluaran hari ini: %d",total);
    }
    return 0;
}