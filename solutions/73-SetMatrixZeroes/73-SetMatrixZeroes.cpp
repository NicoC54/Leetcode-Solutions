// Last updated: 14/10/2026 19:34:47
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        std::vector<bool> null_rows(matrix.size(),false);
        std::vector<bool> null_cols(matrix[0].size(),false);

        for (int i = 0; i < matrix.size(); i++ ){
            for (int j=0; j < matrix[0].size(); j++){
                if (matrix[i][j] == 0){
                    null_rows[i] = true;
                    null_cols[j] = true;
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++ ){
            for (int j=0; j < matrix[0].size(); j++){
                if ((null_rows[i] == true) || (null_cols[j] == true)){
                    matrix[i][j]=0;
                }
                
            }
            
        }
        
    }
};