#include<stdio.h>

int main(){
    int sayi = 10;
    int *isaretci;

    isaretci = &sayi;

    printf("sayi değişkeninin adresi : %d\n",&sayi);
    printf("sayi değişkeninin içeriği : %d\n",sayi);

    printf("işaretci değişkeninin adresi = %d\n",&isaretci);
    printf("isaretci değişkeninin içeriği = %d\n",isaretci);
    printf("işaretci değişkeninin işaret ettiği değer = %d\n",*isaretci);

    return 0;
}