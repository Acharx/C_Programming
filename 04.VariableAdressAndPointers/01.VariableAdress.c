#include<stdio.h>

int main(){
    char karakter = 'C';
    int tamsayi = 1;
    float gercel_sayi = 10.4f;
    long long buyuk_tamsayi = 9898989898ll;

    printf("karakter değişkeninin değeri= %c, karakter değişkeninin adresi = %u\n",karakter,&karakter);
    printf("tamsayi değişkeninin değeri = %d, tamsayi değişkeninin adresi %u\n",tamsayi,&tamsayi);
    printf("gercel_Sayi değişkeninin değeri = %f, gercel_sayi değişkeninn adresi %u\n",gercel_sayi,&gercel_sayi);
    printf("buyuk_tamsayi değişkeninin değeri = %lld, buyuk_Tamsayi değişkenin adresi = %u",buyuk_tamsayi,&buyuk_tamsayi);
    return 0;
}