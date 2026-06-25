class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        lowest = float('inf')
        res = 0

        for i in range(len(prices)):
            if prices[i] < lowest:
                lowest = prices[i]
            else:
                res = max(res, prices[i]-lowest)

        return res