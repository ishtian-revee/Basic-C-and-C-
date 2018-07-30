#include <iostream>
#include <stdio.h>

// macros
#define MULTIPLY(a, b) a*b
#define INCREMENT(x) ++x

using namespace std;

int main()
{
    int a = 5, b = 6;
    char *ptr = "Revee";

    // taking as: 5+2*6+2 = 19
    printf("%d \n", MULTIPLY(a+2, b+2));
    printf("%s \n\n", INCREMENT(ptr));

    // standard macros
    printf("File: %s \n", __FILE__);
    printf("Date: %s \n", __DATE__);
    printf("TIME: %s \n", __TIME__);
    printf("Line number: %d \n", __LINE__);
}
