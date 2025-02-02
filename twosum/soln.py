class Solution:
    """
    The class solves the leetcode problem given
    It has a function that takes an arrays and loops through the array
    """
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        """
        It takes an array and then returns a list of ints
        It assumes all elements are integers in the input array
        """
        for i in range(len(nums)):
            j = i + 1
            while (j < len(nums)):
                if ((nums[i] + nums[j]) == target):
                    return ([i, j])
                j = j + 1
