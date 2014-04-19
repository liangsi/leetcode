class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int p = 0,r = n;
        for(int i=1;i<n;i++){
            if(A[i-1] != A[i]){//every time the value changes add the new number to the head array
                p++;
                if(p!=i){
                    A[p] = A[i];
                }
            }
            else{
                r--;
            }
        }
        return r;
    }
};