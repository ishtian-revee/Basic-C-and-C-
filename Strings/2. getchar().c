#include <stdio.h>

int main(){

    char name[100], ch;
    int i = 0;

    while(ch != '\n'){  // will break if enter input

        ch = getchar(); // getting single character each iteration
        name[i] = ch;
        i++;
    }

    name[i] = '\0';     // inserting null character at the end

    printf("Name: %s\n", name);
}
