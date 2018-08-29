#include<iostream>

using namespace std;

int main(){
    int arr[100], num;
    int element;

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

    cout << endl << endl << "Enter the element that has to be deleted: ";
    cin >> element;

    for(int i=0; i<num; i++){
        if(arr[i] == element){
            arr[i] = arr[i+1];

            for(int j=i+1; j<num; j++){
                arr[j] = arr[j+1];
            }
        }
    }

    num--;

    cout << endl << "Now after inserting the element the array is: ";
    for(int i=0; i<num; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
