// Last updated: 14/10/2026 20:35:18
class Solution {
public:
    bool isPalindrome(string s) {

        if (s.empty()){
            return true;
        }
        std::deque<char> deque_letter;

        for (char letter : s){
            if (std::isalnum(letter)){
                char min_letter = std::tolower(letter);
                deque_letter.push_back(min_letter);
            }
            else{
                continue;
            }
        }

        while(deque_letter.size()>1) {
            if (deque_letter.front() == deque_letter.back()){
                deque_letter.pop_front();
                deque_letter.pop_back();
                }

            else{
                return false;
            }
                

            }

        return true;
        
    }
};