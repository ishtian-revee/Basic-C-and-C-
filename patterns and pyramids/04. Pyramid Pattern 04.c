#include<stdio.h>

int main(){
    int i, j, k, num;
    printf("\nEnter the no. of rows: ");
    scanf("%d", &num);

    printf("\n");
    for(i=0; i<=num; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }

        for(k=num; k>i
        ; k--){
            printf("*");
        }
        printf("\n");
    }
}
