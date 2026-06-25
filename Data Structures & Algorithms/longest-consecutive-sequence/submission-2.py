class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        my_map = defaultdict(int)
        nums = set(nums)
        longest = 0
        for num in nums:
            # only start counting if num is the start of a sequence
            if num - 1 not in nums:
                length = 1
                current = num
                while current + 1 in nums:
                    current += 1
                    length += 1
                longest = max(longest, length)

        return longest

            
                
            