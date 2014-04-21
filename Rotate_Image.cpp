class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        int l=0, h=matrix.size()-1;
        while( h > l ) {
            vector<int> tmp(h-l,0);
            for(int i=l; i<h; i++){
                tmp[i-l] = matrix[l][i];
            }
            for(int i=l; i<h; i++){
                matrix[l][i] = matrix[matrix.size()-1-i][l];
            }
            
            for(int i=l+1; i<h+1; i++){
                matrix[i][l] = matrix[h][i];
            }
            for(int i=l+1; i<h+1; i++){
                matrix[h][i] = matrix[matrix.size()-1-i][h];
            }
            for(int i=l; i<h; i++){
                matrix[i][h] = tmp[i-l];
            }
            l++;
            h--;
        }
    }
};