#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target){
    vector<int> ans;
    for(int i = 0; i < arr.size() - 1; i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

vector<int> pairSumOpt(vector<int> arr, int target){
    vector<int> ans;
    int n = arr.size();
    int start = 0, end = n-1;
    while(start < end){

        if(arr[start] + arr[end] < target) {
            start++;
        } else if(arr[start] + arr[end] > target) {
            end--;
        } else if(arr[start] + arr[end] == target){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    
    }
}

int main() {

    vector<int> arr= {2, 7, 11, 15};
    int n = 4;
    int target = 26;

    // if question was to find consecutive numbers as a pair:
    // for(int i = 0; i < n - 1; i++){
    //     if(arr[i] + arr[i + 1] == target){
    //         cout << arr[i] << " " << arr[i+1];

    //     }
    // }

    // vector<int> ans = pairSum(arr, target);
    // cout << ans[0] << " " << ans[1] <<endl;

    vector<int> ans = pairSumOpt(arr, target);
    cout << ans[0] << "," << ans[1] << endl;
    
    return 0;

}
