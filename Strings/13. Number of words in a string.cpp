#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>

using namespace std;

int main(){

    // variables ---------------------------------------

    char str[100];
    int counter = 0, i;

    // -------------------------------------------------

    printf("\nEnter a string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++){
        if(str[i] == ' '){
            counter++;
        }
    }

    counter++;

    printf("\nTotal words: %d\n", counter);
}

