#include<stdio.h>

int sum(int num){
    if(num==1 || num==0){
        return 1;
    }else if(num%2==0){
        num--;
        return sum(num-2) + num*num;
    }else if(num%2==1){
        return sum(num-2) + num*num;
    }
}

int main(){
    int num, result;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    result = sum(num);
    printf("Result: %d\n", result);
}
