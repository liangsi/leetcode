class Solution {
public:
    int singleNumber(int A[], int n) {
        int t = 0;
        for(int i=0;i<n;i++) {
            //xor could do this because for the elements appears twice, they will courteract to 0
            t ^= A[i];
        }
        return t;
    }
};