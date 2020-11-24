#
# @lc app=leetcode.cn id=1 lang=python3
#
# [1] 两数之和
#

# @lc code=start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        #  #======= 暴力解法    ========
        # for i in range(len(nums)-1):
        #     for j in range(i+1,len(nums)):
        #         if (nums[i]+nums[j]==target):
        #             return i ,j

        #  #======= hashMap解法 ========
        map = {}
        for i,num in enumerate(nums):
            if map.get(target - num) is not None:
                return map.get(target - num),i
            map[num]=i



# @lc code=end

