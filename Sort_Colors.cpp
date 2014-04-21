class Solution {
public:
    void sortColors(int A[], int n) {
        int p0 = 0, p2 = n-1, p = 0;
        while(p <= p2){
            if(A[p] == 0){
                int tmp = A[p0];
                A[p0] = A[p];
                A[p] = tmp;
                p0++;
            }
            else if(A[p] == 2){
                int tmp = A[p2];
                A[p2] = A[p];
                A[p] = tmp;
                p2--;
                continue;
            }
            p++;
        }
    }
};