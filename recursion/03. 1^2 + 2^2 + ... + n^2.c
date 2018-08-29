#include<stdio.h>

int sum(int num){
    if(num==0 || num==1){
        return 1;
    }else{
        return sum(num-1) + num*num;
    }
}

int main(){
    int num, result;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    result = sum(num);
    printf("Result: %d\n", result);
}
