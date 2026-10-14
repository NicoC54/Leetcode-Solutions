// Last updated: 14/10/2026 20:46:55
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index_writable = 0;

        for (int num : nums){
            if (num != 0){
                nums[index_writable] = num;
                index_writable++;
            }
        }

        for (int i = index_writable; i < nums.size(); i ++){
            nums[i] = 0;
        }
        
    }
};