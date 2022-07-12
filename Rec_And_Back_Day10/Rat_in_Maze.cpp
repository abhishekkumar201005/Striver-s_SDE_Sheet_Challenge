//  void helper(vector<vector<int>> &m, int n, int r, int c,vector<vector<int>> &ans,vector<vector<int>> vis){
//         //cout<<"r: "<<r<<" c: "<<c<<endl;
//         if(!m[r][c]){
//             return;
//         }
//         if(r==(n-1) && c==(n-1)){
//             //cout<<"r & c"<<r<<" "<<c<<" p: "<<p<<endl;
//              vis[r][c]=1;
//              vector<int> temp;   
//             //ans.push_back(p);
//             for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 temp.push_back(vis[i][j]);
//             }
//         }
//             ans.push_back(temp);
      
//             return;
//         }
//         m[r][c]=0;
//         vis[r][c]=1;
//         if(r<n-1){
//             helper(m,n,r+1,c,ans,vis);
//             }
//         if(c<n-1){
//             helper(m,n,r,c+1,ans,vis);
//         }
//         if(r>0){
//             helper(m,n,r-1,c,ans,vis);
//             }
        
//         if(c>0){
//             helper(m,n,r,c-1,ans,vis);
//             }
        
//         m[r][c]=1;
//         vis[r][c]=0;
//     }
// vector<vector<int>> ratInAMaze(vector<vector<int> > &maze, int n){
//   // Write your code here.
//     vector<vector<int>> ans;
//     vector<vector<int>> vis(n, vector<int> (n,0));
//     vector<int> temp;
//     helper(maze,n,0,0,ans,vis);
//     sort(ans.begin(),ans.end());
//     return ans;
// }
