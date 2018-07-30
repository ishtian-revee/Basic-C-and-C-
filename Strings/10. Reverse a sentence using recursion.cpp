#include <iostream>
#include <stdio.h>

using namespace std;

void reverseSentence();

int main(){

    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence(){

    char ch;
    scanf("%c", &ch);

    if(ch != '\n'){

        reverseSentence();
        printf("%c", ch);
    }
}
