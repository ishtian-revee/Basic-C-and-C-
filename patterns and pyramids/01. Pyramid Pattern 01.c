#include<stdio.h>

int main(){
    int i, j, num;
    printf("\nEnter the no. of rows: ");
    scanf("%d", &num);

    printf("\n");
    for(i=0; i<num; i++){
        for(j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
