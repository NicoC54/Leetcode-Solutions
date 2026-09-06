// Last updated: 06/09/2026 11:48:30
class Solution {
public:
    bool isPalindrome(int x) {

        std::string text = std::to_string(x);

        int length = text.length();
        int mid_length = length/2;

        for (int i = 0; i<mid_length; i++){
            if (text[i]!=text[length-1-i]){
                return false;
            }  
        }
        return true;

        
        
    }
};