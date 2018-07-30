#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>

using namespace std;

int main(){

    // variables ---------------------------------------

    char str[100], reverseStr[100];
    int length = 0, i, j, flag;

    // -------------------------------------------------

    printf("\nEnter a string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++){
        length++;
    }

    for(i=length-1, j=0; i>=0; i--, j++){
        reverseStr[j] = str[i];
    }

    reverseStr[j] = '\0';

    printf("\nInput string: %s\n", str);
    printf("\nReverse string: %s\n", reverseStr);

    for(i=0; i<length; i++){
        if(str[i] == reverseStr[i]){
            flag = 1;
        }else{
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("\nThe string is palindrome!!!\n");
    }else{
        printf("\nThe string is not palindrome!!!\n");
    }
}
