class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int s = 0 , e = n;
        while(s != e) {
            if(A[s] == elem) {
                A[s] = A[e-1]; //exchange the position to the end of array
                e --;
            }
            else{
                s ++;
            }
        }
        return e;
    }
};