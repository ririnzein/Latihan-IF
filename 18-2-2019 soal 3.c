#include<stdio.h>

int main()
{
    char pilihan;
    int hari;
    int biaya;
    int villa = 500000;
    int makanan = 50000;

    printf("menginap di villa\n");
    printf("persediaan makanan\n");
    printf("pilihan harga penginapan (a/b) :");scanf("%c", &pilihan);
        switch(pilihan){
        case'a' :
            printf("\nMasukan lama hari :");scanf("%d", &hari);
            if(hari < 2){
            biaya = villa;
            printf("\nTotal Biaya : Rp.%d", biaya);
        }else if (hari< 5){
            biaya = villa + (500000 * (hari - 2));
            printf("\nTotal Biaya : Rp.%d", biaya);
        }else{
            biaya = 1500000 + (500000 * (hari - 5));
            printf("\nTotal Biaya : Rp.%d", biaya);
        }
        break;
        case 'b':
            printf("\nmasukan biaya : ");scanf("%d", &biaya);
            if(biaya < 2){
                biaya = makanan;
                printf("\nTotal Biaya : Rp.%d", biaya);
            }else if (hari < 5){
                biaya = makanan + (50000 * (hari - 2));
                printf("\nTotal Biaya : Rp.%d", biaya);
            }else{
                biaya = 100000 + (500000 * (hari - 5));
                printf("\nTotal biaya : Rp.%d", biaya);
            }
            break;
        }
}
