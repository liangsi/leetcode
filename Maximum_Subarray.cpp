class Solution {
public:
    int maxSubArray(int A[], int n) {
        int max = INT_MIN, sum = 0;////maximun subarray's sum of the array A[k:i](k>=0&&k<i)
        for( int i=0 ; i < n; i++ ) {
            sum += A[i];
            if(max < sum){
                max = sum;
            }
            if(sum < 0) {
                sum = 0;
            }
        }
        return max;
    }
};