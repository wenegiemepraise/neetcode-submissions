class Solution:
    def minOperations(self, s: str) -> int:
        def check(start_char):
            res = 0
            curr = start_char
            for char in s:
                if char != curr:
                    res += 1
                curr = '1' if curr == '0' else '0'
            return res

        return min(check('0'), check('1'))