#include <iostream>
using namespace std;

int searchElement(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}

int main() {

    int arr[] = {};
    int sz = 5;
    for(int i = 0; i < sz; i++){
        cout << "Enter value for index " << i << " ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter the number for target: " ;
    cin >> target;
    
    cout << searchElement(arr, sz, target);
    
    return 0;

}
