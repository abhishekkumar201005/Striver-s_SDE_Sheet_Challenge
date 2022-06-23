#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {
         int n=nums.size();
        int st,en;
        //check from end to start for larg element
        for(en=n-2;en>=0;en--){
            if(nums[en]<nums[en+1]){
                break;
            }
        }
        if(en<0){
            reverse(nums.begin(),nums.end());
        }else{
            //after finding breakpoint
            for(st=n-1;st>en;st--){
                if(nums[st]>nums[en]){
                    break;
                }
            }
            swap(nums[en],nums[st]);
            reverse(nums.begin()+en+1,nums.end());
        }
    };

    int main(){
        vector<int>a={1,2,3};
        nextPermutation(a);
        int n=a.size();
        for(int x:a){
            cout<<x << " ";
        }
        return 0;
    }