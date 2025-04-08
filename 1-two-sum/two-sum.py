class Solution(object):
    def twoSum(self, nums, target):
        index_map={}

        for i, num in enumerate(nums):
            needed = target - num
            if needed in index_map:
                return [index_map[needed], i]
            index_map[num] = i
        
        return []



        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        