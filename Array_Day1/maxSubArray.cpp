#include<bits/stdc++.h>
using namespace std;
int maxSumSubarray(vector<int> nums) {
    int globalMaxSum = nums[0], currMaxSum = nums[0];
        for (int ind = 1; ind < nums.size(); ind++) {
            currMaxSum = max(currMaxSum + nums[ind], nums[ind]);
            globalMaxSum = max(globalMaxSum, currMaxSum);
        }
        return globalMaxSum;
}
int main(){
    vector<int>arr={1,-2,3,4,4,-2};
    cout<<maxSumSubarray(arr);
    return 0;
}