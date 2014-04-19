class Solution {
public:
    int singleNumber(int A[], int n) {
        vector<int> bit(32,0); // consider bit[] as the sum of the binary format sum of each number
        int r = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<32; j++){
                bit[j] += ((A[i]>>j) & 1);
            }
        }
        
        for(int j=0; j<32 ; j++){
            bit[j] %= 3;
            r |= (bit[j]<<j);
        }
        
        return r;
    }
};