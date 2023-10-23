#include<stdio.h>
#include<string.h>

/*
Belirbi bir veri grubu dışında değer alamayan değişkenlerimiz için kullanılır
Örneğin Kan Grubu
*/

enum seviyeler{ //Default olarak indexleme 0'dan başlar
    dusuk,
    orta,
    yuksek
};

enum level{ //Belir bir sayıdan başlamasını istersek ilk değişkene yazabiliriz. Diğerleri artarak gidecektir.
    cok_yuksek = 4,
    ultra_yuksek,
    son_seviye
};

enum Special{ //İstenildiği taktirde her değer ayrı ayrı tanımlanabilir.
    low = 5,
    high = 15,
    ultra = 654
};

enum Specialx{ //Farklı değişkenlere aynı değerler de atanabilir.
    loww = 4,
    highh = 54,
    ultrax = 54
};

int main(){
    enum seviyeler OdaSicakligi = dusuk;
    enum level OdaSicakligi2 = son_seviye;
    enum Special Special1 = ultra;
    enum Specialx Special2 = ultrax;
    printf("%d\n",OdaSicakligi );
    printf("%d\n",OdaSicakligi2);
    printf("%d\n",Special1);
    printf("%d",Special2);

    return 0;
}