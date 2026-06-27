class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mp;
        for (string s: strs) {
            vector<int> key(26, 0);
            for (char c: s){
                key[c - 'a']++;
            }
            mp[key].push_back(s);
            
        }
        vector<vector<string>> res;
        for (const auto& p: mp){
            res.push_back(p.second);
        }
        return res;
    }
};
