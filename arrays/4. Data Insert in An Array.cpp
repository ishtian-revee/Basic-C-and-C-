#include<iostream>

using namespace std;

int main(){
    int arr[100], num;
    int element, position;

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

    cout << endl << endl << "Enter the element that has to be inserted: ";
    cin >> element;

    cout << endl << "Enter the position(1-5) where the element will be inserted: ";
    cin >> position;

    for(int i=num; i>=position; i--){
        arr[i] = arr[i-1];
    }

    num++;
    arr[position-1] = element;

    cout << endl << "Now after inserting the element the array is: ";
    for(int i=0; i<num; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
