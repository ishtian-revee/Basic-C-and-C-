#include <stdio.h>

int main(){

    char message[100];
    int i = 0;

    printf("Enter a string: ");
    gets(message);

    for(i=0; message[i]!='\0'; i++){}

    printf("Length of the string: %d\n", i);
}
