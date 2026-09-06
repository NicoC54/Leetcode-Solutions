// Last updated: 06/09/2026 17:05:50
class Solution {
public:
    int romanToInt(string s) {
    
    int length = s.length();
    int sum = 0;
    char last_number = ' ';


    for (int i=0; i<length; i++){
        switch(s[i]){
            case 'M':
            if (last_number == 'C'){
            sum+=800;
            }
            else{
                sum+=1000;
            }
                break;
            
            case 'D':
            if (last_number == 'C'){
            sum+=300;
            }
            else{
                sum+=500;
            }
                break;

            case 'C':
            if (last_number == 'X'){
            sum+=80;
            }
            else{
                sum+=100;
            }
                break;

            case 'L':
            if (last_number == 'X'){
            sum+=30;
            }
            else{
                sum+=50;
            }
                break;

            case 'X':
             if (last_number == 'I'){
            sum+=8;
            }
            else{
                sum+=10;
            }
                break;

            case 'V':
            if (last_number == 'I'){
            sum+=3;
            }
            else{
                sum+=5;
            }

                break;

            case 'I':
            sum+=1;
                break;
            
        }
        last_number = s[i];
    }
        
    return sum;
    }
};