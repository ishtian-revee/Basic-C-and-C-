#include<stdio.h>

int main(){
    int num, i, j;

    printf("\nEnter the number of rows: ");
    scanf("%d", &num);

    printf("\n");
    for(i=num; i>0; i--){
        for(j=num-i; j>0; j--){
            printf(" ");
        }

        for(j=1; j<=i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }
}

