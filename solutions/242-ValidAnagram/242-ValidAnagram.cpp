// Last updated: 14/10/2026 20:02:24
class Solution {
public:
    bool isAnagram(string s, string t) {

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        if (s == t){
            return true;
        }

        return false;

        
    }
};