// Last updated: 14/10/2026 21:33:09
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int ecart_max = 0;
        int minimum = prices[0];
        int ecart = 0;

        for (int i=1; i<prices.size(); i++){
            if (prices[i]<minimum){
                minimum = prices[i];
            }
            else{
                ecart = prices[i] - minimum;

                if (ecart>ecart_max){
                    ecart_max = ecart;
                }

            }
        }

        return ecart_max;
        
    }
};