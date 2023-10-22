#include<stdio.h>

int main(){
    int a = 35;         //10'luk sayı düzeni(decimal)
    int b = 0b00100011; //2'lik sayı düzeni(binary)
    int c = 0x23;       //16'lık sayı düzeni(hexadecimal)

    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);

    return 0;
}