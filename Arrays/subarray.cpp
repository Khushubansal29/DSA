#include <iostream>
#include <vector>
using namespace std;

int main() {

    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;
    // for(int start = 0; start < n; start++){
    //     for(int end = start; end < n; end ++){
    //         for(int i = start; i <= end; i++){
    //             cout << arr[i] << "";
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
    
    // int maxSum = INT16_MIN;
    // for(int start = 0; start < n; start++){
    //     int currentSum = 0;
    //     for(int end = start; end < n; end ++){
    //         currentSum += arr[end];
    //         maxSum = max(currentSum, maxSum);
    //     }
    // }
    //  cout << maxSum;

    // kadane's algorithm
    int maxSum = INT16_MIN;
    int currSum = 0;
    for(int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }

    cout << maxSum << endl;
    
    return 0;

}
