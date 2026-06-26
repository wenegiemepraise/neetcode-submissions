class Solution {
public:
    bool isPrefixAndSuffix(const string& small, const string& big) {
        int n = small.size();
        int m = big.size();

        if (n > m) return false;

        for (int i = 0; i < n; i++) {
            if (small[i] != big[i]) return false;
            if (small[i] != big[m - n + i]) return false;
        }

        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int res = 0;

        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    res++;
                }
            }
        }

        return res;
    }
};