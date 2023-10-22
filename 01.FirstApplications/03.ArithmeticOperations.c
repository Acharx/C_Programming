#include<stdio.h>

int main(){
    int sayi1,sayi2;
    int toplam,fark,carpim,mod;
    float bolum;

    printf("Lütfen iki sayı giriniz: ");
    scanf("%d%d", &sayi1 , &sayi2 );

    toplam = sayi1 + sayi2;
    fark = sayi1 - sayi2;
    carpim = sayi1 * sayi2;
    bolum = (float)sayi1 / sayi2;
    mod = sayi1 % sayi2;

    printf("Toplam = %d" , toplam);
    printf("Fark = %d" , fark);
    printf("Çarpım = %d", carpim);
    printf("Bölüm = %f", bolum);
    printf("Kalan = %d", mod);


    return 0;
}