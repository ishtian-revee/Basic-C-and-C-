#include <stdio.h>
#include <string.h>

int main(){

    // variables ---------------------------------------

    char str[] = "Legen... wait for it... dary!!!", word[] = "wait", rest[100];
    char *subStr;
    int strLength, wordLength, subStrLength, i, j;

    // -------------------------------------------------

    subStr = strstr(str, word);

    printf("\nFull string: %s", str);
    printf("\nWord: %s\n", word);

    strLength = strlen(str);
    wordLength = strlen(word);
    subStrLength = strlen(subStr);

    for(i=0; subStr[i]!='\0'; i++){
        subStr[i] = subStr[wordLength];
        wordLength++;
    }

    strcpy(rest, subStr);

    for(j=strLength-1; j>=(strLength-subStrLength); j--){
        str[j] = '\0';
    }

    printf("\nAfter removal of the word: %s\n", strcat(str, rest));
}
