#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    //rotate 90 degree---------
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                //for transpose
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }

    int main()
{
    vector<vector<int>> ab = {{1,2,3}, {4,5,6}, {7,8,9}};
    rotate(ab);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ab[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}