#include<stdio.h>

// (22, 111) same digits are palindrome

int main(){
    int num, temp, rem, rev=0;

    printf("\nEnter a number to find if it is palindrome or not: ");
    scanf("%d", &num);

    temp = num;
    for(; num!=0; num=num/10){
        rem = num%10;
        rev = rev*10+rem;
    }

    if(temp == rev){
        printf("\n%d is palindrome!\n", temp);
    }else{
        printf("\n%d is not palindrome!\n", temp);
    }
}
