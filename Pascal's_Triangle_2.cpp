class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> r(1,1);
        vector<int> tmp;
        for(int i=0;i<rowIndex;i++){
            tmp = r;
            for(int j=1;j<=i;j++){
                r[j]+=tmp[j-1];
            }
            r.push_back(1);
        }
        return r;
    }
};