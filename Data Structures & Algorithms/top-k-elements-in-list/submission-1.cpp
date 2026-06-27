class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int n : nums) {
            counts[n]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
        
        for (auto const& [e, f] : counts) {
            min_heap.push({f, e});

            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }
        vector<int> result;
        result.reserve(k);

        while (!min_heap.empty()){
            result.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return result;
    }
};
