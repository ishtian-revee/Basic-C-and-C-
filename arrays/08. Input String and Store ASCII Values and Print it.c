#include<stdio.h>
#include<string.h>

int main(){
    char string[30];
    int count = 0;

    printf("\nEnter the string: ");
    scanf("%s", string);

    while(count < strlen(string)){
        printf("%c = %d\n", string[count], string[count]);
        ++count;
    }
}
