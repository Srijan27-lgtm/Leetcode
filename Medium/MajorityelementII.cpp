class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
   for (int n : nums){
    freq[n]++;
   }
   int n = nums.size();
   vector<int> result;
   for(auto &p : freq) {
    if (p.second > n/3) {
        result.push_back(p.first);
    }
        
   }
   return result;
        
        
   }
};
