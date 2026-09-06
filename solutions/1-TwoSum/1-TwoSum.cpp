// Last updated: 06/09/2026 11:48:28
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    
    
    for (int i=0; i<nums.size(); i++){
        for (int j=i+1; j<nums.size();j++){

            int sum = nums[i] + nums[j];

            if (sum == target){
                return {i,j};

            }
            
        }
    }
        
    

return {0,0};
}
};