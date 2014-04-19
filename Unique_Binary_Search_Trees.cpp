class Solution {
public:
    int numTrees(int n) {
        vector<int> num(n+1,0);//dp
        num[0] = 1;
        num[1] = 1;
        for(int i=2;i<=n;i++){
            for(int k=0;k<i;k++){
                num[i]+=(num[k]*num[i-k-1]);//the num will be the product of left and right
            }
        }
        return num[n];
    }
};