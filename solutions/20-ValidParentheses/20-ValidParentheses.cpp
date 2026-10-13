// Last updated: 13/10/2026 15:48:57
#include <deque>
#include <stack>

class Solution {
public:
    bool isValid(string s) {

        if (s==""){
            return true;
        }

        std::stack<char> queue;

        for (char c : s){
            if ((c == '{') || (c == '[') || (c == '(')){
                queue.push(c);
            }

            else if (c == '}'){
                if (queue.empty()){
                    return false;
                }
                char opening = queue.top();
                queue.pop();
                if (opening != '{'){
                    return false;
                }
            }
            else if (c == ']'){
                if (queue.empty()){
                    return false;
                }
                char opening = queue.top();
                queue.pop();
                if (opening != '['){
                    return false;
                }
            }

              else if (c == ')'){
                if (queue.empty()){
                    return false;
                }
                char opening = queue.top();
                queue.pop();
                if (opening != '('){
                    return false;
                }
            }
        }

    if (queue.empty()){
        return true;
    }

    return false;    
    }  

};