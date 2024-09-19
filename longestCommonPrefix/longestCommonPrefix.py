class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if  len(strs) == 0 : return ""

        prefix = strs[0] # get first string as prefix

        for i in range(1,len(strs)):
            current = strs[i] # to get the 2nd and then increment in loop
            while not current.startswith(prefix):
                prefix = prefix[:-1]
                if prefix == "":
                    return ""
        return prefix        