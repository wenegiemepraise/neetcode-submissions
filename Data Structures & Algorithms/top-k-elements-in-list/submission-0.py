class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = Counter(nums)
        heap = [[-val, key] for key, val in count.items()]
        heapq.heapify(heap)
        res = []

        while heap and k > 0:
            res.append(heapq.heappop(heap)[-1])
            k -= 1

        return res

