#include <algorithm>
class Solution {
public:
static bool cmp(string a , string b) {
            if (a.size() != b.size()){
                return a.size() > b.size();
            }
                return a > b;   }
    string kthLargestNumber(vector<string>& nums, int k) {
        nth_element(nums.begin() , nums.begin() + k-1 , nums.end() , cmp
         );
        return nums[k-1];
    
    }
};