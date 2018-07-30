#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    for(int i=0; i<10; i++){

        if((i/2)*2==i){
            printf("%d is even\n", i);
        }else{
            printf("%d is odd\n", i);
        }
    }
}
