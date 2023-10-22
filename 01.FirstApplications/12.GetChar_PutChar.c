#include<stdio.h>

int main(){
    char ogrenci_notu;
    printf("Ogrenci notu giriniz: ");

    ogrenci_notu = getchar();
    //getchar() komutu ile notu al ve ogrenci_notu değişkeninde sakla

    putchar(ogrenci_notu);
    //putchar() komutu ile notu çıktı olarak ver
    
    /*Sayı girildiğinde bunu sayı olarak değil
    karakter olarak alır */
    
    return 0;
}