class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > result;
        if(numRows==0){
            return result;
        }
        vector<int> r;
        r.push_back(1);
        result.push_back(r);
        for(int i=1; i<numRows; i++) {
            r.clear();
            r.push_back(1);
            for(int j=1;j<i;j++){
                r.push_back(result[i-1][j-1]+result[i-1][j]);
            }
            r.push_back(1);
            result.push_back(r);
        }
        return result;
    }
};