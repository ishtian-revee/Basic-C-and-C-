#include<stdio.h>
#include<string.h>

int main(){
    char names [10][5], temp[5];    // first index for string length, second index for length of the array
    int i, j, num;

    printf("\nEnter the no. of names: ");
    scanf("%d", &num);

    printf("\nInsert the names: ");
    for(i=0; i<num; i++){
       scanf("%s", names[i]);
    }

    printf("\nThe names are: ");
    for(i=0; i<num; i++){
       printf("%s ", names[i]);
    }

    for(i=0; i<num; i++){
        for(j=i+1; j<num; j++){
            if(strcmp(names[i], names[j]) > 0){
                strcpy(temp, names[j]);
                strcpy(names[j], names[i]);
                strcpy(names[i], temp);
            }
        }
    }

    printf("\n\nAfter sorting the names are: ");
    for(i=0; i<num; i++){
       printf("%s ", names[i]);
    }
    printf("\n");
}
