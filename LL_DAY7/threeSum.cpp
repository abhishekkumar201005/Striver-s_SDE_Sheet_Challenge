#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    if (nums.size() < 3)
    {
        return {};
    }
    if (nums[0] > 0)
    {
        return {};
    }
    unordered_map<int, int> hashMap;
    for (int i = 0; i < nums.size(); ++i)
    { // Hashing of Indices
        hashMap[nums[i]] = i;
    }
    vector<vector<int>> answer;
    for (int i = 0; i < nums.size() - 2; ++i)
    {
        if (nums[i] > 0)
        {
            break;
        }
        for (int j = i + 1; j < nums.size() - 1; ++j)
        {
            int required = -1 * (nums[i] + nums[j]);
            if (hashMap.count(required) && hashMap.find(required)->second > j)
            {
                answer.push_back({nums[i], nums[j], required});
            }
            j = hashMap.find(nums[j])->second;
        }
        i = hashMap.find(nums[i])->second;
    }
    return answer;
}

int main(){
    vector<int>arr={-1,0,1,2,-1,-4};
    vector<vector<int>>a=threeSum(arr);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}