// Last updated: 14/10/2026 19:53:22
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        if (nums.empty()){
            return false;
        }

        std::unordered_map<int,int> present;

        for (int num : nums){
            if (present.count(num)==0){
                present[num]=1;
            } 
            else{
                present[num]+=1; 
            }
        }

        for (int num : nums){
            if (present[num] >= 2){
                return true;
            }    
    }

    return false;

    }
};