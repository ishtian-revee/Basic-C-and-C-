#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int arr[10], even[10], odd[10];
    int evenIndex = 0, oddIndex = 0;

    cout << endl << "Enter 5 numbers: ";
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    cout << endl << "The array is: ";
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";

        if(arr[i]%2==0){
            even[evenIndex] = arr[i];
            evenIndex++;
        }else{
            odd[oddIndex] = arr[i];
            oddIndex++;
        }
    }

    cout << endl << "The even numbers are: ";
    for(int i=0; i<evenIndex; i++){
        cout << even[i] << " ";
    }

    cout << endl << "The odd numbers are: ";
    for(int i=0; i<oddIndex; i++){
        cout << odd[i] << " ";
    }

    cout << endl;
}
