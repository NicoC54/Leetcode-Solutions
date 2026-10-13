// Last updated: 13/10/2026 15:37:44
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> dict;

        if (nums.empty()){
            return {};
        }

        for (int i = 0; i<nums.size() ; i++){
            int complement = target - nums[i];

            if (dict.find(complement) != dict.end()){
                return {dict[complement], i};
            }
            else{
                 dict[nums[i]] = i;
            }
        }

        return {};
        
    }
};