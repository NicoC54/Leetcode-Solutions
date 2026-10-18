// Last updated: 18/10/2026 10:59:02
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int valide = 0;
        std::unordered_map<int,int> dict;
        int index_ecriture = 0;

        for (int num : nums){
            if (dict.count(num)==0){
                dict[num]=1;
                nums[index_ecriture]=num;
                index_ecriture++;
            }
            else {
                dict[num]+=1;
            }
    }
    return index_ecriture;
}
};