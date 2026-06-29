class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int res = 0;

        while (l < r){
            int height = min(heights[l], heights[r]);
            res = max(res, height * (r-l));

            if (heights[l] > heights[r]) {
                r--;
            } else{
                l++;
            }
        }

        return res;
    }
};
