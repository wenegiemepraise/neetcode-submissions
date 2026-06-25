class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        big_l, big_r = 0, len(matrix)-1
        while big_l <= big_r:
            big_mid = (big_l + big_r) // 2
            if matrix[big_mid][0] <= target <= matrix[big_mid][-1]:
                l, r = 0, len(matrix[big_mid]) -1
                while l <= r:
                    mid = (l+r) // 2
                    if matrix[big_mid][mid] == target:
                        return True
                    elif matrix[big_mid][mid] > target:
                        r = mid -1
                    else:
                        l = mid + 1
                return False
            elif matrix[big_mid][0] > target:
                big_r = big_mid -1
            else:
                big_l = big_mid +1 
        return False