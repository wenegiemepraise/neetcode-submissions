class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        my_map = defaultdict(int)
        nums.sort()
        for num in nums:
            needed = num - 1
            if needed in my_map:
                my_map[num] = my_map[needed] + 1
            else:
                my_map[num] = 1

        return max(my_map.values())
            
        