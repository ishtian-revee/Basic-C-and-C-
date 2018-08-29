#include<stdio.h>

void reverseNum(int num){
    if(num/10){
        printf("%d", num%10);
        num = num/10;
        reverseNum(num);
    }else{
        printf("%d", num%10);
    }
}

int main(){
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nAfter reversing the number: ");
    reverseNum(num);
    printf("\n");
}
