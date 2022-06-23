#include <bits/stdc++.h> 
using namespace std;
void sort012(int nums[], int n)
{
   //   Write your code here
    int low = 0, mid = 0, high = n - 1;
        
        // logic:
        while(mid <= high)
        {
            switch(nums[mid])
            {
                case 0: swap(nums[low++], nums[mid++]); break;
                
                case 1: mid++; break;
                
                case 2: swap(nums[mid], nums[high--]); break;
            }
        } 
}

    int main(){
        int nums[]={0,1,2,2,1,0};
        int n=sizeof(nums)/sizeof(nums[0]);
        sort012(nums,n);
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        return 0;
    }