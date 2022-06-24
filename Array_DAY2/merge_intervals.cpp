#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{

    vector<vector<int>> mergeInt;
    if (intervals.size() == 0)
    {
        return mergeInt;
    }
    sort(intervals.begin(), intervals.end());
    vector<int> tempInt = intervals[0];

    for (auto it : intervals)
    {
        if (it[0] <= tempInt[1])
        {
            tempInt[1] = max(it[1], tempInt[1]);
        }
        else
        {
            mergeInt.push_back(tempInt);
            tempInt = it;
        }
    }
    mergeInt.push_back(tempInt);
    return mergeInt;
}

int main()
{
    vector<vector<int>> ab = {{1, 3}, {2, 6}, {8, 10},{15, 18}};
    merge(ab);
    return 0;
}