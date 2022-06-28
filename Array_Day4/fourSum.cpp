#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int>> res;
        int n = nums.size(); 
        sort(nums.begin(),nums.end());
        for(int i= 0; i< n-3; i++) 
        {
            long long target_3 = target - nums[i];
            for (int j= i+1; j< n-2; j++) 
            {
                long long target_2 = target_3 - nums[j];
                int front = j + 1;
                int back = n - 1;
                while(front < back) 
                {
                    long long two_sum = nums[front] + nums[back];
                    if (two_sum < target_2)
                    {
                        front++;
                    }
                    else if (two_sum > target_2)
                    {
                        back--;
                    }
                    else 
                    {

                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = nums[i];
                        quadruplet[1] = nums[j];
                        quadruplet[2] = nums[front];
                        quadruplet[3] = nums[back];
                        res.push_back(quadruplet);

                        // Processing the duplicates of number 3
                        while (front < back && nums[front] == quadruplet[2])
                        {
                            front++;
                        }

                        // Processing the duplicates of number 4
                        while (front < back && nums[back] == quadruplet[3])
                        {
                            back--;
                        }
                    }
                }

                // Processing the duplicates of number 2
                while(j + 1 < n-2 && nums[j + 1] == nums[j])
                {
                    j++;
                }
            }

            // Processing the duplicates of number 1
            while (i + 1 < n-3 && nums[i + 1] == nums[i])
            {
                i++;
            }
        }
        return res;
    }
int main(){
    vector<int>arr={1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>>a=fourSum(arr,target);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}