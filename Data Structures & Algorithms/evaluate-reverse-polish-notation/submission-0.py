from typing import List
import operator

class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        ops = {
            "+": operator.add,
            "-": operator.sub,
            "*": operator.mul,
            "/": lambda a, b: int(a / b)  # truncates toward 0
        }
        
        stack = []
        
        for char in tokens:
            if char not in ops:  # operand
                stack.append(int(char))
            else:  # operator
                b = stack.pop()
                a = stack.pop()
                stack.append(ops[char](a, b))
        
        return stack[0]
