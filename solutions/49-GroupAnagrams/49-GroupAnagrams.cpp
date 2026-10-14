// Last updated: 14/10/2026 20:19:19
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::unordered_map<std::string,std::vector<std::string>> dict;
        std::vector<std::vector<std::string>> result_anagram;
        std::vector<std::string> vector_anagram;
        for (std::string& mot : strs){

            std::string mot_non_trie = mot;

            std::sort(mot.begin(),mot.end());

                if (dict.count(mot) == 0){
                    dict[mot].push_back(mot_non_trie);
                }
                else{
                    dict[mot].push_back(mot_non_trie);
                }

            }

    

        for (const auto& [key,value] : dict){
            vector_anagram = {};
            for (std::string mot : value){
                vector_anagram.push_back(mot);
            }
            result_anagram.push_back(vector_anagram);
        }


        return result_anagram;


            }
};