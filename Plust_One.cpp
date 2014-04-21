class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int c = 1;
        vector<int> result;
        int n = digits.size()-1;
        while(n>=0){
            digits[n] += c;
            if(digits[n] > 9) {
                c = 1;
                digits[n] -= 10;
            }
            else {
                c = 0;
            }
            n--;
        }
        if( c == 0 ){
            return digits;
        }
        else{
            result.push_back(c);
            for(int i=0;i < digits.size(); i++){
                result.push_back(digits[i]);
            }
            return result;
        }
    }
};