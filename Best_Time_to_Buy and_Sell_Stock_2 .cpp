class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int p = 0,t;
        for(int i=1; i<prices.size(); i++ ) {
            t = prices[i] - prices[i-1];
            if(t >= 0) {
                p += t;
            }
        }
        return p;
    }
};