#include <iostream>
#include <stdio.h>

using namespace std;

int main(int)
{
    unsigned char   a = 5,  // 00000101
                    b = 9;  // 00001001

    printf("a and b: %d %d\n", a, b);
    printf("a&b: %d\n", a&b);           // 00000001 = 1
    printf("a|b: %d\n", a|b);           // 00001101 = 13
    printf("a^b: %d\n", a^b);           // 00001100 = 12
    printf("~a: %d\n", a=~a);           // 11111010 = 250
    printf("a>>1: %d\n", a>>1);         // 00000010 = 125
    printf("b<<1: %d\n", b<<1);         // 00010010 = 18
}
