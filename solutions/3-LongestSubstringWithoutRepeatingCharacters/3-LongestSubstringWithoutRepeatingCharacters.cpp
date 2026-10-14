// Last updated: 14/10/2026 21:55:15
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        std::deque<char> buffer;
        int max_buffer_size = 0;
        int actual_buffer_size = 0;

        for (char letter_minuscule : s){
            if (std::find(buffer.begin(),buffer.end(),letter_minuscule) == buffer.end()){
                buffer.push_back(letter_minuscule);
                actual_buffer_size = buffer.size();

                if (actual_buffer_size > max_buffer_size ){
                    max_buffer_size = actual_buffer_size;
                }

            }
            else{
                while(std::find(buffer.begin(),buffer.end(),letter_minuscule) != buffer.end()){
                    buffer.pop_front();
                }
                buffer.push_back(letter_minuscule);
                actual_buffer_size = buffer.size();


            }
               
            }
            return max_buffer_size;

        }

};