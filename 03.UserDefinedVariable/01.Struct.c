#include<stdio.h>
#include<string.h>

struct PersonelBilgisi{
    int yas;
    float maas;
    char isim[30];
    char cinsiyet[6];
};

int main(){
    struct PersonelBilgisi personel1;
    struct PersonelBilgisi personel2 = {33,8800,"Ayşe Ayşeoğlu","Kadın"};

    struct PersonelBilgisi personel2_kopya;
    personel2_kopya=personel2;

    //String ifadeler doğrudan atama ile yazılamaz. Strcpy() kullanılmalıdır.

    strcpy(personel1.isim,"Mehmet");
    strcpy(personel1.cinsiyet,"Erkek");

    personel1.yas=20;
    personel1.maas=4000;

    printf("Personelin Adı: %s\n",personel1.isim);
    printf("Personelin Cinsiyeti: %s\n",personel1.cinsiyet);
    printf("Personelin Yaşı: %d\n",personel1.yas);
    printf("Personelin Maaşı: %lf\n",personel1.maas);

    printf("\n........\n");

    printf("Personelin Adı: %s\n",personel2.isim);
    printf("Personelin Cinsiyeti: %s\n",personel2.cinsiyet);
    printf("Personelin Yaşı: %d\n",personel2.yas);
    printf("Personelin Maaşı: %lf\n",personel2.maas);

    printf("\n........\n");

    printf("Personelin Adı: %s\n",personel2_kopya.isim);
    printf("Personelin Cinsiyeti: %s\n",personel2_kopya.cinsiyet);
    printf("Personelin Yaşı: %d\n",personel2_kopya.yas);
    printf("Personelin Maaşı: %lf\n",personel2_kopya.maas);

    printf("\n........\n");

    return 0;
}