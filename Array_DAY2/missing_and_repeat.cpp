#include <bits/stdc++.h> 
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
   unordered_map<int,int>freq;
   for(int i=0;i<n;i++){
       freq[arr[i]]++;
   }
   pair<int,int>ans;
   for(int i=1;i<=arr.size();i++){
    if(freq[i]==0){
           ans.first=i;
       }
       if(freq[i]>1){
           ans.second=i;
       }
       
   }
   return ans;
}
 int main(){
        vector<int>nums={3,1,2,5,3};
        int n=nums.size();
        pair<int,int>a=missingAndRepeating(nums,n);
        cout<<"Missing and repeat number is  : ";
        cout<<a.first<<" and "<<a.second;
        return 0;
    }