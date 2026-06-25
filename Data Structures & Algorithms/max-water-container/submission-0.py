class Solution:
    def maxArea(self, heights: List[int]) -> int:
        water = 0
        l,r = 0, len(heights)-1

        while l < r:
            current = 0
            height = min(heights[l], heights[r])
            current = (height * (r-l))
            water = max(water, current)

            if heights[l] < heights[r]:
                l += 1
            else:
                r -= 1
        return water 
        