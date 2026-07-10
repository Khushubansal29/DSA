#include <iostream>
using namespace std;

void swapElements(int arr[]){
    int smallest = INT16_MAX;
    int largest = INT16_MIN;
    for(int i = 0; i < 5; i++){
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);

        swap(smallest, largest);

    }

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
}

int main() {

    int arr[5];
    for(int i = 0; i < 5; i++){
        cout << "Enter value: " << endl;
        cin >> arr[i];
    }

    // method 1:
    // int largest = arr[0];
    // for(int i = 1; i < 5; i++){
    //     largest = max(largest, arr[i]);
    // }

    // int smallest = arr[0];
    // for(int i = 1; i < 5; i++){
    //     smallest = min(smallest, arr[i]);
    // }


    // method 2:
    // int smallest = INT16_MAX;
    // for(int i = 1; i < 5; i++){ 
    //     smallest = min(smallest, arr[i]);
    // }

    // cout << "Largest element is: " << largest << endl;
    // cout << "Smallest element is: " << smallest << endl;

    // int smallest = INT16_MAX;
    // int largest = INT16_MIN;
    // for(int i = 0; i < 5; i++){
    //     smallest = min(smallest, arr[i]);
    //     largest = max(largest, arr[i]);

    // }

    // calculate sum of all numbers of an array
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    // cout << "Sum is " << sum << endl;

    // calculate product of all numbers of an array
    int product = 1;
    for(int i = 0; i < 5; i++){
        product *= arr[i];
    }
    // cout << "Product is " << product << endl;

    // swap min and max number of an array
    swapElements(arr);

    // waf to print all the unique values in an array
    // waf to print intersection of 2 arrays

    return 0;
} 
