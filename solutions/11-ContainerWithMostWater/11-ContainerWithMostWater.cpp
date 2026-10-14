// Last updated: 14/10/2026 21:19:28
class Solution {
public:
    int maxArea(vector<int>& height) {

        int barre_gauche = 0;
        int barre_droite = height.size()-1;
        int aire_max = 0;
        int aire = 0;

        for (int i=0; i< height.size(); i++){
            int largeur = barre_droite - barre_gauche;
            aire = largeur * std::min(height[barre_gauche], height[barre_droite]);

            if (aire > aire_max){
                aire_max = aire;
            }

            if (height[barre_gauche]<height[barre_droite]){
                barre_gauche++;
            }
            else{
                barre_droite--;
            }
        }
        return aire_max;
        
    }
};