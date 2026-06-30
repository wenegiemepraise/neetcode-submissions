class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        vector<int> res(temperatures.size(), 0);

        for (int i =0; i < temperatures.size(); i++){
            if (s.empty()){
                s.push(i);
            } else if ( temperatures[s.top()] < temperatures[i]){
                while (!s.empty() && temperatures[i] > temperatures[s.top()]){
                    int index = s.top();
                    res[index] = i - index;
                    s.pop();
                }
            }
            s.push(i);
        }
        return res;
    }
};
