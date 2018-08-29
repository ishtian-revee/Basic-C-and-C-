#include<stdio.h>

int main(){
    int i, j, k, num;
    printf("\nEnter the no. of rows: ");
    scanf("%d", &num);

    for(i=0; i<=num; i++){
        for(j=0; j<num-i; j++){
            printf(" ");
        }

        for(k=0; k<i; k++){
            printf("*");
        }
        printf("\n");
    }
}
