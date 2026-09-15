// Last updated: 15/09/2026 14:19:49
#include <deque>
#include <stack>

class Solution {
public:
    bool isValid(string s) {

        std::stack<char> stack = {};

        for (const char& letter : s){

            if ((letter == '(' )|| (letter == '[') || (letter == '{')){
                stack.push(letter);
            }

            else if (stack.empty())
                return false;

            else if ( (letter == ')' && stack.top() =='(' )|| (letter == ']' && stack.top() =='[' ) || (letter == '}' && stack.top() =='{' ) ){
                stack.pop();
            }
            else{
                return false;
            }

        }
        return stack.empty();

        
}
};