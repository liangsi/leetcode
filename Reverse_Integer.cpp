class Solution {
public:
    int reverse(int x) {
        int e;
        if(x>=0) e=1; 
        else{
            e=-1;
            x = -x;
        } 
        int r=0;
        while(x>9){
            r=r*10+x%10;
            x/=10;
        }
        r = r*10 + x;
        return r*e;
    }
};