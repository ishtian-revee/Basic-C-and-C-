#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    for(int i=0; i<10; i++){

        if(i&1){
            printf("%d is odd\n", i);
        }else{
            printf("%d is even\n", i);
        }
    }
}
