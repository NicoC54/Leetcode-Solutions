// Last updated: 14/10/2026 19:11:37
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        if (image.empty()){
            return {};
        }

        std::vector<vector<int>> image_flipped;

        for (int i = 0; i < image.size(); i ++){
            std::vector<int> ligne_inversee = {};
            for (int j=image[0].size() - 1; j >= 0 ; j--){
                if (image[i][j] == 1){
                    image[i][j] = 0;
                }
                else{
                    image[i][j] = 1;
                }
                ligne_inversee.push_back(image[i][j]);
            }
            image_flipped.push_back(ligne_inversee);

        }
        return image_flipped;
        
    }
};