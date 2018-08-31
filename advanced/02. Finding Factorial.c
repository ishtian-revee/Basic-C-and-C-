#include<stdio.h>

int main(){
    int num, fact = 1, i;

    printf("\nEnter a number to find the factorial of it: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        fact = fact * i;
    }

    printf("\nFactorial of %d is: %d\n", num, fact);
}
