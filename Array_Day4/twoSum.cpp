#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> indices;
    for (int i = 0; i < nums.size(); i++)
    {
        int b = target - nums[i];
        if (indices.find(b) != indices.end())
        {
            return {indices[b], i};
        }
        indices[nums[i]] = i;
    }
    return {};
}
int main(){
    vector<int>arr={2,7,11,15};
    int target=9;
    vector<int>a=twoSum(arr,target);
    for(int x:a){
        cout<<x<<" ";
    }
    return 0;
}