class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<int> level(n,0);
        vector<vector<int> > r(n,level);
        int l=0, h=n, num=1;
        while(h>l){
            for(int j=l;j<h;j++){
                r[l][j] = num++;
            }
            for(int j=l+1;j<h;j++){
                r[j][h-1] = num++;
            }
            for(int j=h-2;j>=l;j--){
                r[h-1][j] = num++;
            }
            for(int j=h-2;j>l;j--){
                r[j][l] = num++;
            }
            h--;l++;
        }
        return r;
    }
};