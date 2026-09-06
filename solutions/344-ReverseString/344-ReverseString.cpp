// Last updated: 06/09/2026 12:02:53
class Solution {
public:
    void reverseString(vector<char>& s) {

        int length = s.size();

        for (int i = 0 ; i < length/2 ; i++){
            char Left_value = s[i];
            char Right_value = s[length-1-i];
            s[i] = Right_value;
            s[length-1-i] = Left_value;
        }
        
    }
};