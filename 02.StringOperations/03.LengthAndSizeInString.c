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