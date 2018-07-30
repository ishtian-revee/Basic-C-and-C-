#include <stdio.h>

int main(){

    char message[100];
    int i = 0, j;

    printf("Enter a message: ");
    gets(message);

    while(message[i] != '\0'){

        while(!((message[i]>='A' && message[i]<='Z') || (message[i]>='a' && message[i]<='z') || message[i] == '\0' || message[i] == ' ')){

            for(j=i; message[j]!='\0'; j++){

                message[j] = message[j+1];
            }

            message[j] = '\0';
        }

        i++;
    }

    printf("\nMessage with only alphabets are: %s\n", message);
    return 0;
}
