#
# @lc app=leetcode.cn id=7 lang=python3
#
# [7] 整数反转
#

# @lc code=start
class Solution:
    def reverse(self, x: int) -> int:
        rev :int = 0
        while (x!=0):
            pop :int = x % 10
            x =  int( x / 10)
            # TODO 判断边界值
            rev = rev * 10 + pop

        return rev
# @lc code=end

