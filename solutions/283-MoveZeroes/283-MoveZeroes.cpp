// Last updated: 06/09/2026 11:48:31
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int k = 0;
        int length = nums.size();
        for (int i = 0 ; i < nums.size() ; i++) {

            if (nums[i] != 0) {

                nums[k] = nums[i];
                k = k + 1 ;
            
            }
            }

        for  (int j=k ; j < nums.size() ; j++) {
            nums[j] = 0;
        }

        
  
}
};