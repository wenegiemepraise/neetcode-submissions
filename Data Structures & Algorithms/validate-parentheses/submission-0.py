class Solution:
    def isValid(self, s: str) -> bool:
        my_map = {")":"(", "}":"{", "]":"["}
        stack = []

        for char in s:
            if char not in my_map.keys():
                stack.append(char)
            else:
                if stack and my_map[char] == stack[-1]:
                    stack.pop()
                else:
                    return False
        return True if not stack else False
        