#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> &a)
{
    int y = -1, z = -1, cy = 0, cz = 0;

    for (const auto &x : a)
    {
        if (x == y)
            cy++;
        else if (x == z)
            cz++;
        else if (!cy)
            y = x, cy = 1;
        else if (!cz)
            z = x, cz = 1;
        else
            cy--, cz--;
    }

    cy = cz = 0;
    for (const auto &x : a)
        if (x == y)
            cy++;
        else if (x == z)
            cz++;

    vector<int> r;
    if (cy > size(a) / 3)
        r.push_back(y);
    if (cz > size(a) / 3)
        r.push_back(z);
    return r;
}
int main()
{
    vector<int> arr = {1, 2, 2, 3, 2};
    vector<int> s = majorityElement(arr);
    for (auto it : s)
    {
        cout << it << " ";
    }
    return 0;
}