#include<stdio.h>

int main(){

    char str1[100], str2[100];
    int i=0;

    printf("Enter a string: ");
    gets(str1);

    for(i=0; str1[i]!='\0'; i++){

        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("\nString 1: %s\n", str1);
    printf("\nString 2: %s\n", str2);

    return 0;
}
