class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pairs;
        for (int i = 0; i < position.size(); i++) {
            pairs.push_back({position[i], speed[i]});
        }
        sort(pairs.begin(), pairs.end());
        stack<double> s;

        for(int i = pairs.size() -1; i >= 0; i--) {
            int pos = pairs[i].first;
            int spd = pairs[i].second;

            double time = (double)(target - pos) / spd;

            if (s.empty() || time > s.top()) {
                s.push(time);
            }
        }
        return s.size();
    }
};
