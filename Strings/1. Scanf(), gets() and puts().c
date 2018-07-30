#include <stdio.h>

int main(){

    char name[50], id[50];

    printf("Name: ");
    gets(name);         // takes a line of string

    printf("\nName : ");
    puts(name);

    printf("\nId: ");
    scanf("%s", id);    // takes only single string/word

    printf("\nId : %s\n", id);
}
