#include<stdio.h>

int main()
{
    printf("Program Latihan IF\n");

    //if digunakan untuk menyeleksi aksi atau hasil yang dimputkan oleh user

    ////////////////////////////////////////////////////////////////////////
    //bagian 1. printf
    printf("bagian 1\n");
    //if bisa digunakan untuk menyeleksi pilihan
    //contoh:

    //deklarasi
    int pilihan;

    //input data
    printf("silahkan masukan pilihan anda. angka 1-3 : ");scanf("%d", &pilihan);

    //seleksi dengan if
    if (pilihan == 1){
        printf("anda memilih 1\n");
    }
    else if(pilihan == 2){
        printf("anda memilih 2\n");
    }
    else if(pilihan == 3){
        printf("anda memilih 3\n");
    }
    else{
        printf("pilihan nyo. 1-3 nyo keo\n");
    }
    //seleksi dengan Switch
    switch(pilihan){
        case 1:
            printf("anda memilih 1\n");
            break;
        case 2:
            printf("anda memilih 2\n");
            break;
        case 3:
            printf("anda memilih 3\n");
            break;
        default:
            printf("pilihan nyo. 1-3 nyo keo\n");
            break;
    }

    //if kasus tidak tunggal
    int angka;
    printf("Silahkan masukan angka: "); scanf("%d",&angka);
    if(angka >= 0 && angka <= 50){ //angka 1 - 50
        printf("Nilai kamu kurang. tu mangko e , baraja!!\n");
    } else if(angka >50 && angka <=100){ //angka 50 - 100
        printf("Nilai kamu bagus");
    } else { //angka 101 - seterus nya
        printf("Angka diluar jangkauan");
    }

    //masukan nilai
    //0-20 = E if
    //21-40 = D else if
    //41-60 = C else if
    //61-80 = B else if
    //81-100 = A else
    //MASUKAN NILAI, LALU TAMPILKAN KATEGORI UNTUK NILAI TERSEBUT

    int nilai;
    printf("silahkan masukan nilai. 1-100 :");scanf("%d", &nilai);
    if(nilai >= 0 && nilai <= 20){
        printf("maka nilai kamu E\n");
    }else if(nilai >= 21 && nilai <=40){
        printf("maka nilai kamu D\n");
    }else if(nilai >= 41 && nilai <= 60){
        printf("maka nilai kamu C\n");
    }else if(nilai >= 61 && nilai <= 80){
        printf("maka nilai kamu B\n");
    }else if(nilai >= 81 && nilai <= 100){
        printf("maka nilai kamu A\n");
    }else {
        printf("nilai tidak memuaskan sekaleee");
    }

    //masukan nilai
    //jika nilai besar dari 0 = bilangan positif. contoh : 10 if
    //jika nilai kecil dari 0 = bilangan negatif. contoh : -4 else

    int bilangan;
    printf("silahkan masukan bilangan : ");scanf("%d", &bilangan);
    if(bilangan  >= 0){ //0 - seterusnya
        printf("maka bilangan positif");
    }else{ //-1 - min seterusnya
        printf("maka bilangan negatif");
    }









}
