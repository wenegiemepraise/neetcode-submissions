class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); i++){
            int needed = target - nums[i];
            if (num_map.find(needed) != num_map.end()){
                return {num_map[needed], i};
            }
            num_map[nums[i]] = i;
        }
        
    }
};
