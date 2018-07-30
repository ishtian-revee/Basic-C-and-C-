#include <iostream>
#include <stdio.h>

using namespace std;

int main(int)
{
    static int i = 10;

    if(--i){

        printf("%d ", i);
        main(1);
    }
}

//int main(void)
//{
//    static int i = 5;
//
//    if(--i){
//
//        printf("%d ", i);
//        main();
//    }
//}
