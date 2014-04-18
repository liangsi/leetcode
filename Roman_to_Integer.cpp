class Solution {
public:
    int romanToInt(string s) {
        int r = 0;
        map<char,int> h;//hash table of Roman digits
        h['I'] = 1;
        h['V'] = 5;
        h['X'] = 10;
        h['L'] = 50;
        h['C'] = 100;
        h['D'] = 500;
        h['M'] = 1000;
        
        for(int i = 0 ; i < s.size()-1 ; i++ ) {
            if(h[s[i]] >= h[s[i+1]]){
                r += h[s[i]];
            }
            else{
                r -= h[s[i]];
            }
        }
        r += h[s[s.size()-1]];
        
        return r;
    }
};