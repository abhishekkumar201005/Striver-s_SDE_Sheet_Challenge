//--------------Subset Sum--------

// void solve(vector<int> &num, vector<int> &ans, int index, int size, int sum){
//     // base case
//     if(index == size){
//         ans.push_back(sum);
//         return;
//     }
    
//     // include the index in sum
//     solve(num, ans, index+1, size, sum+num[index]);
    
//     // not including the index in sum
//     solve(num, ans, index+1, size, sum);
    
// }
// vector<int> subsetSum(vector<int> &num)
// {
//     vector<int>ans;
//     solve(num, ans, 0, num.size(), 0);
//     sort(ans.begin(), ans.end());
//     return ans;
// }