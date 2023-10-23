# C_Programming

## 1.First Application

## 2.String Operations

### sizeof() 
```c

int main() {
  char x = 'k';
  char y = 'ü';

  printf("%d\n", sizeof(x));
  printf("%d\n", sizeof(y));

  return 0;
}

//Output
//1
//2

```


Eğer standart tanımda mevcut olmayan türkçe karakter gibi karakterler standart tanım kümesinde yer almazlar. Bu yüzden standart karakterler gibi 1 byte değil , 2 byte ile depolanırlar.

### strlen() ve sizeof() farkı

```c
#include <stdio.h>
#include <string.h>

int main(){
    char ingiliz_alfabesi[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d",strlen(ingiliz_alfabesi));
    printf("\n...\n");
    printf("%d",sizeof(ingiliz_alfabesi));
    printf("\n..........\n");

    char turk_alfabesi[] = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVZY";
    printf("%d",strlen(turk_alfabesi));
    printf("\n...\n");
    printf("%d",sizeof(turk_alfabesi));
    printf("\n..........\n");

    char deneme[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d",strlen(deneme));
    printf("\n...\n");
    printf("%d",sizeof(deneme));
    printf("\n..........\n");

    return 0;
}
```

```c
26
...
27
..........
35
...
36
..........
26
...
50
..........

```

strlen() fonksiyonu bir karakter dizisi içerisinde bulunan ve bizim gördüğümüz karakterleri sayar.Bunun aksine sizeof() bizim görmediğimiz ve diziyi bitiren '\0' karakterini de sayar.
Son örnekte ise srtlen() yine bizim gördüğümüz karakterleri sayar.Fakat sizeof() bellekte ayırdığımız 50 bytle'lık yeri gösterir.

### strcat()
```c
#include<stdio.h>
#include<string.h>

int main(){
    char metin1[20] = "Merhaba ";
    char metin2[] ="Dünya!";
    char metin3[20];

    strcat(metin1,metin2);

    printf("%s",metin1);
    printf("\n...\n");
    

    return 0;
}
```
```c
Merhaba Dünya!
...
```
"String Concatenate" anlamına gelir.Fonksiyon içine yazılan iki string birleştirilip ilk stringe kaydedilir.

### strcpy()

```c
#include<stdio.h>
#include<string.h>

int main(){
    char metin1[20] = "Merhaba ";
    char metin2[] ="Dünya!";
    char metin3[20];

    strcpy(metin3,metin1);
    
    printf("%s",metin3);
    printf("\n...\n");
    
    return 0;
}
```
```c
Merhaba Dünya!
...
```
Fonksiyon içine  yazılan ikinci string'i birinci string'in içine kopyalar.

### strcmp()
```c
#include<stdio.h>
#include<string.h>

int main(){
    char metin1[20] = "Merhaba ";
    char metin2[] ="Dünya!";
    char metin3[20];

    strcat(metin1,metin2);

    printf("%s",metin1);
    printf("\n...\n");

    strcpy(metin3,metin1);
    
    printf("%s",metin3);
    printf("\n...\n");

    /*
        Mevcut Durum;
        metin1 = "Merhaba Dünya!"
        metin2 = "Dünya!";
        metin3 = "Merhaba Dünya!";
    */

   printf("%d\n",strcmp(metin1,metin3)); 
   printf("\n...\n");
   printf("%d\n",strcmp(metin1,metin2)); 
   printf("\n...\n");
   printf("%d\n",strcmp(metin2,metin1)); 
   printf("\n...\n");
    return 0;
}
```
```c
Merhaba Dünya!
...
Merhaba Dünya!
...
0  ==> strcmp(metin1,metin3) = Birbirlerine eşit

...
1 ==> strcmp(metin1,metin2) = Eşit Değil

...
-1 ==> strcmp(metin2,metin1) = Eşit Değil

...
```
