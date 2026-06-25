class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res = [1] * len(nums)
        prefix = 1
        for i, num in enumerate(nums):
            res[i] *= prefix
            prefix *= num

        postfix = 1
        pointer = -1
        for i, num in enumerate(nums[::-1]):
            res[pointer] *= postfix
            postfix *= num
            pointer -= 1

        return res
        