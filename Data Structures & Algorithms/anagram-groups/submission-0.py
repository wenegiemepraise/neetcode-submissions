class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        my_map = defaultdict(list)
        res = []

        for word in strs:
            key = [0] * 26
            for char in word:
                key[ord(char)-ord("a")] += 1
            my_map[tuple(key)].append(word)

        return list(my_map.values())
        