// Last updated: 15/09/2026 12:21:34
#include <vector>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int min_counter = strs[0].size();
        int counter =0;

        for (const std::string& str : strs){
            counter = 0;
            for (int i=0; i< strs[0].size() ; i++){
            
                if (str[i] == strs[0][i])
                counter++;
           
            else{
                break;
            }
            }
            if (counter < min_counter)
            min_counter = counter;
        }
        return strs[0].substr(0, min_counter);
  }   
};