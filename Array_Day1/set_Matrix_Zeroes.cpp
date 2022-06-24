#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &a)
{
    int n = a.size();
    int m = a[0].size();
    bool firstRow = false; // do we need to set first row zero
    bool firstCol = false; // do we need to ser first col zero
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            { // store rows and cols state in first row and col
                if (i == 0)
                    firstRow = true;
                if (j == 0)
                    firstCol = true;
                a[i][0] = 0;
                a[0][j] = 0;
            }
        }
    }
    // cout<<firstRow<<" "<<firstCol<<endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (a[i][0] == 0 || a[0][j] == 0)
            {
                a[i][j] = 0;
            }
        }
    }

    if (firstRow)
    {
        for (int i = 0; i < m; i++)
            a[0][i] = 0;
    }

    if (firstCol)
    {
        for (int i = 0; i < n; i++)
            a[i][0] = 0;
    }
}

int main()
{
    vector<vector<int>> ab = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    setZeroes(ab);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << ab[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}