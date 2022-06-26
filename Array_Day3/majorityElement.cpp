#include <bits/stdc++.h>
using namespace std;
  int majorityElement(vector<int>& nums) {
         int majority,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count)
            {
                count+=(nums[i]==majority ? 1 : -1);
            }
            else
            {
                majority=nums[i];
                count=1;
            }
        }
        return majority;
    }
    int main(){
        vector<int>a={2,2,1,1,1,2,2};
        cout<<majorityElement(a);
        return 0;
    }