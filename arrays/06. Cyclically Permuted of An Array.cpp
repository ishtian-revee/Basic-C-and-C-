#include<iostream>

using namespace std;

int main(){
    int arr[100], num, temp;

    cout << endl << "Enter the no. of elements of the array: ";
    cin >> num;

    cout << endl << "Enter the elements: ";
    for(int i=0; i<num; i++){
        cin >> arr[i];
    }

    cout << endl << "The array is: ";
    for(int i=0; i<num; i++){
        cout << arr[i] << " ";
    }

    arr[num] = arr[0];

    for(int i=0; i<num; i++){
        arr[i] = arr[i+1];
    }

    cout << endl << endl << "After cyclically permutation the array is: ";
    for(int i=0; i<num; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
