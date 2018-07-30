#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>

using namespace std;

int main(){

    // variables ---------------------------------------

    char str[100], copyStr[100], concat[] = "Yaaoo ", compare1[] = "Rev", compare2[] = "Rev";
    char ch = 'v', subStr[] = "eve";
    string upper, lower, reverseStr;
    int length;

    // -------------------------------------------------

    printf("Enter a string: ");
    scanf("%s", str);

    // string standard functions
    length = strlen(str);           // length of a string
    printf("\nLength: %d\n", length);

    upper = strupr(str);            // convert to upper case
    cout << endl << "Upper case: " << upper << endl;

    lower = strlwr(str);            // convert to lower case
    cout << endl << "Lower case: " << lower << endl;

    strcpy(copyStr, str);           // copy the string
    printf("\nCopy string: %s\n", copyStr);

    strcat(concat, str);            // concat string
    printf("\nConcat string: %s\n", concat);

    printf("\nCharacter 'o' in the string: %s\n", strchr(str, ch));     // search for a specific character in the string

    if(strcmp(compare1, compare2) == 0){    // compares strings
        printf("\ncompare1 and compare2 are equal!\n");
    }else{
        printf("\ncompare1 and compare2 are different!\n");
    }

    printf("\n'eve' in the string: %s\n", strstr(concat, subStr));      // search for a sub string in a string

    reverseStr = strrev(str);       // reverse the string
    cout << endl << "Reverse: " << reverseStr << endl;
}
