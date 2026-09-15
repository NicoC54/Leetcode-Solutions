// Last updated: 15/09/2026 12:07:18
#include <map>
#include <vector>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        std::map<int,char> Common ={};
        int counter=0;
        int min_counter=0;
        std::string output = "";

        std::string str = strs[0];
        for (int i=0; i < str.size(); i++){
                Common[i] = str[i];
        }

        min_counter = Common.size();

        for (const std::string& str : strs){

            counter = 0;

            for (int i=0; i< str.size(); i++){
                if (str[i] == Common[i]){
                counter +=1; }
                else{
                    break;
                }
            }
              if (counter < min_counter){
                min_counter = counter;}

        }
        for (int i = 0; i<min_counter;i++){
            output += Common[i];
        }
        return output;
    }
};