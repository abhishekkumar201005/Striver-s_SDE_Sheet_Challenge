#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    if (!size(nums))
        return 0;
    sort(begin(nums), end(nums));
    int longest = 0, cur_longest = 1;
    for (int i = 1; i < size(nums); i++)
        if (nums[i] == nums[i - 1])
            continue;
        // consecutive element - update current streak length
        else if (nums[i] == nums[i - 1] + 1)
            cur_longest++;
        // reset current streak length
        else
            longest = max(longest, cur_longest), cur_longest = 1;
    return max(longest, cur_longest);
}
int main(){
    vector<int>arr={100,4,200,1,3,2};
    cout<<longestConsecutive(arr);
    return 0;
}