// Last updated: 14/10/2026 18:55:19
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int argent_client_max = 0;
        int somme_actuelle = 0;

        for (int i =0; i<accounts.size(); i++){
            somme_actuelle = 0;
            for (int j=0; j<accounts[0].size(); j++){
                somme_actuelle += accounts[i][j];
                if (argent_client_max < somme_actuelle){
                    argent_client_max = somme_actuelle;
                }

            }
        }

    return argent_client_max;
        
    }
};