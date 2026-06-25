class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        my_map = {}

        for i, num in enumerate(nums):
            needed = target - num
            if needed in my_map:
                return [my_map[needed], i]
            my_map[num] = i
        