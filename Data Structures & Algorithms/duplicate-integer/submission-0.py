class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        arr = []
        for x in nums:
            for i in arr:
                if i == x:
                    return True
            arr.append(x)
        return False
