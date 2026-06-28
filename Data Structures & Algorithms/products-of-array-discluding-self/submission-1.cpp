class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(), 1);
        vector<int> postfix(nums.size(), 1);
        int psum = 1;

        for (int i = 1; i < nums.size(); i++){
            psum *= nums[i-1];
            prefix[i] = psum;
        }
        int postsum = 1;
        for (int j = nums.size()-2; j >= 0 ; j--){
            postsum *= nums[j+1];
            postfix[j] = postsum;
        }
        vector<int> res(nums.size(), 0);
        for (int k =0; k <prefix.size(); k++){
            res[k] = prefix[k] * postfix[k];
        }

        return res;
    }
};
