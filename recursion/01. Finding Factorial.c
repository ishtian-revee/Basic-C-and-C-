#include<stdio.h>

int fact(int num){
    if(num==0 || num==1){
        return 1;
    }else{
        return (num*fact(num-1));
    }
}

int main(){
    int num, result;

    printf("\nEnter an integer value: ");
    scanf("%d", &num);

    result = fact(num);
    printf("\nFactorial of %d is: %d\n", num, result);
}
