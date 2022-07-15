//    vector<int> topKFrequent(vector<int>& nums, int k) {
//         //for storing unique value
//         vector<int> v;
//         //map for freq
//         unordered_map<int, int> count_map;
//         //calculate freq
//         for(auto n: nums) {
//             count_map[n]++;
//         }
//         priority_queue<pair<int, int>> maxHeap;
//         for(auto& pair: count_map){
//             maxHeap.emplace(pair.second, pair.first);
//         } 
//         while(k--)
//         {
//             v.push_back(maxHeap.top().second);
//             maxHeap.pop();
//         }
//         return v;
//     }