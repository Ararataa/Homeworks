class Solution {
public:
    int romanToInt(string roman) {
        unordered_map<char, int> romanToInteger;
        
        romanToInteger['I'] = 1;
        romanToInteger['V'] = 5;
        romanToInteger['X'] = 10;
        romanToInteger['L'] = 50;
        romanToInteger['C'] = 100;
        romanToInteger['D'] = 500;
        romanToInteger['M'] = 1000;
        
        int integer = 0;
        
        for(int i = 0; i < roman.length(); i++){
            if(romanToInteger[roman[i]] < romanToInteger[roman[i+1]]){
                integer -= romanToInteger[roman[i]];
            }
            else{
                integer += romanToInteger[roman[i]];
            }
        }
        return integer;
    }
};