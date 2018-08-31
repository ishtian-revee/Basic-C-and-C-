#include<stdio.h>

int main(){
    int num, arr[100], i=0, j;

    printf("\nEnter a decimal number: ");
    scanf("%d", &num);

    for(; num>0; num=num/2){
        arr[i] = num%2;
        i++;
    }

    printf("\nIn binary: ");
    for(j=i-1; j>=0; j--){
        printf("%d", arr[j]);
    }
}
