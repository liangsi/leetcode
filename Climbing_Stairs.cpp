class Solution {
public:
    int climbStairs(int n) {
        vector<int> m(n,0);//distinct ways to step i 
        m[0] = 1;
        m[1] = 2;
        for( int i = 2 ; i < m.size() ; i++ ) {
            m[i] = m[i-1] + m[i-2];//ways to step i equals sum of ways to i-1 plus ways to i-2
        }
        return m[m.size()-1];
    }
};