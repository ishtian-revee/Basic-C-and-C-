#include <stdio.h>

int main(){

    char message[100], ch;
    int counter = 0, i = 0;

    printf("Enter a message: ");
    gets(message);

    printf("\nEnter the character to find the frequency: ");
    ch = getchar();

    while(message[i] != '\0'){

        if(message[i] == ch){
            counter++;
        }

        i++;
    }

    printf("\nNumber of frequency for %c are: %d\n", ch, counter);
}

