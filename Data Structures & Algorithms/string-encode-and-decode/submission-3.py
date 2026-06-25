class Solution:

    def encode(self, strs: List[str]) -> str:
        res = ""
        for word in strs:
            res += f"{word}#!!!!"
        return res 

    def decode(self, s: str) -> List[str]:
        return s.split("#!!!!")[:-1]
