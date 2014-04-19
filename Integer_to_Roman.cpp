class Solution {
public:
    string intToRoman(int num) {
        string r ="";
        char h[7] = { 'I','V','X','L','C','D','M'};
        int i = 0;
        while(num != 0){
            int d = num%10;
            num /= 10;
            
            string t = "";
            if(d<=3){
                for(int j=0 ; j<d ; j++){
                    t += h[i];
                }
            }
            else if(d<=5){
                for(int j=0 ; j<5-d ; j++){
                    t += h[i];
                }
                t += h[i+1];
            }
            else if(d<9){
                t = h[i+1];
                for(int j=0 ; j<d-5 ; j++){
                    t += h[i];
                }
            }
            else{
                t += h[i];
                t += h[i+2];
            }
            r = t+r;
            i+=2;
        }
        
        return r;
    }
};