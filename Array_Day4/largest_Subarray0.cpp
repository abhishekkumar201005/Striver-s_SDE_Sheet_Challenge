#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector<int> arr)
{
    int n = arr.size();
    unordered_map<int, int> m;
    // creating maxSum and sum variable
    int maxLeng = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];

        if (sum == 0)
        {
            maxLeng = i + 1;
        }
        else if (m.find(sum) != m.end())
        {
            int j = m[sum];
            maxLeng = max(maxLeng, i - j);
        }
        else
        {
            m[sum] = i;
        }
    }

    // returning the maxLen

    return maxLeng;
}
int main(){
    vector<int>arr={15,-2,2,-8,1,7,10,23};
    cout<<LongestSubsetWithZeroSum(arr);
}