#include<algorithm>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        if (nums.size()==0){
            return false;
        }
        int i = 0;
        for (int j = 1; j < nums.size(); j++){
            if (nums[j] == nums[i]) {
              return true;
            }   
              i++;

        }
          return false;
        }
};
