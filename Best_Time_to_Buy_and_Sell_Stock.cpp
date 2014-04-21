class Solution {
public:
    int maxProfit(vector<int> &prices) {
        vector<int> max(prices.size(),0); // dp matrix
        if(prices.size() == 0){
            return 0;
        }
        int r = 0;
        for(int i = 1; i < prices.size() ; i++) {
            int gain = prices[i]-prices[i-1];
            max[i] = (max[i-1]+gain) > gain ? (max[i-1]+gain):gain;
            if( max[i] > r ) {
                r = max[i];
            }
        }
        return r;
        
    }
};