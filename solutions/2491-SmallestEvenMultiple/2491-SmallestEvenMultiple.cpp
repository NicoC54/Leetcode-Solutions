// Last updated: 06/09/2026 15:03:59
class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        if (n%2==0){
            return n;
        }
        else {
            return 2*n;
        }
    }
};