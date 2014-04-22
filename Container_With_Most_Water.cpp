class Solution {
public:
    int maxArea(vector<int> &height) {
        int h = height.size()-1;
        int l = 0;
        int max = 0;
        while(h > l){
            int area;
            if(height[h]>height[l]){
                area = height[l] * (h-l);
                l++;
            }
            else{
                area = height[h] * (h-l);
                h--;
            }
            max = (max<area)?area:max;
        }
        return max;
    }
};