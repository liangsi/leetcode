class Solution {
public:
    bool check(vector<int> q, int cur){
        for(int i = 0; i < cur; i++) {
            if(q[i]==q[cur]||q[i]==q[cur]-(cur-i)||q[i]==q[cur]+(cur-i)){
                return false;
            }
        }
        return true;
    } //check feasiblility
    
    int totalNQueens(int n) {
        int num = 0, cur = 0;
        vector<int> q(n,0);
        while(cur >= 0) {
            if(cur<n && q[cur]<n){
                if(!check(q,cur)){
                    q[cur]++;
                }
                else{
                    cur++;
                    if(cur < n) {
                        q[cur] = 0;
                    }
                }
            }
            else{
                if(cur == n){
                    num++;
                }
                cur--;
                if(cur >= 0){
                    q[cur]++;
                }
            }
        }
        return num;
    }
};