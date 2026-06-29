class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp {
            {']', '['},
            {'}', '{'},
            {')', '('}
        };

        stack<int> stk;
        for (char c: s){
            if (mp.find(c) == mp.end()){
                stk.push(c);
            } else {
                if (stk.size() > 0 && mp[c] == stk.top()){
                    stk.pop();
                } else{
                    return false;
                }
            }
        }
        return stk.size() == 0;

    }
};
