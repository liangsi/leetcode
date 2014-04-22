class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n==0){
            return n;
        }
        int p = 1, count = 0, cur = A[0];
        for(int i=1;i<n;i++){
            if(A[i]==cur){
                count++;
            }
            else{
                count=0;
                cur = A[i];
            }
            if(count<2){
                A[p++] = A[i];
            }
        }
        return p;
    }
};