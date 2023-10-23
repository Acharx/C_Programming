#include<stdio.h>

int main(){
    int sayi1,sayi2,toplam;
    int *isaretci1, *isaretci2;

    isaretci1 = &sayi1;
    isaretci2 = &sayi2;

    printf("iki sayi giriniz : ");
    
    // işaretçiye atama yapılacağı için & koymaya gerek yoktur.

    scanf("%d%d",isaretci1,isaretci2);
 
    toplam = *isaretci1 + *isaretci2;
    printf("Toplam = %d", toplam); 
    return 0;
}