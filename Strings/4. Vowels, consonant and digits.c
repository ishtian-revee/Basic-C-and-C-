#include <stdio.h>

int main(){

    char message[100];
    int vowels = 0, consonant = 0, digits = 0, i = 0;

    printf("Enter a message: ");
    gets(message);

    while(message[i] != '\0'){

        if(message[i] == 'A' || message[i] == 'a' ||
           message[i] == 'E' || message[i] == 'e' ||
           message[i] == 'I' || message[i] == 'i' ||
           message[i] == 'O' || message[i] == 'o' ||
           message[i] == 'U' || message[i] == 'u'){

            vowels++;
        }else if((message[i]>='A' && message[i]<='Z') || (message[i]>='a' && message[i]<='z')){

            consonant++;
        }else if((message[i]>='0' && message[i]<='9')){

            digits++;
        }

        i++;
    }

    printf("\nVowels: %d\n", vowels);
    printf("\nConsonant: %d\n", consonant);
    printf("\nDigits: %d\n", digits);
}
