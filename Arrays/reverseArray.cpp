#include <iostream>
using namespace std;

int reverseArray(int arr[], int size){
    int n = size/2;
    for(int i = 0; i < n; i++){
        swap(arr[i], arr[size - i - 1]);
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void reverseTwoPointers(int arr[], int size){
    int start = 0, end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

int main() {

    int arr[8] = {};
    for(int i = 0; i < 8; i++){
        cout << "Enter value for index " << i << ": ";
        cin >> arr[i];
    }

    // cout << "Reverse Array" << reverseArray(arr,8) << endl;

    reverseTwoPointers(arr,8);
    for(int i = 0; i < 8; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}
