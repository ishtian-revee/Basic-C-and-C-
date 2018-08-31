#include<stdio.h>

int main(){
    int num, i;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nPrime factors are: ");
    for(i=2; i<=num;){
        if(num%i==0){
            num = num/i;
            printf(" %d", i);
        }else{
            i++;
        }
    }
    printf("\n");
    return 0;
}
