#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int arr[5] = {32, 81, 73, 59, 48};
    int largest, secondLargest, temp;

    largest = arr[0];
    secondLargest = arr[1];

    if(secondLargest > largest){
        temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }

    for(int i=2; i<5; i++){
        if(arr[i] >= largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }

    cout << endl << "Largest: " << largest << endl;
    cout << "Second Largest: " << secondLargest << endl;
}
