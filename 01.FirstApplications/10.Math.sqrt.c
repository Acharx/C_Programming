#include<stdio.h>
#include<math.h>

int main(){
    double sayi, karekok;

    printf("Karekökü hesaplanacak sayıyı giriniz :" );
    scanf("%lf", &sayi);

    karekok = sqrt(sayi);

    printf("%.2lf sayısının karekökü = %.2lf", sayi,karekok);

    return 0;
}