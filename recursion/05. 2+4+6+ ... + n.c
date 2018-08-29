#include<stdio.h>

int sum(int num){
    if(num==1 || num==0){
        return 0;
    }else if(num%2==1){
        num--;
        return sum(num-2) + num;
    }else if(num%2==0){
        return sum(num-2) + num;
    }
}

int main(){
    int num, result;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    result = sum(num);
    printf("Result: %d\n", result);
}
