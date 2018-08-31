#include<stdio.h>

int main(){
    int num, i, j;

    printf("\nEnter the number of rows: ");
    scanf("%d", &num);

    printf("\n");
    for(i=1; i<=num; i++){
        for(j=1; j<=num-i; j++){
            printf(" ");
        }

        for(j=1; j<=i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }
}
