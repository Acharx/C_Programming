#include<stdio.h>
#include<math.h>

int main(){
    float   ana_para, zaman ,faiz_orani,
            basit_faiz_miktari,
            birlesik_faiz_miktari;

    printf("Ana para miktarını giriniz");
    scanf("%f", &ana_para);

    printf("Zamanı giriniz: ");
    scanf("%f", &zaman);

    printf("Faiz oranını giriniz: ");
    scanf("%f", &faiz_orani);

    basit_faiz_miktari = (ana_para * zaman * faiz_orani) / 100;

    birlesik_faiz_miktari = ana_para * (pow((1 + faiz_orani / 100), zaman));

    printf("Basit faiz hesabı ile hesaplanan faiz miktarı = %f\n" , basit_faiz_miktari);

    printf("Bilesik faiz hesabı ile hesaplanan faiz miktarı = %f",birlesik_faiz_miktari);

    return 0;
}