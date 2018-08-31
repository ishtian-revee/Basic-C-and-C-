#include<stdio.h>

int main(){
    int num, i, sum=0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for(i=1; i<num; i++){
        if(num%i==0){
            sum+=i;
        }
    }

    if(sum==num){
        printf("\n%d is a perfect number.\n", num);
    }else{
        printf("\n%d is not a perfect number.\n", num);
    }
}
