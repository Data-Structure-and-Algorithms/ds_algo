class Solution:
    def twosum(self, nums, target):
        output_list = []
        num_dict = {}
        for idx, number in enumerate(nums):
            if target-number in num_dict:
               return [idx, num_dict[target-number]]
            num_dict[number] = idx
        return output_list


