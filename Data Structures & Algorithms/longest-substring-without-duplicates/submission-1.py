class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        checker  = set()
        l = 0
        res = 0
        for i in range(len(s)):
            while s[i] in checker:
                checker.remove(s[l])
                l += 1
            checker.add(s[i])
            res = max(res, i - l + 1)

        return res