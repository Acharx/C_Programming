#include<stdio.h>

int main(){
    char metin1[] = "Merhaba\nDünya!";

    char metin2[] = "Merhaba\tDünya!";

    char metin3[] = {'M','e','r','h','a','b','a','\0'};

    char metin4[] = "Öğretmen içeri girince \"Günaydın\" diye seslendi.";

    char metin5[] = "Ahmet\'in telefonu hiç susmuyordu.";

    char metin6[] = "\\ karakteri ters taksim veya backslash olarak anılır";

    printf("%s",metin1);
    printf("\n...\n");
    printf("%s",metin2);
    printf("\n...\n");
    printf("%s",metin3);
    printf("\n...\n");
    printf("%s",metin4);
    printf("\n...\n");
    printf("%s",metin5);
    printf("\n...\n");
    printf("%s",metin6);
    printf("\n...\n");

    return 0;
}