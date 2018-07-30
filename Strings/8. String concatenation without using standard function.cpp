#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    char str1[100], str2[100];
    int i, j, k;

    printf("Enter string 1: ");
    gets(str1);

    printf("\nEnter string 2: ");
    gets(str2);

    for(i=0; str1[i]!='\0'; i++);

    for(j=i, k=0; str2[j]!='\0'; j++, k++){

        str1[j] = str2[k];
    }

    printf("\nAfter concatenation: %s\n", str1);
}

