#include<stdio.h>

int main(){
    int num, first = 0, second = 1, next, i;

    printf("\nEnter the number of terms: ");
    scanf("%d", &num);

    printf("\nThe %d terms of fibonacci series are: ", num);
    for(i=0; i<num; i++){
        if(i<=1){
            next = i;
        }else{
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
}
