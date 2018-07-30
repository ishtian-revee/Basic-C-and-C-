#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){

    char str[3][100], temp[100];

    printf("Enter 3 strings:\n");

    for(int i=0; i<3; i++){

        scanf("%s[^\n]", str[i]);
    }

    for(int i=0; i<3; i++){

        for(int j=i+1; j<3; j++){

            if(strcmp(str[i], str[j]) > 0){

                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nAfter sorting in dictionary order:\n");
    for(int i=0; i<3; i++){
        printf("%s\n", str[i]);
    }
}
