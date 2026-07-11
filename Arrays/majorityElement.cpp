#include <iostream>
using namespace std;

int maxElement(int arr[], int n){
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
            if(cnt >  n/2){
                return arr[i];
            }
        }
    }
}

int main() {

    int nums[] = {3,2,3};
    int n = 3;

    cout << maxElement(nums, n);

    return 0;

}
