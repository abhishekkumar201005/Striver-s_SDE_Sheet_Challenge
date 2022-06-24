#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i = m - 1, j = n - 1, k = m + n - 1;
     while(i >= 0 and j >= 0) {
         if(nums1[i] < nums2[j]) {
             nums1[k--] = nums2[j--];
         } else {
             nums1[k--] = nums1[i--];
         }
     }
     while(j >= 0) {
         nums1[k--] = nums2[j--];
     }
    }

int main(){
    vector<int>n1={1,2,3};
    vector<int>n2={2,5,6};
    int m=n1.size(),n=n2.size();
    merge(n1,m,n2,n);
    for(int i=0;i<m+n;i++){
        cout<<n1[i]<<" ";
    }
    return 0;
}