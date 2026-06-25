class Solution:
    def check(self, nums: List[int]) -> bool:
        start = False
        for i in range(len(nums)-1):
            if nums[i+ 1] < nums[i]:
                start = True
                ptr = i+1
                break

        if start:
            while ptr < len(nums):
                if nums[ptr] > nums[0]:
                    return False
                ptr += 1

        return True
                