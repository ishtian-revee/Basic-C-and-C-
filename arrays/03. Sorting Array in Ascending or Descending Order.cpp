#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int arr[10];
    int temp;

    cout << endl << "Enter the values of the array: ";
    for(int i=0; i<10; i++){
        cin >> arr[i];
    }

    cout << endl << "The values are: ";
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }

    // ascending order
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << endl << endl << "The values are in ascending order: ";
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // descending order
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(arr[j] > arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << endl << "The values are in descending order: ";
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
