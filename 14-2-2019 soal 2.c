#include<stdio.h>


int main()
{
    char pilihan;
    int jam;
    int biaya;
    int mobil = 4000;
    int motor = 3000;

    printf("menggunakan kendaraan mobil\n");
    printf("menggunakan kendaraan motor\n");
    printf("pilihlah jenis kendaraan (a/b) : "); scanf("%c", &pilihan);
        switch(pilihan){
        case 'a':
            printf("\nMasukan lama jam: "); scanf("%d", &jam);
            if(jam<2){
                biaya = mobil;
                printf("\nTotal Biaya : Rp.%d", biaya);
            }else if (jam < 5){
                biaya = mobil + (3000 * (jam - 2));
                printf("\nTotal Biaya : Rp.%d", biaya);
            }else{
                biaya = 13000 + (3000 * (jam - 5));
                printf("\nTotal Biaya : Rp.%d", biaya);
            }
        break;
        case 'b':
            printf("\nMasukan lama jam: "); scanf("%d", &jam);
            if(jam < 2){
                biaya = motor;
                printf("\nTotal Biaya : Rp.%d", biaya);
            }else if (jam < 5){
                biaya = motor + (2000 * (jam - 2));
                printf("\nTotal Biaya : Rp.%d", biaya);
            }else{
                biaya = 9000 + (2000 * (jam - 5));
                printf("\nTotal Biaya : Rp.%d", biaya);
            }
        break;
        }
}
